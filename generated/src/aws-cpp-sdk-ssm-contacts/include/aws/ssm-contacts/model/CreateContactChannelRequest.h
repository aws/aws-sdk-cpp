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
    AWS_SSMCONTACTS_API CreateContactChannelRequest() = default;

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
    inline const Aws::String& GetContactId() const { return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    CreateContactChannelRequest& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
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
    CreateContactChannelRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Incident Manager supports three types of contact channels:</p> <ul> <li> <p>
     * <code>SMS</code> </p> </li> <li> <p> <code>VOICE</code> </p> </li> <li> <p>
     * <code>EMAIL</code> </p> </li> </ul>
     */
    inline ChannelType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChannelType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateContactChannelRequest& WithType(ChannelType value) { SetType(value); return *this;}
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
    inline const ContactChannelAddress& GetDeliveryAddress() const { return m_deliveryAddress; }
    inline bool DeliveryAddressHasBeenSet() const { return m_deliveryAddressHasBeenSet; }
    template<typename DeliveryAddressT = ContactChannelAddress>
    void SetDeliveryAddress(DeliveryAddressT&& value) { m_deliveryAddressHasBeenSet = true; m_deliveryAddress = std::forward<DeliveryAddressT>(value); }
    template<typename DeliveryAddressT = ContactChannelAddress>
    CreateContactChannelRequest& WithDeliveryAddress(DeliveryAddressT&& value) { SetDeliveryAddress(std::forward<DeliveryAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you want to activate the channel at a later time, you can choose to defer
     * activation. Incident Manager can't engage your contact channel until it has been
     * activated.</p>
     */
    inline bool GetDeferActivation() const { return m_deferActivation; }
    inline bool DeferActivationHasBeenSet() const { return m_deferActivationHasBeenSet; }
    inline void SetDeferActivation(bool value) { m_deferActivationHasBeenSet = true; m_deferActivation = value; }
    inline CreateContactChannelRequest& WithDeferActivation(bool value) { SetDeferActivation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    CreateContactChannelRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ChannelType m_type{ChannelType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ContactChannelAddress m_deliveryAddress;
    bool m_deliveryAddressHasBeenSet = false;

    bool m_deferActivation{false};
    bool m_deferActivationHasBeenSet = false;

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
