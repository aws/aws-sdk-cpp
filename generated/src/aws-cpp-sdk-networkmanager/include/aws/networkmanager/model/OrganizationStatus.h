/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/AccountStatus.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>The status of an Amazon Web Services Organization and the accounts within
   * that organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/OrganizationStatus">AWS
   * API Reference</a></p>
   */
  class OrganizationStatus
  {
  public:
    AWS_NETWORKMANAGER_API OrganizationStatus() = default;
    AWS_NETWORKMANAGER_API OrganizationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API OrganizationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of an Amazon Web Services Organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    OrganizationStatus& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the organization's AWS service access. This will be
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline const Aws::String& GetOrganizationAwsServiceAccessStatus() const { return m_organizationAwsServiceAccessStatus; }
    inline bool OrganizationAwsServiceAccessStatusHasBeenSet() const { return m_organizationAwsServiceAccessStatusHasBeenSet; }
    template<typename OrganizationAwsServiceAccessStatusT = Aws::String>
    void SetOrganizationAwsServiceAccessStatus(OrganizationAwsServiceAccessStatusT&& value) { m_organizationAwsServiceAccessStatusHasBeenSet = true; m_organizationAwsServiceAccessStatus = std::forward<OrganizationAwsServiceAccessStatusT>(value); }
    template<typename OrganizationAwsServiceAccessStatusT = Aws::String>
    OrganizationStatus& WithOrganizationAwsServiceAccessStatus(OrganizationAwsServiceAccessStatusT&& value) { SetOrganizationAwsServiceAccessStatus(std::forward<OrganizationAwsServiceAccessStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SLR deployment for the account. This will be either
     * <code>SUCCEEDED</code> or <code>IN_PROGRESS</code>.</p>
     */
    inline const Aws::String& GetSLRDeploymentStatus() const { return m_sLRDeploymentStatus; }
    inline bool SLRDeploymentStatusHasBeenSet() const { return m_sLRDeploymentStatusHasBeenSet; }
    template<typename SLRDeploymentStatusT = Aws::String>
    void SetSLRDeploymentStatus(SLRDeploymentStatusT&& value) { m_sLRDeploymentStatusHasBeenSet = true; m_sLRDeploymentStatus = std::forward<SLRDeploymentStatusT>(value); }
    template<typename SLRDeploymentStatusT = Aws::String>
    OrganizationStatus& WithSLRDeploymentStatus(SLRDeploymentStatusT&& value) { SetSLRDeploymentStatus(std::forward<SLRDeploymentStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current service-linked role (SLR) deployment status for an Amazon Web
     * Services Organization's accounts. This will be either <code>SUCCEEDED</code> or
     * <code>IN_PROGRESS</code>.</p>
     */
    inline const Aws::Vector<AccountStatus>& GetAccountStatusList() const { return m_accountStatusList; }
    inline bool AccountStatusListHasBeenSet() const { return m_accountStatusListHasBeenSet; }
    template<typename AccountStatusListT = Aws::Vector<AccountStatus>>
    void SetAccountStatusList(AccountStatusListT&& value) { m_accountStatusListHasBeenSet = true; m_accountStatusList = std::forward<AccountStatusListT>(value); }
    template<typename AccountStatusListT = Aws::Vector<AccountStatus>>
    OrganizationStatus& WithAccountStatusList(AccountStatusListT&& value) { SetAccountStatusList(std::forward<AccountStatusListT>(value)); return *this;}
    template<typename AccountStatusListT = AccountStatus>
    OrganizationStatus& AddAccountStatusList(AccountStatusListT&& value) { m_accountStatusListHasBeenSet = true; m_accountStatusList.emplace_back(std::forward<AccountStatusListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_organizationAwsServiceAccessStatus;
    bool m_organizationAwsServiceAccessStatusHasBeenSet = false;

    Aws::String m_sLRDeploymentStatus;
    bool m_sLRDeploymentStatusHasBeenSet = false;

    Aws::Vector<AccountStatus> m_accountStatusList;
    bool m_accountStatusListHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
