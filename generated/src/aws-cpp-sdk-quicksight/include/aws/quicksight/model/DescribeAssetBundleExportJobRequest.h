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
    AWS_QUICKSIGHT_API DescribeAssetBundleExportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAssetBundleExportJob"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account the export job is executed in. </p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    DescribeAssetBundleExportJobRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job that you want described. The job ID is set when you start a
     * new job with a <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline const Aws::String& GetAssetBundleExportJobId() const { return m_assetBundleExportJobId; }
    inline bool AssetBundleExportJobIdHasBeenSet() const { return m_assetBundleExportJobIdHasBeenSet; }
    template<typename AssetBundleExportJobIdT = Aws::String>
    void SetAssetBundleExportJobId(AssetBundleExportJobIdT&& value) { m_assetBundleExportJobIdHasBeenSet = true; m_assetBundleExportJobId = std::forward<AssetBundleExportJobIdT>(value); }
    template<typename AssetBundleExportJobIdT = Aws::String>
    DescribeAssetBundleExportJobRequest& WithAssetBundleExportJobId(AssetBundleExportJobIdT&& value) { SetAssetBundleExportJobId(std::forward<AssetBundleExportJobIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_assetBundleExportJobId;
    bool m_assetBundleExportJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
