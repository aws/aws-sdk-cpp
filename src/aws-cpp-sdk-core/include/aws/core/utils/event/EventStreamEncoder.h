/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/event-stream/event_stream.h>
#include <smithy/identity/signer/AwsSignerBase.h>

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
                EventStreamEncoder(Aws::Client::AWSAuthSigner* signer = nullptr);


                void SetSignatureSeed(const Aws::String& seed) { m_signatureSeed = seed; }

                void SetSigner(Aws::Client::AWSAuthSigner* signer) { m_signer = signer; }

                /**
                 * Encodes the input message in the event-stream binary format and signs the resulting bits.
                 * The signing is done via the signer member.
                 */
                Aws::Vector<unsigned char> EncodeAndSign(const Aws::Utils::Event::Message& msg);

                virtual ~EventStreamEncoder(){};
            protected:
                virtual bool SignEventMessage(Event::Message& msg);
                Aws::String m_signatureSeed;
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
            };

            template <typename IdentityT>
            class AWS_CORE_API SmithyEventStreamEncoder : public EventStreamEncoder {
             public:
              using SIGNER_TYPE = smithy::AwsSignerBase<IdentityT>;
              SmithyEventStreamEncoder(std::shared_ptr<SIGNER_TYPE> signer, std::shared_ptr<smithy::AwsIdentity> awsIdentity) : EventStreamEncoder(), m_smithySigner(signer), m_awsIdentity{awsIdentity}{};
              //SmithyEventStreamEncoder() : EventStreamEncoder(){};

             protected:
              bool SignEventMessage(Event::Message& signedMessage) override {

                //resolved identity
                const auto& identity = *static_cast<IdentityT*>(m_awsIdentity.get());

                //@to do: if identity expired, resolve it again
                return (m_smithySigner->SignEventMessage(signedMessage, m_signatureSeed, identity));
              }

             private:
              std::shared_ptr<SIGNER_TYPE> m_smithySigner;
              std::shared_ptr<smithy::AwsIdentity> m_awsIdentity;
            };
        }
    }
}
