/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/ContactChannelAddress.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class UpdateContactChannelRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API UpdateContactChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContactChannel"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel you want to update.</p>
     */
    inline const Aws::String& GetContactChannelId() const { return m_contactChannelId; }
    inline bool ContactChannelIdHasBeenSet() const { return m_contactChannelIdHasBeenSet; }
    template<typename ContactChannelIdT = Aws::String>
    void SetContactChannelId(ContactChannelIdT&& value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId = std::forward<ContactChannelIdT>(value); }
    template<typename ContactChannelIdT = Aws::String>
    UpdateContactChannelRequest& WithContactChannelId(ContactChannelIdT&& value) { SetContactChannelId(std::forward<ContactChannelIdT>(value)); return *this;}
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
    UpdateContactChannelRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    UpdateContactChannelRequest& WithDeliveryAddress(DeliveryAddressT&& value) { SetDeliveryAddress(std::forward<DeliveryAddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactChannelId;
    bool m_contactChannelIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ContactChannelAddress m_deliveryAddress;
    bool m_deliveryAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
