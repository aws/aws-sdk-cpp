/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class GetContactRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API GetContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetContact"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline GetContactRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline GetContactRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline GetContactRequest& WithContactId(const char* value) { SetContactId(value); return *this;}

  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
