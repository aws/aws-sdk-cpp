/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/text-to-speech/TextToSpeech_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
    namespace TextToSpeech
    {
		static const unsigned BIT_WIDTH_16 = 16;
		static const unsigned MONO = 1;
		static const size_t KHZ_22_5 = 22050;
		static const size_t KHZ_16 = 16000;
		static const size_t KHZ_8 = 8000;

        struct CapabilityInfo
        {
            CapabilityInfo() : channels(MONO), sampleRate(KHZ_16), sampleWidthBits(BIT_WIDTH_16) {}

            unsigned channels;
            size_t sampleRate;
            unsigned sampleWidthBits;
        };

        struct DeviceInfo
        {
            Aws::String deviceName;
            Aws::String deviceId;
            Aws::Vector<CapabilityInfo> capabilities;
        };

        /**
         * Abstract class for configuring and sending linear pcm data to a sound card. 
         */
        class AWS_TEXT_TO_SPEECH_API PCMOutputDriver
        {
        public:
            virtual ~PCMOutputDriver();

            /**
             * Write a buffer of audio data to a device. The format of this data will be set in the SetActiveDevice function.
             * returns true if audio was successfully written to the device, false otherwise.
             */
            virtual bool WriteBufferToDevice(const unsigned char*, size_t) = 0;
            /**
             * Enumerate all devices and their capabilities. The device id and the capability will be returned to you
             * when a user calls SetActiveDevice();
             */
            virtual Aws::Vector<DeviceInfo> EnumerateDevices() const = 0;
            /**
             * Set the device and format that this driver should use. After this call, you should expect all calls to WriteBufferToDevice()
             * to be for the specified device and format.
             */
            virtual void SetActiveDevice(const DeviceInfo&, const CapabilityInfo&) = 0;

            /**
             * Get a friendly name for this driver.
             */
            virtual const char* GetName() const = 0;

            /**
             * Not used for most implementations. Some operating systems however, expect a constant stream of data to the device.
             * Since playing will be batchy, Prime() will be called before each new batch of audio data. This is the chance to reset
             * the device so it can play the audio.
             */
            virtual void Prime() {};

            /**
            * Not used for most implementations. Some operating systems however, expect a constant stream of data to the device.
            * Since playing will be batchy, Flush will be called after each batch of audio so that you can pause or reset the audio device.
            */
            virtual void Flush() {};
        };

        /**
         * Abstract factory for returning implementations of output drivers to the application. Provide an implementation of this
         * if you want to override operating system defaults.
         */
        class AWS_TEXT_TO_SPEECH_API PCMOutputDriverFactory
        {
        public:
            virtual ~PCMOutputDriverFactory() = default;

            /**
             * Return a list of drivers that you want supported for the application.
             */
            virtual Aws::Vector<std::shared_ptr<PCMOutputDriver>> LoadDrivers() const = 0;
        };

        /**
         * Returns a default factory. This factory handles operating system defaults:
         * Windows - WaveOut
         * Linux - PulseAudio
         * Apple - CoreAudio
         */
        AWS_TEXT_TO_SPEECH_API std::shared_ptr<PCMOutputDriverFactory> DefaultPCMOutputDriverFactoryInitFn();
    }
}
