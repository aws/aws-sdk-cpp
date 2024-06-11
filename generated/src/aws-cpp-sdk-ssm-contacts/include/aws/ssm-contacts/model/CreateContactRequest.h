/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/ContactType.h>
#include <aws/ssm-contacts/model/Plan.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/Tag.h>
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
  class CreateContactRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API CreateContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContact"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name to quickly identify a contact or escalation plan. The contact
     * alias must be unique and identifiable.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }
    inline CreateContactRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline CreateContactRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline CreateContactRequest& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateContactRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateContactRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateContactRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To create an escalation plan use <code>ESCALATION</code>. To create a contact
     * use <code>PERSONAL</code>.</p>
     */
    inline const ContactType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ContactType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ContactType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateContactRequest& WithType(const ContactType& value) { SetType(value); return *this;}
    inline CreateContactRequest& WithType(ContactType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of stages. A contact has an engagement plan with stages that contact
     * specified contact channels. An escalation plan uses stages that contact
     * specified contacts.</p>
     */
    inline const Plan& GetPlan() const{ return m_plan; }
    inline bool PlanHasBeenSet() const { return m_planHasBeenSet; }
    inline void SetPlan(const Plan& value) { m_planHasBeenSet = true; m_plan = value; }
    inline void SetPlan(Plan&& value) { m_planHasBeenSet = true; m_plan = std::move(value); }
    inline CreateContactRequest& WithPlan(const Plan& value) { SetPlan(value); return *this;}
    inline CreateContactRequest& WithPlan(Plan&& value) { SetPlan(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds a tag to the target. You can only tag resources created in the first
     * Region of your replication set.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateContactRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateContactRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateContactRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateContactRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
    inline CreateContactRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}
    inline CreateContactRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}
    inline CreateContactRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}
    ///@}
  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    ContactType m_type;
    bool m_typeHasBeenSet = false;

    Plan m_plan;
    bool m_planHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
