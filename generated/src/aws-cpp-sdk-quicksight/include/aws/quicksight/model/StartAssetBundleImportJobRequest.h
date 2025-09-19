/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AssetBundleImportSource.h>
#include <aws/quicksight/model/AssetBundleImportJobOverrideParameters.h>
#include <aws/quicksight/model/AssetBundleImportFailureAction.h>
#include <aws/quicksight/model/AssetBundleImportJobOverridePermissions.h>
#include <aws/quicksight/model/AssetBundleImportJobOverrideTags.h>
#include <aws/quicksight/model/AssetBundleImportJobOverrideValidationStrategy.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class StartAssetBundleImportJobRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API StartAssetBundleImportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAssetBundleImportJob"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account to import assets into. </p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    StartAssetBundleImportJobRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline const Aws::String& GetAssetBundleImportJobId() const { return m_assetBundleImportJobId; }
    inline bool AssetBundleImportJobIdHasBeenSet() const { return m_assetBundleImportJobIdHasBeenSet; }
    template<typename AssetBundleImportJobIdT = Aws::String>
    void SetAssetBundleImportJobId(AssetBundleImportJobIdT&& value) { m_assetBundleImportJobIdHasBeenSet = true; m_assetBundleImportJobId = std::forward<AssetBundleImportJobIdT>(value); }
    template<typename AssetBundleImportJobIdT = Aws::String>
    StartAssetBundleImportJobRequest& WithAssetBundleImportJobId(AssetBundleImportJobIdT&& value) { SetAssetBundleImportJobId(std::forward<AssetBundleImportJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the asset bundle zip file that contains the data that you want
     * to import. The file must be in <code>QUICKSIGHT_JSON</code> format. </p>
     */
    inline const AssetBundleImportSource& GetAssetBundleImportSource() const { return m_assetBundleImportSource; }
    inline bool AssetBundleImportSourceHasBeenSet() const { return m_assetBundleImportSourceHasBeenSet; }
    template<typename AssetBundleImportSourceT = AssetBundleImportSource>
    void SetAssetBundleImportSource(AssetBundleImportSourceT&& value) { m_assetBundleImportSourceHasBeenSet = true; m_assetBundleImportSource = std::forward<AssetBundleImportSourceT>(value); }
    template<typename AssetBundleImportSourceT = AssetBundleImportSource>
    StartAssetBundleImportJobRequest& WithAssetBundleImportSource(AssetBundleImportSourceT&& value) { SetAssetBundleImportSource(std::forward<AssetBundleImportSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline const AssetBundleImportJobOverrideParameters& GetOverrideParameters() const { return m_overrideParameters; }
    inline bool OverrideParametersHasBeenSet() const { return m_overrideParametersHasBeenSet; }
    template<typename OverrideParametersT = AssetBundleImportJobOverrideParameters>
    void SetOverrideParameters(OverrideParametersT&& value) { m_overrideParametersHasBeenSet = true; m_overrideParameters = std::forward<OverrideParametersT>(value); }
    template<typename OverrideParametersT = AssetBundleImportJobOverrideParameters>
    StartAssetBundleImportJobRequest& WithOverrideParameters(OverrideParametersT&& value) { SetOverrideParameters(std::forward<OverrideParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure action for the import job.</p> <p>If you choose
     * <code>ROLLBACK</code>, failed import jobs will attempt to undo any asset changes
     * caused by the failed job.</p> <p>If you choose <code>DO_NOTHING</code>, failed
     * import jobs will not attempt to roll back any asset changes caused by the failed
     * job, possibly keeping the QuickSight account in an inconsistent state.</p>
     */
    inline AssetBundleImportFailureAction GetFailureAction() const { return m_failureAction; }
    inline bool FailureActionHasBeenSet() const { return m_failureActionHasBeenSet; }
    inline void SetFailureAction(AssetBundleImportFailureAction value) { m_failureActionHasBeenSet = true; m_failureAction = value; }
    inline StartAssetBundleImportJobRequest& WithFailureAction(AssetBundleImportFailureAction value) { SetFailureAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional permission overrides that are applied to the resource configuration
     * before import.</p>
     */
    inline const AssetBundleImportJobOverridePermissions& GetOverridePermissions() const { return m_overridePermissions; }
    inline bool OverridePermissionsHasBeenSet() const { return m_overridePermissionsHasBeenSet; }
    template<typename OverridePermissionsT = AssetBundleImportJobOverridePermissions>
    void SetOverridePermissions(OverridePermissionsT&& value) { m_overridePermissionsHasBeenSet = true; m_overridePermissions = std::forward<OverridePermissionsT>(value); }
    template<typename OverridePermissionsT = AssetBundleImportJobOverridePermissions>
    StartAssetBundleImportJobRequest& WithOverridePermissions(OverridePermissionsT&& value) { SetOverridePermissions(std::forward<OverridePermissionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional tag overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline const AssetBundleImportJobOverrideTags& GetOverrideTags() const { return m_overrideTags; }
    inline bool OverrideTagsHasBeenSet() const { return m_overrideTagsHasBeenSet; }
    template<typename OverrideTagsT = AssetBundleImportJobOverrideTags>
    void SetOverrideTags(OverrideTagsT&& value) { m_overrideTagsHasBeenSet = true; m_overrideTags = std::forward<OverrideTagsT>(value); }
    template<typename OverrideTagsT = AssetBundleImportJobOverrideTags>
    StartAssetBundleImportJobRequest& WithOverrideTags(OverrideTagsT&& value) { SetOverrideTags(std::forward<OverrideTagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional validation strategy override for all analyses and dashboards that
     * is applied to the resource configuration before import. </p>
     */
    inline const AssetBundleImportJobOverrideValidationStrategy& GetOverrideValidationStrategy() const { return m_overrideValidationStrategy; }
    inline bool OverrideValidationStrategyHasBeenSet() const { return m_overrideValidationStrategyHasBeenSet; }
    template<typename OverrideValidationStrategyT = AssetBundleImportJobOverrideValidationStrategy>
    void SetOverrideValidationStrategy(OverrideValidationStrategyT&& value) { m_overrideValidationStrategyHasBeenSet = true; m_overrideValidationStrategy = std::forward<OverrideValidationStrategyT>(value); }
    template<typename OverrideValidationStrategyT = AssetBundleImportJobOverrideValidationStrategy>
    StartAssetBundleImportJobRequest& WithOverrideValidationStrategy(OverrideValidationStrategyT&& value) { SetOverrideValidationStrategy(std::forward<OverrideValidationStrategyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_assetBundleImportJobId;
    bool m_assetBundleImportJobIdHasBeenSet = false;

    AssetBundleImportSource m_assetBundleImportSource;
    bool m_assetBundleImportSourceHasBeenSet = false;

    AssetBundleImportJobOverrideParameters m_overrideParameters;
    bool m_overrideParametersHasBeenSet = false;

    AssetBundleImportFailureAction m_failureAction{AssetBundleImportFailureAction::NOT_SET};
    bool m_failureActionHasBeenSet = false;

    AssetBundleImportJobOverridePermissions m_overridePermissions;
    bool m_overridePermissionsHasBeenSet = false;

    AssetBundleImportJobOverrideTags m_overrideTags;
    bool m_overrideTagsHasBeenSet = false;

    AssetBundleImportJobOverrideValidationStrategy m_overrideValidationStrategy;
    bool m_overrideValidationStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
