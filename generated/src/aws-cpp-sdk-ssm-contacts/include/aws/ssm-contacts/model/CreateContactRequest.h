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
    AWS_SSMCONTACTS_API CreateContactRequest() = default;

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
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    CreateContactRequest& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateContactRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of contact to create.</p> <ul> <li> <p> <code>PERSONAL</code>: A
     * single, individual contact.</p> </li> <li> <p> <code>ESCALATION</code>: An
     * escalation plan.</p> </li> <li> <p> <code>ONCALL_SCHEDULE</code>: An on-call
     * schedule.</p> </li> </ul>
     */
    inline ContactType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ContactType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateContactRequest& WithType(ContactType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of stages. A contact has an engagement plan with stages that contact
     * specified contact channels. An escalation plan uses stages that contact
     * specified contacts.</p>
     */
    inline const Plan& GetPlan() const { return m_plan; }
    inline bool PlanHasBeenSet() const { return m_planHasBeenSet; }
    template<typename PlanT = Plan>
    void SetPlan(PlanT&& value) { m_planHasBeenSet = true; m_plan = std::forward<PlanT>(value); }
    template<typename PlanT = Plan>
    CreateContactRequest& WithPlan(PlanT&& value) { SetPlan(std::forward<PlanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds a tag to the target. You can only tag resources created in the first
     * Region of your replication set.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateContactRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateContactRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    CreateContactRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    ContactType m_type{ContactType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Plan m_plan;
    bool m_planHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
