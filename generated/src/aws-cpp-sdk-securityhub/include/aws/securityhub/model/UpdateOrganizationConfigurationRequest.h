/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/model/AutoEnableStandards.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class UpdateOrganizationConfigurationRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API UpdateOrganizationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOrganizationConfiguration"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>Whether to automatically enable Security Hub for new accounts in the
     * organization.</p> <p>By default, this is <code>false</code>, and new accounts
     * are not added automatically.</p> <p>To automatically enable Security Hub for new
     * accounts, set this to <code>true</code>.</p>
     */
    inline bool GetAutoEnable() const{ return m_autoEnable; }

    /**
     * <p>Whether to automatically enable Security Hub for new accounts in the
     * organization.</p> <p>By default, this is <code>false</code>, and new accounts
     * are not added automatically.</p> <p>To automatically enable Security Hub for new
     * accounts, set this to <code>true</code>.</p>
     */
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }

    /**
     * <p>Whether to automatically enable Security Hub for new accounts in the
     * organization.</p> <p>By default, this is <code>false</code>, and new accounts
     * are not added automatically.</p> <p>To automatically enable Security Hub for new
     * accounts, set this to <code>true</code>.</p>
     */
    inline void SetAutoEnable(bool value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }

    /**
     * <p>Whether to automatically enable Security Hub for new accounts in the
     * organization.</p> <p>By default, this is <code>false</code>, and new accounts
     * are not added automatically.</p> <p>To automatically enable Security Hub for new
     * accounts, set this to <code>true</code>.</p>
     */
    inline UpdateOrganizationConfigurationRequest& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}


    /**
     * <p>Whether to automatically enable Security Hub <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards-enable-disable.html">default
     * standards</a> for new member accounts in the organization.</p> <p>By default,
     * this parameter is equal to <code>DEFAULT</code>, and new member accounts are
     * automatically enabled with default Security Hub standards.</p> <p>To opt out of
     * enabling default standards for new member accounts, set this parameter equal to
     * <code>NONE</code>.</p>
     */
    inline const AutoEnableStandards& GetAutoEnableStandards() const{ return m_autoEnableStandards; }

    /**
     * <p>Whether to automatically enable Security Hub <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards-enable-disable.html">default
     * standards</a> for new member accounts in the organization.</p> <p>By default,
     * this parameter is equal to <code>DEFAULT</code>, and new member accounts are
     * automatically enabled with default Security Hub standards.</p> <p>To opt out of
     * enabling default standards for new member accounts, set this parameter equal to
     * <code>NONE</code>.</p>
     */
    inline bool AutoEnableStandardsHasBeenSet() const { return m_autoEnableStandardsHasBeenSet; }

    /**
     * <p>Whether to automatically enable Security Hub <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards-enable-disable.html">default
     * standards</a> for new member accounts in the organization.</p> <p>By default,
     * this parameter is equal to <code>DEFAULT</code>, and new member accounts are
     * automatically enabled with default Security Hub standards.</p> <p>To opt out of
     * enabling default standards for new member accounts, set this parameter equal to
     * <code>NONE</code>.</p>
     */
    inline void SetAutoEnableStandards(const AutoEnableStandards& value) { m_autoEnableStandardsHasBeenSet = true; m_autoEnableStandards = value; }

    /**
     * <p>Whether to automatically enable Security Hub <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards-enable-disable.html">default
     * standards</a> for new member accounts in the organization.</p> <p>By default,
     * this parameter is equal to <code>DEFAULT</code>, and new member accounts are
     * automatically enabled with default Security Hub standards.</p> <p>To opt out of
     * enabling default standards for new member accounts, set this parameter equal to
     * <code>NONE</code>.</p>
     */
    inline void SetAutoEnableStandards(AutoEnableStandards&& value) { m_autoEnableStandardsHasBeenSet = true; m_autoEnableStandards = std::move(value); }

    /**
     * <p>Whether to automatically enable Security Hub <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards-enable-disable.html">default
     * standards</a> for new member accounts in the organization.</p> <p>By default,
     * this parameter is equal to <code>DEFAULT</code>, and new member accounts are
     * automatically enabled with default Security Hub standards.</p> <p>To opt out of
     * enabling default standards for new member accounts, set this parameter equal to
     * <code>NONE</code>.</p>
     */
    inline UpdateOrganizationConfigurationRequest& WithAutoEnableStandards(const AutoEnableStandards& value) { SetAutoEnableStandards(value); return *this;}

    /**
     * <p>Whether to automatically enable Security Hub <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards-enable-disable.html">default
     * standards</a> for new member accounts in the organization.</p> <p>By default,
     * this parameter is equal to <code>DEFAULT</code>, and new member accounts are
     * automatically enabled with default Security Hub standards.</p> <p>To opt out of
     * enabling default standards for new member accounts, set this parameter equal to
     * <code>NONE</code>.</p>
     */
    inline UpdateOrganizationConfigurationRequest& WithAutoEnableStandards(AutoEnableStandards&& value) { SetAutoEnableStandards(std::move(value)); return *this;}

  private:

    bool m_autoEnable;
    bool m_autoEnableHasBeenSet = false;

    AutoEnableStandards m_autoEnableStandards;
    bool m_autoEnableStandardsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
