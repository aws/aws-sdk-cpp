/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/DeliveryStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about the delivery status and results of sending a
   * message directly to an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointMessageResult">AWS
   * API Reference</a></p>
   */
  class EndpointMessageResult
  {
  public:
    AWS_PINPOINT_API EndpointMessageResult() = default;
    AWS_PINPOINT_API EndpointMessageResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EndpointMessageResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint address that the message was delivered to.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    EndpointMessageResult& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delivery status of the message. Possible values are:</p> <ul>
     * <li><p>DUPLICATE - The endpoint address is a duplicate of another endpoint
     * address. Amazon Pinpoint won't attempt to send the message again.</p></li>
     * <li><p>OPT_OUT - The user who's associated with the endpoint has opted out of
     * receiving messages from you. Amazon Pinpoint won't attempt to send the message
     * again.</p></li> <li><p>PERMANENT_FAILURE - An error occurred when delivering the
     * message to the endpoint. Amazon Pinpoint won't attempt to send the message
     * again.</p></li>    <li><p>SUCCESSFUL - The message was successfully delivered to
     * the endpoint.</p></li> <li><p>TEMPORARY_FAILURE - A temporary error occurred.
     * Amazon Pinpoint won't attempt to send the message again.</p></li>
     * <li><p>THROTTLED - Amazon Pinpoint throttled the operation to send the message
     * to the endpoint.</p></li> <li><p>UNKNOWN_FAILURE - An unknown error
     * occurred.</p></li></ul>
     */
    inline DeliveryStatus GetDeliveryStatus() const { return m_deliveryStatus; }
    inline bool DeliveryStatusHasBeenSet() const { return m_deliveryStatusHasBeenSet; }
    inline void SetDeliveryStatus(DeliveryStatus value) { m_deliveryStatusHasBeenSet = true; m_deliveryStatus = value; }
    inline EndpointMessageResult& WithDeliveryStatus(DeliveryStatus value) { SetDeliveryStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the message that was sent.</p>
     */
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    EndpointMessageResult& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The downstream service status code for delivering the message.</p>
     */
    inline int GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline EndpointMessageResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for delivering the message.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    EndpointMessageResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For push notifications that are sent through the GCM channel, specifies
     * whether the endpoint's device registration token was updated as part of
     * delivering the message.</p>
     */
    inline const Aws::String& GetUpdatedToken() const { return m_updatedToken; }
    inline bool UpdatedTokenHasBeenSet() const { return m_updatedTokenHasBeenSet; }
    template<typename UpdatedTokenT = Aws::String>
    void SetUpdatedToken(UpdatedTokenT&& value) { m_updatedTokenHasBeenSet = true; m_updatedToken = std::forward<UpdatedTokenT>(value); }
    template<typename UpdatedTokenT = Aws::String>
    EndpointMessageResult& WithUpdatedToken(UpdatedTokenT&& value) { SetUpdatedToken(std::forward<UpdatedTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    DeliveryStatus m_deliveryStatus{DeliveryStatus::NOT_SET};
    bool m_deliveryStatusHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    int m_statusCode{0};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_updatedToken;
    bool m_updatedTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
