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
  class DescribeDashboardSnapshotJobRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DescribeDashboardSnapshotJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDashboardSnapshotJob"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline DescribeDashboardSnapshotJobRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline DescribeDashboardSnapshotJobRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline DescribeDashboardSnapshotJobRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }

    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }

    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }

    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }

    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline DescribeDashboardSnapshotJobRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline DescribeDashboardSnapshotJobRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline DescribeDashboardSnapshotJobRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}


    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline const Aws::String& GetSnapshotJobId() const{ return m_snapshotJobId; }

    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline bool SnapshotJobIdHasBeenSet() const { return m_snapshotJobIdHasBeenSet; }

    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline void SetSnapshotJobId(const Aws::String& value) { m_snapshotJobIdHasBeenSet = true; m_snapshotJobId = value; }

    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline void SetSnapshotJobId(Aws::String&& value) { m_snapshotJobIdHasBeenSet = true; m_snapshotJobId = std::move(value); }

    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline void SetSnapshotJobId(const char* value) { m_snapshotJobIdHasBeenSet = true; m_snapshotJobId.assign(value); }

    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline DescribeDashboardSnapshotJobRequest& WithSnapshotJobId(const Aws::String& value) { SetSnapshotJobId(value); return *this;}

    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline DescribeDashboardSnapshotJobRequest& WithSnapshotJobId(Aws::String&& value) { SetSnapshotJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline DescribeDashboardSnapshotJobRequest& WithSnapshotJobId(const char* value) { SetSnapshotJobId(value); return *this;}

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
