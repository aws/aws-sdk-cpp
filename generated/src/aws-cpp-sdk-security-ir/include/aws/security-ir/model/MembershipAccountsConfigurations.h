/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityIR
{
namespace Model
{

  /**
   * <p>The <code>MembershipAccountsConfigurations</code> structure defines the
   * configuration settings for managing membership accounts withinAmazon Web
   * Services. </p> <p>This structure contains settings that determine how member
   * accounts are configured and managed within your organization, including: </p>
   * <ul> <li> <p>Account configuration preferences</p> </li> <li> <p>Membership
   * validation rules</p> </li> <li> <p>Account access settings</p> </li> </ul>
   * <p>You can use this structure to define and maintain standardized configurations
   * across multiple member accounts in your organization. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/MembershipAccountsConfigurations">AWS
   * API Reference</a></p>
   */
  class MembershipAccountsConfigurations
  {
  public:
    AWS_SECURITYIR_API MembershipAccountsConfigurations() = default;
    AWS_SECURITYIR_API MembershipAccountsConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API MembershipAccountsConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>coverEntireOrganization</code> field is a boolean value that
     * determines whether the membership configuration applies to all accounts within
     * an Amazon Web Services Organization. </p> <p>When set to <code>true</code>, the
     * configuration will be applied across all accounts in the organization. When set
     * to <code>false</code>, the configuration will only apply to specifically
     * designated accounts under the AWS Organizational Units specificied. </p>
     */
    inline bool GetCoverEntireOrganization() const { return m_coverEntireOrganization; }
    inline bool CoverEntireOrganizationHasBeenSet() const { return m_coverEntireOrganizationHasBeenSet; }
    inline void SetCoverEntireOrganization(bool value) { m_coverEntireOrganizationHasBeenSet = true; m_coverEntireOrganization = value; }
    inline MembershipAccountsConfigurations& WithCoverEntireOrganization(bool value) { SetCoverEntireOrganization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of organizational unit IDs that follow the pattern
     * <code>ou-[0-9a-z]{4,32}-[a-z0-9]{8,32}</code>. These IDs represent the
     * organizational units within an Amazon Web Services Organizations structure that
     * are covered by the membership. </p> <p>Each organizational unit ID in the list
     * must:</p> <ul> <li> <p>Begin with the prefix 'ou-'</p> </li> <li> <p>Contain
     * between 4 and 32 alphanumeric characters in the first segment</p> </li> <li>
     * <p>Contain between 8 and 32 alphanumeric characters in the second segment</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnits() const { return m_organizationalUnits; }
    inline bool OrganizationalUnitsHasBeenSet() const { return m_organizationalUnitsHasBeenSet; }
    template<typename OrganizationalUnitsT = Aws::Vector<Aws::String>>
    void SetOrganizationalUnits(OrganizationalUnitsT&& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits = std::forward<OrganizationalUnitsT>(value); }
    template<typename OrganizationalUnitsT = Aws::Vector<Aws::String>>
    MembershipAccountsConfigurations& WithOrganizationalUnits(OrganizationalUnitsT&& value) { SetOrganizationalUnits(std::forward<OrganizationalUnitsT>(value)); return *this;}
    template<typename OrganizationalUnitsT = Aws::String>
    MembershipAccountsConfigurations& AddOrganizationalUnits(OrganizationalUnitsT&& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits.emplace_back(std::forward<OrganizationalUnitsT>(value)); return *this; }
    ///@}
  private:

    bool m_coverEntireOrganization{false};
    bool m_coverEntireOrganizationHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnits;
    bool m_organizationalUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
