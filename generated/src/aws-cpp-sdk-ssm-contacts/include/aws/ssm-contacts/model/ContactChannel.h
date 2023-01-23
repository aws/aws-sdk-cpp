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
    AWS_SSMCONTACTS_API ContactChannel();
    AWS_SSMCONTACTS_API ContactChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API ContactChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline const Aws::String& GetContactChannelArn() const{ return m_contactChannelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline bool ContactChannelArnHasBeenSet() const { return m_contactChannelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline void SetContactChannelArn(const Aws::String& value) { m_contactChannelArnHasBeenSet = true; m_contactChannelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline void SetContactChannelArn(Aws::String&& value) { m_contactChannelArnHasBeenSet = true; m_contactChannelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline void SetContactChannelArn(const char* value) { m_contactChannelArnHasBeenSet = true; m_contactChannelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline ContactChannel& WithContactChannelArn(const Aws::String& value) { SetContactChannelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline ContactChannel& WithContactChannelArn(Aws::String&& value) { SetContactChannelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline ContactChannel& WithContactChannelArn(const char* value) { SetContactChannelArn(value); return *this;}


    /**
     * <p>The ARN of the contact that contains the contact channel.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>The ARN of the contact that contains the contact channel.</p>
     */
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }

    /**
     * <p>The ARN of the contact that contains the contact channel.</p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArnHasBeenSet = true; m_contactArn = value; }

    /**
     * <p>The ARN of the contact that contains the contact channel.</p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::move(value); }

    /**
     * <p>The ARN of the contact that contains the contact channel.</p>
     */
    inline void SetContactArn(const char* value) { m_contactArnHasBeenSet = true; m_contactArn.assign(value); }

    /**
     * <p>The ARN of the contact that contains the contact channel.</p>
     */
    inline ContactChannel& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>The ARN of the contact that contains the contact channel.</p>
     */
    inline ContactChannel& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the contact that contains the contact channel.</p>
     */
    inline ContactChannel& WithContactArn(const char* value) { SetContactArn(value); return *this;}


    /**
     * <p>The name of the contact channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the contact channel.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the contact channel.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the contact channel.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the contact channel.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the contact channel.</p>
     */
    inline ContactChannel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the contact channel.</p>
     */
    inline ContactChannel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact channel.</p>
     */
    inline ContactChannel& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the contact channel. Incident Manager supports three contact
     * methods:</p> <ul> <li> <p>SMS</p> </li> <li> <p>VOICE</p> </li> <li>
     * <p>EMAIL</p> </li> </ul>
     */
    inline const ChannelType& GetType() const{ return m_type; }

    /**
     * <p>The type of the contact channel. Incident Manager supports three contact
     * methods:</p> <ul> <li> <p>SMS</p> </li> <li> <p>VOICE</p> </li> <li>
     * <p>EMAIL</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the contact channel. Incident Manager supports three contact
     * methods:</p> <ul> <li> <p>SMS</p> </li> <li> <p>VOICE</p> </li> <li>
     * <p>EMAIL</p> </li> </ul>
     */
    inline void SetType(const ChannelType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the contact channel. Incident Manager supports three contact
     * methods:</p> <ul> <li> <p>SMS</p> </li> <li> <p>VOICE</p> </li> <li>
     * <p>EMAIL</p> </li> </ul>
     */
    inline void SetType(ChannelType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the contact channel. Incident Manager supports three contact
     * methods:</p> <ul> <li> <p>SMS</p> </li> <li> <p>VOICE</p> </li> <li>
     * <p>EMAIL</p> </li> </ul>
     */
    inline ContactChannel& WithType(const ChannelType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the contact channel. Incident Manager supports three contact
     * methods:</p> <ul> <li> <p>SMS</p> </li> <li> <p>VOICE</p> </li> <li>
     * <p>EMAIL</p> </li> </ul>
     */
    inline ContactChannel& WithType(ChannelType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel.</p>
     */
    inline const ContactChannelAddress& GetDeliveryAddress() const{ return m_deliveryAddress; }

    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel.</p>
     */
    inline bool DeliveryAddressHasBeenSet() const { return m_deliveryAddressHasBeenSet; }

    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel.</p>
     */
    inline void SetDeliveryAddress(const ContactChannelAddress& value) { m_deliveryAddressHasBeenSet = true; m_deliveryAddress = value; }

    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel.</p>
     */
    inline void SetDeliveryAddress(ContactChannelAddress&& value) { m_deliveryAddressHasBeenSet = true; m_deliveryAddress = std::move(value); }

    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel.</p>
     */
    inline ContactChannel& WithDeliveryAddress(const ContactChannelAddress& value) { SetDeliveryAddress(value); return *this;}

    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel.</p>
     */
    inline ContactChannel& WithDeliveryAddress(ContactChannelAddress&& value) { SetDeliveryAddress(std::move(value)); return *this;}


    /**
     * <p>A Boolean value describing if the contact channel has been activated or not.
     * If the contact channel isn't activated, Incident Manager can't engage the
     * contact through it. </p>
     */
    inline const ActivationStatus& GetActivationStatus() const{ return m_activationStatus; }

    /**
     * <p>A Boolean value describing if the contact channel has been activated or not.
     * If the contact channel isn't activated, Incident Manager can't engage the
     * contact through it. </p>
     */
    inline bool ActivationStatusHasBeenSet() const { return m_activationStatusHasBeenSet; }

    /**
     * <p>A Boolean value describing if the contact channel has been activated or not.
     * If the contact channel isn't activated, Incident Manager can't engage the
     * contact through it. </p>
     */
    inline void SetActivationStatus(const ActivationStatus& value) { m_activationStatusHasBeenSet = true; m_activationStatus = value; }

    /**
     * <p>A Boolean value describing if the contact channel has been activated or not.
     * If the contact channel isn't activated, Incident Manager can't engage the
     * contact through it. </p>
     */
    inline void SetActivationStatus(ActivationStatus&& value) { m_activationStatusHasBeenSet = true; m_activationStatus = std::move(value); }

    /**
     * <p>A Boolean value describing if the contact channel has been activated or not.
     * If the contact channel isn't activated, Incident Manager can't engage the
     * contact through it. </p>
     */
    inline ContactChannel& WithActivationStatus(const ActivationStatus& value) { SetActivationStatus(value); return *this;}

    /**
     * <p>A Boolean value describing if the contact channel has been activated or not.
     * If the contact channel isn't activated, Incident Manager can't engage the
     * contact through it. </p>
     */
    inline ContactChannel& WithActivationStatus(ActivationStatus&& value) { SetActivationStatus(std::move(value)); return *this;}

  private:

    Aws::String m_contactChannelArn;
    bool m_contactChannelArnHasBeenSet = false;

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ChannelType m_type;
    bool m_typeHasBeenSet = false;

    ContactChannelAddress m_deliveryAddress;
    bool m_deliveryAddressHasBeenSet = false;

    ActivationStatus m_activationStatus;
    bool m_activationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
