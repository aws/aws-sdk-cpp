/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DescribeDashboardSnapshotJobResultRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DescribeDashboardSnapshotJobResultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDashboardSnapshotJobResult"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline DescribeDashboardSnapshotJobResultRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline DescribeDashboardSnapshotJobResultRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline DescribeDashboardSnapshotJobResultRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }
    inline DescribeDashboardSnapshotJobResultRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}
    inline DescribeDashboardSnapshotJobResultRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}
    inline DescribeDashboardSnapshotJobResultRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline const Aws::String& GetSnapshotJobId() const{ return m_snapshotJobId; }
    inline bool SnapshotJobIdHasBeenSet() const { return m_snapshotJobIdHasBeenSet; }
    inline void SetSnapshotJobId(const Aws::String& value) { m_snapshotJobIdHasBeenSet = true; m_snapshotJobId = value; }
    inline void SetSnapshotJobId(Aws::String&& value) { m_snapshotJobIdHasBeenSet = true; m_snapshotJobId = std::move(value); }
    inline void SetSnapshotJobId(const char* value) { m_snapshotJobIdHasBeenSet = true; m_snapshotJobId.assign(value); }
    inline DescribeDashboardSnapshotJobResultRequest& WithSnapshotJobId(const Aws::String& value) { SetSnapshotJobId(value); return *this;}
    inline DescribeDashboardSnapshotJobResultRequest& WithSnapshotJobId(Aws::String&& value) { SetSnapshotJobId(std::move(value)); return *this;}
    inline DescribeDashboardSnapshotJobResultRequest& WithSnapshotJobId(const char* value) { SetSnapshotJobId(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::String m_snapshotJobId;
    bool m_snapshotJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
