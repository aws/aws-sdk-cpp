/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/event/EventStream.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTesting_EXPORTS.h>
#include <aws/test-new-service-sdk-testing/model/LeaveEvent.h>
#include <aws/test-new-service-sdk-testing/model/Message.h>

#include <utility>

namespace Aws {
namespace TestNewServiceSDKTesting {
namespace Model {

class AWS_TESTNEWSERVICESDKTESTING_API PublishEvents : public Aws::Utils::Event::EventEncoderStream {
 public:
  PublishEvents& WriteMessage(const Message& value) {
    Aws::Utils::Event::Message msg;
    msg.InsertEventHeader(":message-type", Aws::String("event"));
    msg.InsertEventHeader(":event-type", Aws::String("message"));
    msg.InsertEventHeader(":content-type", Aws::String("text/plain"));
    msg.WriteEventPayload(value.GetMessage());
    WriteEvent(msg);
    return *this;
  }
  PublishEvents& WriteLeaveEvent(const LeaveEvent& value) {
    Aws::Utils::Event::Message msg;
    msg.InsertEventHeader(":message-type", Aws::String("event"));
    msg.InsertEventHeader(":event-type", Aws::String("leave"));
    AWS_UNREFERENCED_PARAM(value);
    WriteEvent(msg);
    return *this;
  }
};

}  // namespace Model
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
