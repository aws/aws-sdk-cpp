/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/model/OrganizationSharingStatus.h>
#include <aws/wellarchitected/model/DiscoveryIntegrationStatus.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class UpdateGlobalSettingsRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API UpdateGlobalSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGlobalSettings"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    /**
     * <p>The status of organization sharing settings.</p>
     */
    inline const OrganizationSharingStatus& GetOrganizationSharingStatus() const{ return m_organizationSharingStatus; }

    /**
     * <p>The status of organization sharing settings.</p>
     */
    inline bool OrganizationSharingStatusHasBeenSet() const { return m_organizationSharingStatusHasBeenSet; }

    /**
     * <p>The status of organization sharing settings.</p>
     */
    inline void SetOrganizationSharingStatus(const OrganizationSharingStatus& value) { m_organizationSharingStatusHasBeenSet = true; m_organizationSharingStatus = value; }

    /**
     * <p>The status of organization sharing settings.</p>
     */
    inline void SetOrganizationSharingStatus(OrganizationSharingStatus&& value) { m_organizationSharingStatusHasBeenSet = true; m_organizationSharingStatus = std::move(value); }

    /**
     * <p>The status of organization sharing settings.</p>
     */
    inline UpdateGlobalSettingsRequest& WithOrganizationSharingStatus(const OrganizationSharingStatus& value) { SetOrganizationSharingStatus(value); return *this;}

    /**
     * <p>The status of organization sharing settings.</p>
     */
    inline UpdateGlobalSettingsRequest& WithOrganizationSharingStatus(OrganizationSharingStatus&& value) { SetOrganizationSharingStatus(std::move(value)); return *this;}


    /**
     * <p>The status of discovery support settings.</p>
     */
    inline const DiscoveryIntegrationStatus& GetDiscoveryIntegrationStatus() const{ return m_discoveryIntegrationStatus; }

    /**
     * <p>The status of discovery support settings.</p>
     */
    inline bool DiscoveryIntegrationStatusHasBeenSet() const { return m_discoveryIntegrationStatusHasBeenSet; }

    /**
     * <p>The status of discovery support settings.</p>
     */
    inline void SetDiscoveryIntegrationStatus(const DiscoveryIntegrationStatus& value) { m_discoveryIntegrationStatusHasBeenSet = true; m_discoveryIntegrationStatus = value; }

    /**
     * <p>The status of discovery support settings.</p>
     */
    inline void SetDiscoveryIntegrationStatus(DiscoveryIntegrationStatus&& value) { m_discoveryIntegrationStatusHasBeenSet = true; m_discoveryIntegrationStatus = std::move(value); }

    /**
     * <p>The status of discovery support settings.</p>
     */
    inline UpdateGlobalSettingsRequest& WithDiscoveryIntegrationStatus(const DiscoveryIntegrationStatus& value) { SetDiscoveryIntegrationStatus(value); return *this;}

    /**
     * <p>The status of discovery support settings.</p>
     */
    inline UpdateGlobalSettingsRequest& WithDiscoveryIntegrationStatus(DiscoveryIntegrationStatus&& value) { SetDiscoveryIntegrationStatus(std::move(value)); return *this;}

  private:

    OrganizationSharingStatus m_organizationSharingStatus;
    bool m_organizationSharingStatusHasBeenSet = false;

    DiscoveryIntegrationStatus m_discoveryIntegrationStatus;
    bool m_discoveryIntegrationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
