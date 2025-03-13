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
    AWS_QUICKSIGHT_API DescribeAssetBundleImportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAssetBundleImportJob"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    DescribeAssetBundleImportJobRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline const Aws::String& GetAssetBundleImportJobId() const { return m_assetBundleImportJobId; }
    inline bool AssetBundleImportJobIdHasBeenSet() const { return m_assetBundleImportJobIdHasBeenSet; }
    template<typename AssetBundleImportJobIdT = Aws::String>
    void SetAssetBundleImportJobId(AssetBundleImportJobIdT&& value) { m_assetBundleImportJobIdHasBeenSet = true; m_assetBundleImportJobId = std::forward<AssetBundleImportJobIdT>(value); }
    template<typename AssetBundleImportJobIdT = Aws::String>
    DescribeAssetBundleImportJobRequest& WithAssetBundleImportJobId(AssetBundleImportJobIdT&& value) { SetAssetBundleImportJobId(std::forward<AssetBundleImportJobIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_assetBundleImportJobId;
    bool m_assetBundleImportJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
