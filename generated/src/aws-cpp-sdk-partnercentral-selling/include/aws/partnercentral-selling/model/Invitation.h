/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/Payload.h>
#include <aws/partnercentral-selling/model/Receiver.h>
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
    AWS_PARTNERCENTRALSELLING_API Invitation();
    AWS_PARTNERCENTRALSELLING_API Invitation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Invitation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A message accompanying the invitation. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline Invitation& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline Invitation& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline Invitation& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Payload& GetPayload() const{ return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    inline void SetPayload(const Payload& value) { m_payloadHasBeenSet = true; m_payload = value; }
    inline void SetPayload(Payload&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }
    inline Invitation& WithPayload(const Payload& value) { SetPayload(value); return *this;}
    inline Invitation& WithPayload(Payload&& value) { SetPayload(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Receiver& GetReceiver() const{ return m_receiver; }
    inline bool ReceiverHasBeenSet() const { return m_receiverHasBeenSet; }
    inline void SetReceiver(const Receiver& value) { m_receiverHasBeenSet = true; m_receiver = value; }
    inline void SetReceiver(Receiver&& value) { m_receiverHasBeenSet = true; m_receiver = std::move(value); }
    inline Invitation& WithReceiver(const Receiver& value) { SetReceiver(value); return *this;}
    inline Invitation& WithReceiver(Receiver&& value) { SetReceiver(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Payload m_payload;
    bool m_payloadHasBeenSet = false;

    Receiver m_receiver;
    bool m_receiverHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
