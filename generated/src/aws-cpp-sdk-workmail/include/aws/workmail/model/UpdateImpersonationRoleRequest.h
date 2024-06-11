/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/ImpersonationRoleType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workmail/model/ImpersonationRule.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class UpdateImpersonationRoleRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API UpdateImpersonationRoleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateImpersonationRole"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The WorkMail organization that contains the impersonation role to update.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline UpdateImpersonationRoleRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline UpdateImpersonationRoleRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline UpdateImpersonationRoleRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the impersonation role to update.</p>
     */
    inline const Aws::String& GetImpersonationRoleId() const{ return m_impersonationRoleId; }
    inline bool ImpersonationRoleIdHasBeenSet() const { return m_impersonationRoleIdHasBeenSet; }
    inline void SetImpersonationRoleId(const Aws::String& value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId = value; }
    inline void SetImpersonationRoleId(Aws::String&& value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId = std::move(value); }
    inline void SetImpersonationRoleId(const char* value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId.assign(value); }
    inline UpdateImpersonationRoleRequest& WithImpersonationRoleId(const Aws::String& value) { SetImpersonationRoleId(value); return *this;}
    inline UpdateImpersonationRoleRequest& WithImpersonationRoleId(Aws::String&& value) { SetImpersonationRoleId(std::move(value)); return *this;}
    inline UpdateImpersonationRoleRequest& WithImpersonationRoleId(const char* value) { SetImpersonationRoleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated impersonation role name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateImpersonationRoleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateImpersonationRoleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateImpersonationRoleRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated impersonation role type.</p>
     */
    inline const ImpersonationRoleType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ImpersonationRoleType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ImpersonationRoleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline UpdateImpersonationRoleRequest& WithType(const ImpersonationRoleType& value) { SetType(value); return *this;}
    inline UpdateImpersonationRoleRequest& WithType(ImpersonationRoleType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated impersonation role description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateImpersonationRoleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateImpersonationRoleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateImpersonationRoleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated list of rules.</p>
     */
    inline const Aws::Vector<ImpersonationRule>& GetRules() const{ return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    inline void SetRules(const Aws::Vector<ImpersonationRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }
    inline void SetRules(Aws::Vector<ImpersonationRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }
    inline UpdateImpersonationRoleRequest& WithRules(const Aws::Vector<ImpersonationRule>& value) { SetRules(value); return *this;}
    inline UpdateImpersonationRoleRequest& WithRules(Aws::Vector<ImpersonationRule>&& value) { SetRules(std::move(value)); return *this;}
    inline UpdateImpersonationRoleRequest& AddRules(const ImpersonationRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }
    inline UpdateImpersonationRoleRequest& AddRules(ImpersonationRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_impersonationRoleId;
    bool m_impersonationRoleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ImpersonationRoleType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ImpersonationRule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
