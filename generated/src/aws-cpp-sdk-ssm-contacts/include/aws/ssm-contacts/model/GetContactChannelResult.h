/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/ChannelType.h>
#include <aws/ssm-contacts/model/ContactChannelAddress.h>
#include <aws/ssm-contacts/model/ActivationStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSMContacts
{
namespace Model
{
  class GetContactChannelResult
  {
  public:
    AWS_SSMCONTACTS_API GetContactChannelResult() = default;
    AWS_SSMCONTACTS_API GetContactChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API GetContactChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the contact that the channel belongs to.</p>
     */
    inline const Aws::String& GetContactArn() const { return m_contactArn; }
    template<typename ContactArnT = Aws::String>
    void SetContactArn(ContactArnT&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::forward<ContactArnT>(value); }
    template<typename ContactArnT = Aws::String>
    GetContactChannelResult& WithContactArn(ContactArnT&& value) { SetContactArn(std::forward<ContactArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the contact channel.</p>
     */
    inline const Aws::String& GetContactChannelArn() const { return m_contactChannelArn; }
    template<typename ContactChannelArnT = Aws::String>
    void SetContactChannelArn(ContactChannelArnT&& value) { m_contactChannelArnHasBeenSet = true; m_contactChannelArn = std::forward<ContactChannelArnT>(value); }
    template<typename ContactChannelArnT = Aws::String>
    GetContactChannelResult& WithContactChannelArn(ContactChannelArnT&& value) { SetContactChannelArn(std::forward<ContactChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the contact channel</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetContactChannelResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of contact channel. The type is <code>SMS</code>,
     * <code>VOICE</code>, or <code>EMAIL</code>.</p>
     */
    inline ChannelType GetType() const { return m_type; }
    inline void SetType(ChannelType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetContactChannelResult& WithType(ChannelType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel.</p>
     */
    inline const ContactChannelAddress& GetDeliveryAddress() const { return m_deliveryAddress; }
    template<typename DeliveryAddressT = ContactChannelAddress>
    void SetDeliveryAddress(DeliveryAddressT&& value) { m_deliveryAddressHasBeenSet = true; m_deliveryAddress = std::forward<DeliveryAddressT>(value); }
    template<typename DeliveryAddressT = ContactChannelAddress>
    GetContactChannelResult& WithDeliveryAddress(DeliveryAddressT&& value) { SetDeliveryAddress(std::forward<DeliveryAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating if the contact channel has been activated or
     * not.</p>
     */
    inline ActivationStatus GetActivationStatus() const { return m_activationStatus; }
    inline void SetActivationStatus(ActivationStatus value) { m_activationStatusHasBeenSet = true; m_activationStatus = value; }
    inline GetContactChannelResult& WithActivationStatus(ActivationStatus value) { SetActivationStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetContactChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;

    Aws::String m_contactChannelArn;
    bool m_contactChannelArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ChannelType m_type{ChannelType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ContactChannelAddress m_deliveryAddress;
    bool m_deliveryAddressHasBeenSet = false;

    ActivationStatus m_activationStatus{ActivationStatus::NOT_SET};
    bool m_activationStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
