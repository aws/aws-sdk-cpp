/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/event/EventStream.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2_EXPORTS.h>
#include <aws/sagemaker-runtime-http2/model/RequestPayloadPart.h>

#include <utility>

namespace Aws {
namespace SageMakerRuntimeHTTP2 {
namespace Model {

/**
 * <p>Request stream event union.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-runtime-http2-2025-10-01/RequestStreamEvent">AWS
 * API Reference</a></p>
 */
class AWS_SAGEMAKERRUNTIMEHTTP2_API RequestStreamEvent : public Aws::Utils::Event::EventEncoderStream {
 public:
  RequestStreamEvent& WriteRequestPayloadPart(const RequestPayloadPart& value) {
    Aws::Utils::Event::Message msg;
    if (!value.GetBytes().empty()) {
      msg.InsertEventHeader(":message-type", Aws::String("event"));
      msg.InsertEventHeader(":event-type", Aws::String("PayloadPart"));
      msg.InsertEventHeader(":content-type", Aws::String("application/octet-stream"));
      msg.WriteEventPayload(value.GetBytes());
    }
    WriteEvent(msg);
    return *this;
  }
};

}  // namespace Model
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
