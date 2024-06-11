/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateDashboardLinksRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateDashboardLinksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDashboardLinks"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the dashboard whose
     * links you want to update.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline UpdateDashboardLinksRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UpdateDashboardLinksRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UpdateDashboardLinksRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }
    inline UpdateDashboardLinksRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}
    inline UpdateDashboardLinksRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}
    inline UpdateDashboardLinksRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> list of analysis Amazon Resource Names (ARNs) to be linked to the
     * dashboard.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkEntities() const{ return m_linkEntities; }
    inline bool LinkEntitiesHasBeenSet() const { return m_linkEntitiesHasBeenSet; }
    inline void SetLinkEntities(const Aws::Vector<Aws::String>& value) { m_linkEntitiesHasBeenSet = true; m_linkEntities = value; }
    inline void SetLinkEntities(Aws::Vector<Aws::String>&& value) { m_linkEntitiesHasBeenSet = true; m_linkEntities = std::move(value); }
    inline UpdateDashboardLinksRequest& WithLinkEntities(const Aws::Vector<Aws::String>& value) { SetLinkEntities(value); return *this;}
    inline UpdateDashboardLinksRequest& WithLinkEntities(Aws::Vector<Aws::String>&& value) { SetLinkEntities(std::move(value)); return *this;}
    inline UpdateDashboardLinksRequest& AddLinkEntities(const Aws::String& value) { m_linkEntitiesHasBeenSet = true; m_linkEntities.push_back(value); return *this; }
    inline UpdateDashboardLinksRequest& AddLinkEntities(Aws::String&& value) { m_linkEntitiesHasBeenSet = true; m_linkEntities.push_back(std::move(value)); return *this; }
    inline UpdateDashboardLinksRequest& AddLinkEntities(const char* value) { m_linkEntitiesHasBeenSet = true; m_linkEntities.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_linkEntities;
    bool m_linkEntitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
