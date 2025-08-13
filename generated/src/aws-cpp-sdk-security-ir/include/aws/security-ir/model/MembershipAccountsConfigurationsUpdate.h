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
   * <p>The <code>MembershipAccountsConfigurationsUpdate</code>structure represents
   * the configuration updates for member accounts within an Amazon Web Services
   * organization. </p> <p>This structure is used to modify existing account
   * configurations and settings for members in the organization. When applying
   * updates, ensure all required fields are properly specified to maintain account
   * consistency. </p> <p>Key considerations when using this structure:</p> <ul> <li>
   * <p>All configuration changes are validated before being applied</p> </li> <li>
   * <p>Updates are processed asynchronously in the background</p> </li> <li>
   * <p>Configuration changes may take several minutes to propagate across all
   * affected accounts</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/MembershipAccountsConfigurationsUpdate">AWS
   * API Reference</a></p>
   */
  class MembershipAccountsConfigurationsUpdate
  {
  public:
    AWS_SECURITYIR_API MembershipAccountsConfigurationsUpdate() = default;
    AWS_SECURITYIR_API MembershipAccountsConfigurationsUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API MembershipAccountsConfigurationsUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>coverEntireOrganization</code> field is a boolean value that
     * determines whether the membership configuration should be applied across the
     * entire Amazon Web Services Organization. </p> <p>When set to <code>true</code>,
     * the configuration will be applied to all accounts within the organization. When
     * set to <code>false</code>, the configuration will only apply to specifically
     * designated accounts. </p>
     */
    inline bool GetCoverEntireOrganization() const { return m_coverEntireOrganization; }
    inline bool CoverEntireOrganizationHasBeenSet() const { return m_coverEntireOrganizationHasBeenSet; }
    inline void SetCoverEntireOrganization(bool value) { m_coverEntireOrganizationHasBeenSet = true; m_coverEntireOrganization = value; }
    inline MembershipAccountsConfigurationsUpdate& WithCoverEntireOrganization(bool value) { SetCoverEntireOrganization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of organizational unit IDs to add to the membership configuration.
     * Each organizational unit ID must match the pattern
     * <code>ou-[0-9a-z]{4,32}-[a-z0-9]{8,32}</code>. </p> <p>The list must contain
     * between 1 and 5 organizational unit IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitsToAdd() const { return m_organizationalUnitsToAdd; }
    inline bool OrganizationalUnitsToAddHasBeenSet() const { return m_organizationalUnitsToAddHasBeenSet; }
    template<typename OrganizationalUnitsToAddT = Aws::Vector<Aws::String>>
    void SetOrganizationalUnitsToAdd(OrganizationalUnitsToAddT&& value) { m_organizationalUnitsToAddHasBeenSet = true; m_organizationalUnitsToAdd = std::forward<OrganizationalUnitsToAddT>(value); }
    template<typename OrganizationalUnitsToAddT = Aws::Vector<Aws::String>>
    MembershipAccountsConfigurationsUpdate& WithOrganizationalUnitsToAdd(OrganizationalUnitsToAddT&& value) { SetOrganizationalUnitsToAdd(std::forward<OrganizationalUnitsToAddT>(value)); return *this;}
    template<typename OrganizationalUnitsToAddT = Aws::String>
    MembershipAccountsConfigurationsUpdate& AddOrganizationalUnitsToAdd(OrganizationalUnitsToAddT&& value) { m_organizationalUnitsToAddHasBeenSet = true; m_organizationalUnitsToAdd.emplace_back(std::forward<OrganizationalUnitsToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of organizational unit IDs to remove from the membership
     * configuration. Each organizational unit ID must match the pattern
     * <code>ou-[0-9a-z]{4,32}-[a-z0-9]{8,32}</code>. </p> <p>The list must contain
     * between 1 and 5 organizational unit IDs per invocation of the API request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitsToRemove() const { return m_organizationalUnitsToRemove; }
    inline bool OrganizationalUnitsToRemoveHasBeenSet() const { return m_organizationalUnitsToRemoveHasBeenSet; }
    template<typename OrganizationalUnitsToRemoveT = Aws::Vector<Aws::String>>
    void SetOrganizationalUnitsToRemove(OrganizationalUnitsToRemoveT&& value) { m_organizationalUnitsToRemoveHasBeenSet = true; m_organizationalUnitsToRemove = std::forward<OrganizationalUnitsToRemoveT>(value); }
    template<typename OrganizationalUnitsToRemoveT = Aws::Vector<Aws::String>>
    MembershipAccountsConfigurationsUpdate& WithOrganizationalUnitsToRemove(OrganizationalUnitsToRemoveT&& value) { SetOrganizationalUnitsToRemove(std::forward<OrganizationalUnitsToRemoveT>(value)); return *this;}
    template<typename OrganizationalUnitsToRemoveT = Aws::String>
    MembershipAccountsConfigurationsUpdate& AddOrganizationalUnitsToRemove(OrganizationalUnitsToRemoveT&& value) { m_organizationalUnitsToRemoveHasBeenSet = true; m_organizationalUnitsToRemove.emplace_back(std::forward<OrganizationalUnitsToRemoveT>(value)); return *this; }
    ///@}
  private:

    bool m_coverEntireOrganization{false};
    bool m_coverEntireOrganizationHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnitsToAdd;
    bool m_organizationalUnitsToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnitsToRemove;
    bool m_organizationalUnitsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
