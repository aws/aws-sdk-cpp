/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/stream/HttpWriteDataStreamBuf.h>
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/CloseStreamEvent.h>
#include <aws/polly/model/TextEvent.h>

#include <utility>

namespace Aws {
namespace Polly {
namespace Model {

/**
 * <p>Inbound event stream for sending input and control events to manage
 * bidirectional speech synthesis.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/StartSpeechSynthesisStreamActionStream">AWS
 * API Reference</a></p>
 */
class AWS_POLLY_API StartSpeechSynthesisStreamActionStream : public Aws::Utils::Event::EventEncoderStream {
 public:
  StartSpeechSynthesisStreamActionStream() = default;
  explicit StartSpeechSynthesisStreamActionStream(std::shared_ptr<Aws::Utils::Stream::HttpWriteDataStreamBuf> streambuf)
      : Aws::Utils::Event::EventEncoderStream(std::move(streambuf)) {}
  StartSpeechSynthesisStreamActionStream& WriteTextEvent(const TextEvent& value) {
    Aws::Utils::Event::Message msg;
    msg.InsertEventHeader(":message-type", Aws::String("event"));
    msg.InsertEventHeader(":event-type", Aws::String("TextEvent"));
    msg.InsertEventHeader(":content-type", Aws::String("application/json"));
    msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
    WriteEvent(msg);
    return *this;
  }
  StartSpeechSynthesisStreamActionStream& WriteCloseStreamEvent(const CloseStreamEvent& value) {
    Aws::Utils::Event::Message msg;
    msg.InsertEventHeader(":message-type", Aws::String("event"));
    msg.InsertEventHeader(":event-type", Aws::String("CloseStreamEvent"));
    AWS_UNREFERENCED_PARAM(value);
    WriteEvent(msg);
    return *this;
  }
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
