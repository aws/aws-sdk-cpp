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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>The method that Incident Manager uses to engage a contact.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ContactChannel">AWS
   * API Reference</a></p>
   */
  class ContactChannel
  {
  public:
    AWS_SSMCONTACTS_API ContactChannel() = default;
    AWS_SSMCONTACTS_API ContactChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API ContactChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline const Aws::String& GetContactChannelArn() const { return m_contactChannelArn; }
    inline bool ContactChannelArnHasBeenSet() const { return m_contactChannelArnHasBeenSet; }
    template<typename ContactChannelArnT = Aws::String>
    void SetContactChannelArn(ContactChannelArnT&& value) { m_contactChannelArnHasBeenSet = true; m_contactChannelArn = std::forward<ContactChannelArnT>(value); }
    template<typename ContactChannelArnT = Aws::String>
    ContactChannel& WithContactChannelArn(ContactChannelArnT&& value) { SetContactChannelArn(std::forward<ContactChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the contact that contains the contact channel.</p>
     */
    inline const Aws::String& GetContactArn() const { return m_contactArn; }
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }
    template<typename ContactArnT = Aws::String>
    void SetContactArn(ContactArnT&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::forward<ContactArnT>(value); }
    template<typename ContactArnT = Aws::String>
    ContactChannel& WithContactArn(ContactArnT&& value) { SetContactArn(std::forward<ContactArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the contact channel.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ContactChannel& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the contact channel. Incident Manager supports three contact
     * methods:</p> <ul> <li> <p>SMS</p> </li> <li> <p>VOICE</p> </li> <li>
     * <p>EMAIL</p> </li> </ul>
     */
    inline ChannelType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChannelType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ContactChannel& WithType(ChannelType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel.</p>
     */
    inline const ContactChannelAddress& GetDeliveryAddress() const { return m_deliveryAddress; }
    inline bool DeliveryAddressHasBeenSet() const { return m_deliveryAddressHasBeenSet; }
    template<typename DeliveryAddressT = ContactChannelAddress>
    void SetDeliveryAddress(DeliveryAddressT&& value) { m_deliveryAddressHasBeenSet = true; m_deliveryAddress = std::forward<DeliveryAddressT>(value); }
    template<typename DeliveryAddressT = ContactChannelAddress>
    ContactChannel& WithDeliveryAddress(DeliveryAddressT&& value) { SetDeliveryAddress(std::forward<DeliveryAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value describing if the contact channel has been activated or not.
     * If the contact channel isn't activated, Incident Manager can't engage the
     * contact through it.</p>
     */
    inline ActivationStatus GetActivationStatus() const { return m_activationStatus; }
    inline bool ActivationStatusHasBeenSet() const { return m_activationStatusHasBeenSet; }
    inline void SetActivationStatus(ActivationStatus value) { m_activationStatusHasBeenSet = true; m_activationStatus = value; }
    inline ContactChannel& WithActivationStatus(ActivationStatus value) { SetActivationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_contactChannelArn;
    bool m_contactChannelArnHasBeenSet = false;

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ChannelType m_type{ChannelType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ContactChannelAddress m_deliveryAddress;
    bool m_deliveryAddressHasBeenSet = false;

    ActivationStatus m_activationStatus{ActivationStatus::NOT_SET};
    bool m_activationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
