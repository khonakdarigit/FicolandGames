using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioFadeScript : MonoBehaviour
{
    public static IEnumerator FadeOut(AudioSource audioSource, float FadeTimeDuration, float toVolume)
    {
        //float startVolume = audioSource.volume;

        while (audioSource.volume > toVolume)
        {
            audioSource.volume -= 0.2f * Time.deltaTime / FadeTimeDuration;

            yield return null;
        }

        if (toVolume == 0f)
            audioSource.Stop();

        audioSource.volume = toVolume;
    }

    public static IEnumerator FadeIn(AudioSource audioSource, float FadeTimeDuration, float toVolume)
    {
        float startVolume = 0.2f;

        if (!audioSource.isPlaying)
        {
            audioSource.volume = 0f;
            audioSource.Play();
        }
        while (audioSource.volume < toVolume)
        {
            audioSource.volume += startVolume * Time.deltaTime / FadeTimeDuration;

            yield return null;
        }

        audioSource.volume = toVolume;
    }
}
