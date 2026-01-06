/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/event-stream/event_stream.h>
#include <functional>
#include <aws/core/auth/AWSAuthSigner.h>

namespace Aws
{
    namespace Client
    {
        class AWSAuthSigner;
    }

    namespace Utils
    {
        namespace Event
        {
            /**
             * Utility class that wraps the logic of translating event messages to their binary format according to the
             * AWS streaming specification.
             * This class is _not_ thread-safe.
             */
            class AWS_CORE_API EventStreamEncoder
            {
            public:
              using SigningCallback = std::function<bool(Aws::Utils::Event::Message&, Aws::String&)>;

                EventStreamEncoder(Aws::Client::AWSAuthSigner* signer = nullptr);

                void SetSignatureSeed(const Aws::String& seed) { m_signatureSeed = seed; }

                void SetSigner(Aws::Client::AWSAuthSigner* signer) { m_signer = signer; }

                void SetSigningCallback(const SigningCallback& callback) { m_signingCallback = callback; }

                /**
                 * Encodes the input message in the event-stream binary format and signs the resulting bits.
                 * The signing is done via the signer member.
                 */
                Aws::Vector<unsigned char> EncodeAndSign(const Aws::Utils::Event::Message& msg);
            private:
                /**
                 * Initialize C struct based on C++ object.
                 * Returns true if successful.
                 * A successfully initialized struct must be cleaned up when you're done with it.
                 */
                bool InitEncodedStruct(const Aws::Utils::Event::Message& msg, aws_event_stream_message* encoded);

                /**
                 * Initialize signed C struct with a content of a payload message.
                 * Returns true if successful.
                 * signedmsg will contain an AWS Stream Event with a payload in a H2 frame payload section.
                 * A successfully initialized struct must be cleaned up when you're done with it.
                 */
                bool InitSignedStruct(const aws_event_stream_message* payload, aws_event_stream_message* signedmsg);

                Aws::Client::AWSAuthSigner* m_signer;
                Aws::String m_signatureSeed;

                SigningCallback m_signingCallback = [this](Aws::Utils::Event::Message& signedMessage, Aws::String& signatureSeed) -> bool {
                  assert(m_signer);
                  return m_signer->SignEventMessage(signedMessage, signatureSeed);
                };
            };
        }
    }
}
