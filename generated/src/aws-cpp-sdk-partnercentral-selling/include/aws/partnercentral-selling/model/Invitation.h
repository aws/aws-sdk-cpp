/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/Receiver.h>
#include <aws/partnercentral-selling/model/Payload.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p> The Invitation structure represents an invitation exchanged between partners
   * and AWS. It includes a message, receiver information, and a payload providing
   * context for the invitation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/Invitation">AWS
   * API Reference</a></p>
   */
  class Invitation
  {
  public:
    AWS_PARTNERCENTRALSELLING_API Invitation() = default;
    AWS_PARTNERCENTRALSELLING_API Invitation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Invitation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A message accompanying the invitation. </p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    Invitation& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Receiver& GetReceiver() const { return m_receiver; }
    inline bool ReceiverHasBeenSet() const { return m_receiverHasBeenSet; }
    template<typename ReceiverT = Receiver>
    void SetReceiver(ReceiverT&& value) { m_receiverHasBeenSet = true; m_receiver = std::forward<ReceiverT>(value); }
    template<typename ReceiverT = Receiver>
    Invitation& WithReceiver(ReceiverT&& value) { SetReceiver(std::forward<ReceiverT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Payload& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Payload>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Payload>
    Invitation& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Receiver m_receiver;
    bool m_receiverHasBeenSet = false;

    Payload m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
