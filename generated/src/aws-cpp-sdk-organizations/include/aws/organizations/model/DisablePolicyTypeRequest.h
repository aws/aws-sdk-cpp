/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/PolicyType.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class DisablePolicyTypeRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API DisablePolicyTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisablePolicyType"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier (ID) of the root in which you want to disable a policy
     * type. You can get the ID from the <a>ListRoots</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a root ID string
     * requires "r-" followed by from 4 to 32 lowercase letters or digits.</p>
     */
    inline const Aws::String& GetRootId() const { return m_rootId; }
    inline bool RootIdHasBeenSet() const { return m_rootIdHasBeenSet; }
    template<typename RootIdT = Aws::String>
    void SetRootId(RootIdT&& value) { m_rootIdHasBeenSet = true; m_rootId = std::forward<RootIdT>(value); }
    template<typename RootIdT = Aws::String>
    DisablePolicyTypeRequest& WithRootId(RootIdT&& value) { SetRootId(std::forward<RootIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy type that you want to disable in this root. You can specify one of
     * the following values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">SERVICE_CONTROL_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_rcps.html">RESOURCE_CONTROL_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_declarative.html">DECLARATIVE_POLICY_EC2</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_chatbot.html">CHATBOT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_security_hub.html">SECURITYHUB_POLICY</a>
     * </p> </li> </ul>
     */
    inline PolicyType GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(PolicyType value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline DisablePolicyTypeRequest& WithPolicyType(PolicyType value) { SetPolicyType(value); return *this;}
    ///@}
  private:

    Aws::String m_rootId;
    bool m_rootIdHasBeenSet = false;

    PolicyType m_policyType{PolicyType::NOT_SET};
    bool m_policyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
