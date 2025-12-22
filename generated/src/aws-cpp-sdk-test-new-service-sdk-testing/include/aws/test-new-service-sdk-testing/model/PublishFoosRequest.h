/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingRequest.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTesting_EXPORTS.h>
#include <aws/test-new-service-sdk-testing/model/PublishEvents.h>

#include <memory>
#include <utility>

namespace Aws {
namespace TestNewServiceSDKTesting {
namespace Model {

/**
 */
class PublishFoosRequest : public TestNewServiceSDKTestingRequest {
 public:
  AWS_TESTNEWSERVICESDKTESTING_API PublishFoosRequest() : m_eventStreamDecoder(nullptr) {}

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PublishFoos"; }

  inline virtual bool IsEventStreamRequest() const override { return true; }
  // SerializePayload will not be invoked.
  // This request is sent by encoding its data in event-streams which is sent as IOStream via GetBody()
  AWS_TESTNEWSERVICESDKTESTING_API Aws::String SerializePayload() const override { return {}; }
  AWS_TESTNEWSERVICESDKTESTING_API std::shared_ptr<Aws::IOStream> GetBody() const override;
  AWS_TESTNEWSERVICESDKTESTING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Underlying Event Stream Handler which is used to define the handlers to process the underlying event-stream
   */
  inline std::shared_ptr<PublishEvents> GetEventStreamHandler() const { return m_messages; }
  inline void SetEventStreamHandler(std::shared_ptr<PublishEvents> value) { m_messages = std::move(value); }

  /**
   * Event Stream Decoder for processing incoming event stream messages
   */
  inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() const { return m_eventStreamDecoder; }

  ///@{

  inline const Aws::String& GetRoom() const { return m_room; }
  inline bool RoomHasBeenSet() const { return m_roomHasBeenSet; }
  template <typename RoomT = Aws::String>
  void SetRoom(RoomT&& value) {
    m_roomHasBeenSet = true;
    m_room = std::forward<RoomT>(value);
  }
  template <typename RoomT = Aws::String>
  PublishFoosRequest& WithRoom(RoomT&& value) {
    SetRoom(std::forward<RoomT>(value));
    return *this;
  }
  ///@}

  ///@{

  AWS_TESTNEWSERVICESDKTESTING_API std::shared_ptr<PublishEvents> GetMessages() const { return m_messages; }
  AWS_TESTNEWSERVICESDKTESTING_API void SetMessages(const std::shared_ptr<PublishEvents>& value) {
    m_messagesHasBeenSet = true;
    m_messages = value;
  }
  AWS_TESTNEWSERVICESDKTESTING_API PublishFoosRequest& WithMessages(const std::shared_ptr<PublishEvents>& value) {
    SetMessages(value);
    return *this;
  }

  ///@}
 private:
  Aws::String m_room;

  std::shared_ptr<PublishEvents> m_messages;
  mutable Aws::Utils::Event::EventStreamDecoder m_eventStreamDecoder{nullptr};

  bool m_roomHasBeenSet = false;
  bool m_messagesHasBeenSet = false;
};

}  // namespace Model
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
