/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AutoEnableStandards.h>
#include <aws/securityhub/model/OrganizationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{
  class DescribeOrganizationConfigurationResult
  {
  public:
    AWS_SECURITYHUB_API DescribeOrganizationConfigurationResult() = default;
    AWS_SECURITYHUB_API DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API DescribeOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Whether to automatically enable Security Hub in new member accounts when they
     * join the organization.</p> <p>If set to <code>true</code>, then Security Hub is
     * automatically enabled in new accounts. If set to <code>false</code>, then
     * Security Hub isn't enabled in new accounts automatically. The default value is
     * <code>false</code>.</p> <p>If the <code>ConfigurationType</code> of your
     * organization is set to <code>CENTRAL</code>, then this field is set to
     * <code>false</code> and can't be changed in the home Region and linked Regions.
     * However, in that case, the delegated administrator can create a configuration
     * policy in which Security Hub is enabled and associate the policy with new
     * organization accounts.</p>
     */
    inline bool GetAutoEnable() const { return m_autoEnable; }
    inline void SetAutoEnable(bool value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }
    inline DescribeOrganizationConfigurationResult& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the maximum number of allowed member accounts are already associated
     * with the Security Hub administrator account.</p>
     */
    inline bool GetMemberAccountLimitReached() const { return m_memberAccountLimitReached; }
    inline void SetMemberAccountLimitReached(bool value) { m_memberAccountLimitReachedHasBeenSet = true; m_memberAccountLimitReached = value; }
    inline DescribeOrganizationConfigurationResult& WithMemberAccountLimitReached(bool value) { SetMemberAccountLimitReached(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to automatically enable Security Hub <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards-enable-disable.html">default
     * standards</a> in new member accounts when they join the organization.</p> <p>If
     * equal to <code>DEFAULT</code>, then Security Hub default standards are
     * automatically enabled for new member accounts. If equal to <code>NONE</code>,
     * then default standards are not automatically enabled for new member accounts.
     * The default value of this parameter is equal to <code>DEFAULT</code>.</p> <p>If
     * the <code>ConfigurationType</code> of your organization is set to
     * <code>CENTRAL</code>, then this field is set to <code>NONE</code> and can't be
     * changed in the home Region and linked Regions. However, in that case, the
     * delegated administrator can create a configuration policy in which specific
     * security standards are enabled and associate the policy with new organization
     * accounts.</p>
     */
    inline AutoEnableStandards GetAutoEnableStandards() const { return m_autoEnableStandards; }
    inline void SetAutoEnableStandards(AutoEnableStandards value) { m_autoEnableStandardsHasBeenSet = true; m_autoEnableStandards = value; }
    inline DescribeOrganizationConfigurationResult& WithAutoEnableStandards(AutoEnableStandards value) { SetAutoEnableStandards(value); return *this;}
    ///@}

    ///@{
    
    inline const OrganizationConfiguration& GetOrganizationConfiguration() const { return m_organizationConfiguration; }
    template<typename OrganizationConfigurationT = OrganizationConfiguration>
    void SetOrganizationConfiguration(OrganizationConfigurationT&& value) { m_organizationConfigurationHasBeenSet = true; m_organizationConfiguration = std::forward<OrganizationConfigurationT>(value); }
    template<typename OrganizationConfigurationT = OrganizationConfiguration>
    DescribeOrganizationConfigurationResult& WithOrganizationConfiguration(OrganizationConfigurationT&& value) { SetOrganizationConfiguration(std::forward<OrganizationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOrganizationConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_autoEnable{false};
    bool m_autoEnableHasBeenSet = false;

    bool m_memberAccountLimitReached{false};
    bool m_memberAccountLimitReachedHasBeenSet = false;

    AutoEnableStandards m_autoEnableStandards{AutoEnableStandards::NOT_SET};
    bool m_autoEnableStandardsHasBeenSet = false;

    OrganizationConfiguration m_organizationConfiguration;
    bool m_organizationConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
