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
    AWS_NETWORKMANAGER_API OrganizationStatus();
    AWS_NETWORKMANAGER_API OrganizationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API OrganizationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of an Amazon Web Services Organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The ID of an Amazon Web Services Organization.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The ID of an Amazon Web Services Organization.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The ID of an Amazon Web Services Organization.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The ID of an Amazon Web Services Organization.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The ID of an Amazon Web Services Organization.</p>
     */
    inline OrganizationStatus& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The ID of an Amazon Web Services Organization.</p>
     */
    inline OrganizationStatus& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The ID of an Amazon Web Services Organization.</p>
     */
    inline OrganizationStatus& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The status of the organization's AWS service access. This will be
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline const Aws::String& GetOrganizationAwsServiceAccessStatus() const{ return m_organizationAwsServiceAccessStatus; }

    /**
     * <p>The status of the organization's AWS service access. This will be
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline bool OrganizationAwsServiceAccessStatusHasBeenSet() const { return m_organizationAwsServiceAccessStatusHasBeenSet; }

    /**
     * <p>The status of the organization's AWS service access. This will be
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline void SetOrganizationAwsServiceAccessStatus(const Aws::String& value) { m_organizationAwsServiceAccessStatusHasBeenSet = true; m_organizationAwsServiceAccessStatus = value; }

    /**
     * <p>The status of the organization's AWS service access. This will be
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline void SetOrganizationAwsServiceAccessStatus(Aws::String&& value) { m_organizationAwsServiceAccessStatusHasBeenSet = true; m_organizationAwsServiceAccessStatus = std::move(value); }

    /**
     * <p>The status of the organization's AWS service access. This will be
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline void SetOrganizationAwsServiceAccessStatus(const char* value) { m_organizationAwsServiceAccessStatusHasBeenSet = true; m_organizationAwsServiceAccessStatus.assign(value); }

    /**
     * <p>The status of the organization's AWS service access. This will be
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline OrganizationStatus& WithOrganizationAwsServiceAccessStatus(const Aws::String& value) { SetOrganizationAwsServiceAccessStatus(value); return *this;}

    /**
     * <p>The status of the organization's AWS service access. This will be
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline OrganizationStatus& WithOrganizationAwsServiceAccessStatus(Aws::String&& value) { SetOrganizationAwsServiceAccessStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the organization's AWS service access. This will be
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline OrganizationStatus& WithOrganizationAwsServiceAccessStatus(const char* value) { SetOrganizationAwsServiceAccessStatus(value); return *this;}


    /**
     * <p>The status of the SLR deployment for the account. This will be either
     * <code>SUCCEEDED</code> or <code>IN_PROGRESS</code>.</p>
     */
    inline const Aws::String& GetSLRDeploymentStatus() const{ return m_sLRDeploymentStatus; }

    /**
     * <p>The status of the SLR deployment for the account. This will be either
     * <code>SUCCEEDED</code> or <code>IN_PROGRESS</code>.</p>
     */
    inline bool SLRDeploymentStatusHasBeenSet() const { return m_sLRDeploymentStatusHasBeenSet; }

    /**
     * <p>The status of the SLR deployment for the account. This will be either
     * <code>SUCCEEDED</code> or <code>IN_PROGRESS</code>.</p>
     */
    inline void SetSLRDeploymentStatus(const Aws::String& value) { m_sLRDeploymentStatusHasBeenSet = true; m_sLRDeploymentStatus = value; }

    /**
     * <p>The status of the SLR deployment for the account. This will be either
     * <code>SUCCEEDED</code> or <code>IN_PROGRESS</code>.</p>
     */
    inline void SetSLRDeploymentStatus(Aws::String&& value) { m_sLRDeploymentStatusHasBeenSet = true; m_sLRDeploymentStatus = std::move(value); }

    /**
     * <p>The status of the SLR deployment for the account. This will be either
     * <code>SUCCEEDED</code> or <code>IN_PROGRESS</code>.</p>
     */
    inline void SetSLRDeploymentStatus(const char* value) { m_sLRDeploymentStatusHasBeenSet = true; m_sLRDeploymentStatus.assign(value); }

    /**
     * <p>The status of the SLR deployment for the account. This will be either
     * <code>SUCCEEDED</code> or <code>IN_PROGRESS</code>.</p>
     */
    inline OrganizationStatus& WithSLRDeploymentStatus(const Aws::String& value) { SetSLRDeploymentStatus(value); return *this;}

    /**
     * <p>The status of the SLR deployment for the account. This will be either
     * <code>SUCCEEDED</code> or <code>IN_PROGRESS</code>.</p>
     */
    inline OrganizationStatus& WithSLRDeploymentStatus(Aws::String&& value) { SetSLRDeploymentStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the SLR deployment for the account. This will be either
     * <code>SUCCEEDED</code> or <code>IN_PROGRESS</code>.</p>
     */
    inline OrganizationStatus& WithSLRDeploymentStatus(const char* value) { SetSLRDeploymentStatus(value); return *this;}


    /**
     * <p>The current service-linked role (SLR) deployment status for an Amazon Web
     * Services Organization's accounts. This will be either <code>SUCCEEDED</code> or
     * <code>IN_PROGRESS</code>.</p>
     */
    inline const Aws::Vector<AccountStatus>& GetAccountStatusList() const{ return m_accountStatusList; }

    /**
     * <p>The current service-linked role (SLR) deployment status for an Amazon Web
     * Services Organization's accounts. This will be either <code>SUCCEEDED</code> or
     * <code>IN_PROGRESS</code>.</p>
     */
    inline bool AccountStatusListHasBeenSet() const { return m_accountStatusListHasBeenSet; }

    /**
     * <p>The current service-linked role (SLR) deployment status for an Amazon Web
     * Services Organization's accounts. This will be either <code>SUCCEEDED</code> or
     * <code>IN_PROGRESS</code>.</p>
     */
    inline void SetAccountStatusList(const Aws::Vector<AccountStatus>& value) { m_accountStatusListHasBeenSet = true; m_accountStatusList = value; }

    /**
     * <p>The current service-linked role (SLR) deployment status for an Amazon Web
     * Services Organization's accounts. This will be either <code>SUCCEEDED</code> or
     * <code>IN_PROGRESS</code>.</p>
     */
    inline void SetAccountStatusList(Aws::Vector<AccountStatus>&& value) { m_accountStatusListHasBeenSet = true; m_accountStatusList = std::move(value); }

    /**
     * <p>The current service-linked role (SLR) deployment status for an Amazon Web
     * Services Organization's accounts. This will be either <code>SUCCEEDED</code> or
     * <code>IN_PROGRESS</code>.</p>
     */
    inline OrganizationStatus& WithAccountStatusList(const Aws::Vector<AccountStatus>& value) { SetAccountStatusList(value); return *this;}

    /**
     * <p>The current service-linked role (SLR) deployment status for an Amazon Web
     * Services Organization's accounts. This will be either <code>SUCCEEDED</code> or
     * <code>IN_PROGRESS</code>.</p>
     */
    inline OrganizationStatus& WithAccountStatusList(Aws::Vector<AccountStatus>&& value) { SetAccountStatusList(std::move(value)); return *this;}

    /**
     * <p>The current service-linked role (SLR) deployment status for an Amazon Web
     * Services Organization's accounts. This will be either <code>SUCCEEDED</code> or
     * <code>IN_PROGRESS</code>.</p>
     */
    inline OrganizationStatus& AddAccountStatusList(const AccountStatus& value) { m_accountStatusListHasBeenSet = true; m_accountStatusList.push_back(value); return *this; }

    /**
     * <p>The current service-linked role (SLR) deployment status for an Amazon Web
     * Services Organization's accounts. This will be either <code>SUCCEEDED</code> or
     * <code>IN_PROGRESS</code>.</p>
     */
    inline OrganizationStatus& AddAccountStatusList(AccountStatus&& value) { m_accountStatusListHasBeenSet = true; m_accountStatusList.push_back(std::move(value)); return *this; }

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
