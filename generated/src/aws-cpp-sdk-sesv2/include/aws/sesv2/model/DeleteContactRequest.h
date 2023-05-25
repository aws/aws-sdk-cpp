/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   */
  class DeleteContactRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API DeleteContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteContact"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the contact list from which the contact should be removed.</p>
     */
    inline const Aws::String& GetContactListName() const{ return m_contactListName; }

    /**
     * <p>The name of the contact list from which the contact should be removed.</p>
     */
    inline bool ContactListNameHasBeenSet() const { return m_contactListNameHasBeenSet; }

    /**
     * <p>The name of the contact list from which the contact should be removed.</p>
     */
    inline void SetContactListName(const Aws::String& value) { m_contactListNameHasBeenSet = true; m_contactListName = value; }

    /**
     * <p>The name of the contact list from which the contact should be removed.</p>
     */
    inline void SetContactListName(Aws::String&& value) { m_contactListNameHasBeenSet = true; m_contactListName = std::move(value); }

    /**
     * <p>The name of the contact list from which the contact should be removed.</p>
     */
    inline void SetContactListName(const char* value) { m_contactListNameHasBeenSet = true; m_contactListName.assign(value); }

    /**
     * <p>The name of the contact list from which the contact should be removed.</p>
     */
    inline DeleteContactRequest& WithContactListName(const Aws::String& value) { SetContactListName(value); return *this;}

    /**
     * <p>The name of the contact list from which the contact should be removed.</p>
     */
    inline DeleteContactRequest& WithContactListName(Aws::String&& value) { SetContactListName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact list from which the contact should be removed.</p>
     */
    inline DeleteContactRequest& WithContactListName(const char* value) { SetContactListName(value); return *this;}


    /**
     * <p>The contact's email address.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The contact's email address.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The contact's email address.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The contact's email address.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The contact's email address.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The contact's email address.</p>
     */
    inline DeleteContactRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The contact's email address.</p>
     */
    inline DeleteContactRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The contact's email address.</p>
     */
    inline DeleteContactRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}

  private:

    Aws::String m_contactListName;
    bool m_contactListNameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
