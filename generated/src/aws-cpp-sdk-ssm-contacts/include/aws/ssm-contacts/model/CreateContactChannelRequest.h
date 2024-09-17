/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/ChannelType.h>
#include <aws/ssm-contacts/model/ContactChannelAddress.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class CreateContactChannelRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API CreateContactChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContactChannel"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the contact you are adding the contact
     * channel to.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }
    inline CreateContactChannelRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline CreateContactChannelRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline CreateContactChannelRequest& WithContactId(const char* value) { SetContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the contact channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateContactChannelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateContactChannelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateContactChannelRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Incident Manager supports three types of contact channels:</p> <ul> <li> <p>
     * <code>SMS</code> </p> </li> <li> <p> <code>VOICE</code> </p> </li> <li> <p>
     * <code>EMAIL</code> </p> </li> </ul>
     */
    inline const ChannelType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ChannelType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ChannelType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateContactChannelRequest& WithType(const ChannelType& value) { SetType(value); return *this;}
    inline CreateContactChannelRequest& WithType(ChannelType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel. The format is dependent on the type of the contact channel. The
     * following are the expected formats:</p> <ul> <li> <p>SMS - '+' followed by the
     * country code and phone number</p> </li> <li> <p>VOICE - '+' followed by the
     * country code and phone number</p> </li> <li> <p>EMAIL - any standard email
     * format</p> </li> </ul>
     */
    inline const ContactChannelAddress& GetDeliveryAddress() const{ return m_deliveryAddress; }
    inline bool DeliveryAddressHasBeenSet() const { return m_deliveryAddressHasBeenSet; }
    inline void SetDeliveryAddress(const ContactChannelAddress& value) { m_deliveryAddressHasBeenSet = true; m_deliveryAddress = value; }
    inline void SetDeliveryAddress(ContactChannelAddress&& value) { m_deliveryAddressHasBeenSet = true; m_deliveryAddress = std::move(value); }
    inline CreateContactChannelRequest& WithDeliveryAddress(const ContactChannelAddress& value) { SetDeliveryAddress(value); return *this;}
    inline CreateContactChannelRequest& WithDeliveryAddress(ContactChannelAddress&& value) { SetDeliveryAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you want to activate the channel at a later time, you can choose to defer
     * activation. Incident Manager can't engage your contact channel until it has been
     * activated.</p>
     */
    inline bool GetDeferActivation() const{ return m_deferActivation; }
    inline bool DeferActivationHasBeenSet() const { return m_deferActivationHasBeenSet; }
    inline void SetDeferActivation(bool value) { m_deferActivationHasBeenSet = true; m_deferActivation = value; }
    inline CreateContactChannelRequest& WithDeferActivation(bool value) { SetDeferActivation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }
    inline CreateContactChannelRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}
    inline CreateContactChannelRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}
    inline CreateContactChannelRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}
    ///@}
  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ChannelType m_type;
    bool m_typeHasBeenSet = false;

    ContactChannelAddress m_deliveryAddress;
    bool m_deliveryAddressHasBeenSet = false;

    bool m_deferActivation;
    bool m_deferActivationHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
