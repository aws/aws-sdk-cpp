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
    AWS_SSMCONTACTS_API UpdateContactChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContactChannel"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel you want to update.</p>
     */
    inline const Aws::String& GetContactChannelId() const{ return m_contactChannelId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel you want to update.</p>
     */
    inline bool ContactChannelIdHasBeenSet() const { return m_contactChannelIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel you want to update.</p>
     */
    inline void SetContactChannelId(const Aws::String& value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel you want to update.</p>
     */
    inline void SetContactChannelId(Aws::String&& value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel you want to update.</p>
     */
    inline void SetContactChannelId(const char* value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel you want to update.</p>
     */
    inline UpdateContactChannelRequest& WithContactChannelId(const Aws::String& value) { SetContactChannelId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel you want to update.</p>
     */
    inline UpdateContactChannelRequest& WithContactChannelId(Aws::String&& value) { SetContactChannelId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel you want to update.</p>
     */
    inline UpdateContactChannelRequest& WithContactChannelId(const char* value) { SetContactChannelId(value); return *this;}


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
    inline UpdateContactChannelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the contact channel.</p>
     */
    inline UpdateContactChannelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact channel.</p>
     */
    inline UpdateContactChannelRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel. </p>
     */
    inline const ContactChannelAddress& GetDeliveryAddress() const{ return m_deliveryAddress; }

    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel. </p>
     */
    inline bool DeliveryAddressHasBeenSet() const { return m_deliveryAddressHasBeenSet; }

    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel. </p>
     */
    inline void SetDeliveryAddress(const ContactChannelAddress& value) { m_deliveryAddressHasBeenSet = true; m_deliveryAddress = value; }

    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel. </p>
     */
    inline void SetDeliveryAddress(ContactChannelAddress&& value) { m_deliveryAddressHasBeenSet = true; m_deliveryAddress = std::move(value); }

    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel. </p>
     */
    inline UpdateContactChannelRequest& WithDeliveryAddress(const ContactChannelAddress& value) { SetDeliveryAddress(value); return *this;}

    /**
     * <p>The details that Incident Manager uses when trying to engage the contact
     * channel. </p>
     */
    inline UpdateContactChannelRequest& WithDeliveryAddress(ContactChannelAddress&& value) { SetDeliveryAddress(std::move(value)); return *this;}

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
