/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/organizations/model/EffectivePolicyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class DescribeEffectivePolicyRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API DescribeEffectivePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEffectivePolicy"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The type of policy that you want information about. You can specify one of
     * the following values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> </ul>
     */
    inline const EffectivePolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The type of policy that you want information about. You can specify one of
     * the following values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> </ul>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>The type of policy that you want information about. You can specify one of
     * the following values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> </ul>
     */
    inline void SetPolicyType(const EffectivePolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The type of policy that you want information about. You can specify one of
     * the following values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> </ul>
     */
    inline void SetPolicyType(EffectivePolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The type of policy that you want information about. You can specify one of
     * the following values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> </ul>
     */
    inline DescribeEffectivePolicyRequest& WithPolicyType(const EffectivePolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The type of policy that you want information about. You can specify one of
     * the following values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> </ul>
     */
    inline DescribeEffectivePolicyRequest& WithPolicyType(EffectivePolicyType&& value) { SetPolicyType(std::move(value)); return *this;}


    /**
     * <p>When you're signed in as the management account, specify the ID of the
     * account that you want details about. Specifying an organization root or
     * organizational unit (OU) as the target is not supported.</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>When you're signed in as the management account, specify the ID of the
     * account that you want details about. Specifying an organization root or
     * organizational unit (OU) as the target is not supported.</p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p>When you're signed in as the management account, specify the ID of the
     * account that you want details about. Specifying an organization root or
     * organizational unit (OU) as the target is not supported.</p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>When you're signed in as the management account, specify the ID of the
     * account that you want details about. Specifying an organization root or
     * organizational unit (OU) as the target is not supported.</p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p>When you're signed in as the management account, specify the ID of the
     * account that you want details about. Specifying an organization root or
     * organizational unit (OU) as the target is not supported.</p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>When you're signed in as the management account, specify the ID of the
     * account that you want details about. Specifying an organization root or
     * organizational unit (OU) as the target is not supported.</p>
     */
    inline DescribeEffectivePolicyRequest& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>When you're signed in as the management account, specify the ID of the
     * account that you want details about. Specifying an organization root or
     * organizational unit (OU) as the target is not supported.</p>
     */
    inline DescribeEffectivePolicyRequest& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>When you're signed in as the management account, specify the ID of the
     * account that you want details about. Specifying an organization root or
     * organizational unit (OU) as the target is not supported.</p>
     */
    inline DescribeEffectivePolicyRequest& WithTargetId(const char* value) { SetTargetId(value); return *this;}

  private:

    EffectivePolicyType m_policyType;
    bool m_policyTypeHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
