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
  class DescribeAssetBundleImportJobRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DescribeAssetBundleImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAssetBundleImportJob"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline DescribeAssetBundleImportJobRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline DescribeAssetBundleImportJobRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline DescribeAssetBundleImportJobRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline const Aws::String& GetAssetBundleImportJobId() const{ return m_assetBundleImportJobId; }

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline bool AssetBundleImportJobIdHasBeenSet() const { return m_assetBundleImportJobIdHasBeenSet; }

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline void SetAssetBundleImportJobId(const Aws::String& value) { m_assetBundleImportJobIdHasBeenSet = true; m_assetBundleImportJobId = value; }

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline void SetAssetBundleImportJobId(Aws::String&& value) { m_assetBundleImportJobIdHasBeenSet = true; m_assetBundleImportJobId = std::move(value); }

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline void SetAssetBundleImportJobId(const char* value) { m_assetBundleImportJobIdHasBeenSet = true; m_assetBundleImportJobId.assign(value); }

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline DescribeAssetBundleImportJobRequest& WithAssetBundleImportJobId(const Aws::String& value) { SetAssetBundleImportJobId(value); return *this;}

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline DescribeAssetBundleImportJobRequest& WithAssetBundleImportJobId(Aws::String&& value) { SetAssetBundleImportJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline DescribeAssetBundleImportJobRequest& WithAssetBundleImportJobId(const char* value) { SetAssetBundleImportJobId(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_assetBundleImportJobId;
    bool m_assetBundleImportJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
