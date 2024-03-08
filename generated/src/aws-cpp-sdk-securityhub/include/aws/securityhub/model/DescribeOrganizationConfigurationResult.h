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
    AWS_SECURITYHUB_API DescribeOrganizationConfigurationResult();
    AWS_SECURITYHUB_API DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API DescribeOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline bool GetAutoEnable() const{ return m_autoEnable; }

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
    inline void SetAutoEnable(bool value) { m_autoEnable = value; }

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
    inline DescribeOrganizationConfigurationResult& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}


    /**
     * <p>Whether the maximum number of allowed member accounts are already associated
     * with the Security Hub administrator account.</p>
     */
    inline bool GetMemberAccountLimitReached() const{ return m_memberAccountLimitReached; }

    /**
     * <p>Whether the maximum number of allowed member accounts are already associated
     * with the Security Hub administrator account.</p>
     */
    inline void SetMemberAccountLimitReached(bool value) { m_memberAccountLimitReached = value; }

    /**
     * <p>Whether the maximum number of allowed member accounts are already associated
     * with the Security Hub administrator account.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithMemberAccountLimitReached(bool value) { SetMemberAccountLimitReached(value); return *this;}


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
    inline const AutoEnableStandards& GetAutoEnableStandards() const{ return m_autoEnableStandards; }

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
    inline void SetAutoEnableStandards(const AutoEnableStandards& value) { m_autoEnableStandards = value; }

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
    inline void SetAutoEnableStandards(AutoEnableStandards&& value) { m_autoEnableStandards = std::move(value); }

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
    inline DescribeOrganizationConfigurationResult& WithAutoEnableStandards(const AutoEnableStandards& value) { SetAutoEnableStandards(value); return *this;}

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
    inline DescribeOrganizationConfigurationResult& WithAutoEnableStandards(AutoEnableStandards&& value) { SetAutoEnableStandards(std::move(value)); return *this;}


    
    inline const OrganizationConfiguration& GetOrganizationConfiguration() const{ return m_organizationConfiguration; }

    
    inline void SetOrganizationConfiguration(const OrganizationConfiguration& value) { m_organizationConfiguration = value; }

    
    inline void SetOrganizationConfiguration(OrganizationConfiguration&& value) { m_organizationConfiguration = std::move(value); }

    
    inline DescribeOrganizationConfigurationResult& WithOrganizationConfiguration(const OrganizationConfiguration& value) { SetOrganizationConfiguration(value); return *this;}

    
    inline DescribeOrganizationConfigurationResult& WithOrganizationConfiguration(OrganizationConfiguration&& value) { SetOrganizationConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeOrganizationConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeOrganizationConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeOrganizationConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_autoEnable;

    bool m_memberAccountLimitReached;

    AutoEnableStandards m_autoEnableStandards;

    OrganizationConfiguration m_organizationConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
