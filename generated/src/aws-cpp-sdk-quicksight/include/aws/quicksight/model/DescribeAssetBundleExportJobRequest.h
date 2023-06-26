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
  class DescribeAssetBundleExportJobRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DescribeAssetBundleExportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAssetBundleExportJob"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account the export job is executed in. </p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account the export job is executed in. </p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account the export job is executed in. </p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account the export job is executed in. </p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account the export job is executed in. </p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account the export job is executed in. </p>
     */
    inline DescribeAssetBundleExportJobRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account the export job is executed in. </p>
     */
    inline DescribeAssetBundleExportJobRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account the export job is executed in. </p>
     */
    inline DescribeAssetBundleExportJobRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the job that you want described. The job ID is set when you start a
     * new job with a <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline const Aws::String& GetAssetBundleExportJobId() const{ return m_assetBundleExportJobId; }

    /**
     * <p>The ID of the job that you want described. The job ID is set when you start a
     * new job with a <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline bool AssetBundleExportJobIdHasBeenSet() const { return m_assetBundleExportJobIdHasBeenSet; }

    /**
     * <p>The ID of the job that you want described. The job ID is set when you start a
     * new job with a <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline void SetAssetBundleExportJobId(const Aws::String& value) { m_assetBundleExportJobIdHasBeenSet = true; m_assetBundleExportJobId = value; }

    /**
     * <p>The ID of the job that you want described. The job ID is set when you start a
     * new job with a <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline void SetAssetBundleExportJobId(Aws::String&& value) { m_assetBundleExportJobIdHasBeenSet = true; m_assetBundleExportJobId = std::move(value); }

    /**
     * <p>The ID of the job that you want described. The job ID is set when you start a
     * new job with a <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline void SetAssetBundleExportJobId(const char* value) { m_assetBundleExportJobIdHasBeenSet = true; m_assetBundleExportJobId.assign(value); }

    /**
     * <p>The ID of the job that you want described. The job ID is set when you start a
     * new job with a <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline DescribeAssetBundleExportJobRequest& WithAssetBundleExportJobId(const Aws::String& value) { SetAssetBundleExportJobId(value); return *this;}

    /**
     * <p>The ID of the job that you want described. The job ID is set when you start a
     * new job with a <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline DescribeAssetBundleExportJobRequest& WithAssetBundleExportJobId(Aws::String&& value) { SetAssetBundleExportJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job that you want described. The job ID is set when you start a
     * new job with a <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline DescribeAssetBundleExportJobRequest& WithAssetBundleExportJobId(const char* value) { SetAssetBundleExportJobId(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_assetBundleExportJobId;
    bool m_assetBundleExportJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
