/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventEncoderStream.h>
#include <aws/core/utils/local/stream/CloseableStreamBuf.h>

namespace {
const char* LOG_TAG = "EventEncoderStream";
}  // namespace

namespace Aws
{
    namespace Utils
    {
        namespace Event
        {
            EventEncoderStream::EventEncoderStream(size_t bufferSize) :
                Aws::IOStream(nullptr),
                m_streambuf{Aws::MakeUnique<Aws::Utils::Stream::CloseableConcurrentStreamBuf>(LOG_TAG, bufferSize)}
            {
              rdbuf(m_streambuf->GetStreamBufHandler());
            }

            EventEncoderStream::EventEncoderStream(std::shared_ptr<Aws::Utils::Stream::HttpWriteDataStreamBuf> streambuf)
                : Aws::IOStream(nullptr), m_streambuf{Aws::MakeShared<Aws::Utils::Stream::CloseableHttpWriteDataStreamBuf>(LOG_TAG, std::move(streambuf))} {
              rdbuf(m_streambuf->GetStreamBufHandler());
            }

            void EventEncoderStream::Close() { m_streambuf->Close(this); }

            bool EventEncoderStream::WaitForDrain(int64_t timeoutMs)
            {
                return m_streambuf->WaitForDrain(timeoutMs);
            }

            EventEncoderStream& EventEncoderStream::WriteEvent(const Aws::Utils::Event::Message& msg)
            {
                auto bits = m_encoder.EncodeAndSign(msg);

                AWS_LOGSTREAM_TRACE("EventEncoderStream::WriteEvent", "Encoded event (base64 encoded): " <<
                                    Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::ByteBuffer(bits.data(), bits.size())));

                // write encoded event to the underlying streambuf, may block
                // if the streambuf applies backpressure (e.g. HttpWriteDataStreamBuf)
                write(reinterpret_cast<char*>(bits.data()), bits.size());
                flush();
                return *this;
            }
        }
    }
}
