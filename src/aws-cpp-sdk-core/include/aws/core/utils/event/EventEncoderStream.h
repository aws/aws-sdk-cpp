/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/stream/ConcurrentStreamBuf.h>
#include <aws/core/utils/event/EventMessage.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/event/EventStreamEncoder.h>

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
            extern AWS_CORE_API const size_t DEFAULT_BUF_SIZE;

            /**
             * A buffered I/O stream that binary-encodes the bits written to it according to the AWS event-stream spec.
             */
            class AWS_CORE_API EventEncoderStream : public Aws::IOStream
            {
            public:

                /**
                 * Creates a stream for encoding events sent by the client.
                 * @param bufferSize The length of the underlying buffer.
                 */
                explicit EventEncoderStream(size_t bufferSize = DEFAULT_BUF_SIZE);

                /**
                 * Sets the signature seed used by event-stream events.
                 * Every event uses its previous event's signature to calculate its own signature.
                 * Setting this value affects the signature calculation of the first event.
                 */
                virtual void SetSignatureSeed(const Aws::String& seed) { m_encoder.SetSignatureSeed(seed); }

                /**
                 * Writes an event-stream message to the underlying buffer.
                 */
                EventEncoderStream& WriteEvent(const Aws::Utils::Event::Message& msg);

                /**
                 * Sets the signer implementation used for every event.
                 */
                void SetSigner(Aws::Client::AWSAuthSigner* signer) { m_encoder.SetSigner(signer); }

                /**
                 * Allows a stream writer to communicate the end of the stream to a stream reader.
                 *
                 * Any writes to the stream after this call are not guaranteed to be read by another concurrent
                 * read thread.
                 */
                void Close() { m_streambuf.SetEofInput(this); }

                /**
                 * Blocks the current thread until all submitted data is consumed.
                 * Returns false on timeout, and true if GetArea and back buffer are empty.
                 */
                bool WaitForDrain(int64_t timeoutMs = 1000);

                virtual ~EventEncoderStream() {}
            protected:
                virtual Aws::Vector<unsigned char> EncodeAndSign(const Aws::Utils::Event::Message& msg);
            private:
                Stream::ConcurrentStreamBuf m_streambuf;
                EventStreamEncoder m_encoder;
            };

            template <typename IdentityT>
            class AWS_CORE_API SmithyEventEncoderStream : public EventEncoderStream {
                public:
                 explicit SmithyEventEncoderStream(size_t bufferSize = DEFAULT_BUF_SIZE) : EventEncoderStream(bufferSize) {}
                 virtual ~SmithyEventEncoderStream() {}
                 
                 /*void SetSigner(std::shared_ptr<smithy::AwsSignerBase<IdentityT> > signer) {
                   m_evtEncoder.SetSigner(signer);
                 }

                 void SetRequestContext(std::shared_ptr<AwsSmithyClientAsyncRequestContext> pRequestCtx) {
                   m_evtEncoder.SetRequestContext(std::move(pRequestCtx));
                 }*/

                 void SetEncoder(std::shared_ptr<EventStreamEncoder> encoder)
                 {
                    m_evtEncoder = encoder;
                 }

                 void SetSignatureSeed(const Aws::String& seed) override { m_evtEncoder->SetSignatureSeed(seed); }
   
                protected:
                 Aws::Vector<unsigned char> EncodeAndSign(const Aws::Utils::Event::Message& msg) override {
                   return m_evtEncoder->EncodeAndSign(msg);
                 }
                 std::shared_ptr<EventStreamEncoder> m_evtEncoder;
            };
        }
    }
}
