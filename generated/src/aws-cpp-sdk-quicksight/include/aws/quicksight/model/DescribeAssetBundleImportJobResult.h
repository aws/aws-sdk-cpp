/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AssetBundleImportJobStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/AssetBundleImportSourceDescription.h>
#include <aws/quicksight/model/AssetBundleImportJobOverrideParameters.h>
#include <aws/quicksight/model/AssetBundleImportFailureAction.h>
#include <aws/quicksight/model/AssetBundleImportJobOverridePermissions.h>
#include <aws/quicksight/model/AssetBundleImportJobOverrideTags.h>
#include <aws/quicksight/model/AssetBundleImportJobOverrideValidationStrategy.h>
#include <aws/quicksight/model/AssetBundleImportJobError.h>
#include <aws/quicksight/model/AssetBundleImportJobWarning.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  class DescribeAssetBundleImportJobResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeAssetBundleImportJobResult() = default;
    AWS_QUICKSIGHT_API DescribeAssetBundleImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeAssetBundleImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates the status of a job through its queuing and execution.</p> <p>Poll
     * the <code>DescribeAssetBundleImport</code> API until <code>JobStatus</code>
     * returns one of the following values:</p> <ul> <li> <p> <code>SUCCESSFUL</code>
     * </p> </li> <li> <p> <code>FAILED</code> </p> </li> <li> <p>
     * <code>FAILED_ROLLBACK_COMPLETED</code> </p> </li> <li> <p>
     * <code>FAILED_ROLLBACK_ERROR</code> </p> </li> </ul>
     */
    inline AssetBundleImportJobStatus GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(AssetBundleImportJobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline DescribeAssetBundleImportJobResult& WithJobStatus(AssetBundleImportJobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job is
     * still running. The complete set of error records is available after the job has
     * completed and failed.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<AssetBundleImportJobError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<AssetBundleImportJobError>>
    DescribeAssetBundleImportJobResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = AssetBundleImportJobError>
    DescribeAssetBundleImportJobResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of error records that describes any failures that occurred while an
     * import job was attempting a rollback.</p> <p>Error records accumulate while the
     * job is still running. The complete set of error records is available after the
     * job has completed and failed.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobError>& GetRollbackErrors() const { return m_rollbackErrors; }
    template<typename RollbackErrorsT = Aws::Vector<AssetBundleImportJobError>>
    void SetRollbackErrors(RollbackErrorsT&& value) { m_rollbackErrorsHasBeenSet = true; m_rollbackErrors = std::forward<RollbackErrorsT>(value); }
    template<typename RollbackErrorsT = Aws::Vector<AssetBundleImportJobError>>
    DescribeAssetBundleImportJobResult& WithRollbackErrors(RollbackErrorsT&& value) { SetRollbackErrors(std::forward<RollbackErrorsT>(value)); return *this;}
    template<typename RollbackErrorsT = AssetBundleImportJobError>
    DescribeAssetBundleImportJobResult& AddRollbackErrors(RollbackErrorsT&& value) { m_rollbackErrorsHasBeenSet = true; m_rollbackErrors.emplace_back(std::forward<RollbackErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the import job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeAssetBundleImportJobResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DescribeAssetBundleImportJobResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline const Aws::String& GetAssetBundleImportJobId() const { return m_assetBundleImportJobId; }
    template<typename AssetBundleImportJobIdT = Aws::String>
    void SetAssetBundleImportJobId(AssetBundleImportJobIdT&& value) { m_assetBundleImportJobIdHasBeenSet = true; m_assetBundleImportJobId = std::forward<AssetBundleImportJobIdT>(value); }
    template<typename AssetBundleImportJobIdT = Aws::String>
    DescribeAssetBundleImportJobResult& WithAssetBundleImportJobId(AssetBundleImportJobIdT&& value) { SetAssetBundleImportJobId(std::forward<AssetBundleImportJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    DescribeAssetBundleImportJobResult& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the asset bundle zip file that contains the data that is
     * imported by the job.</p>
     */
    inline const AssetBundleImportSourceDescription& GetAssetBundleImportSource() const { return m_assetBundleImportSource; }
    template<typename AssetBundleImportSourceT = AssetBundleImportSourceDescription>
    void SetAssetBundleImportSource(AssetBundleImportSourceT&& value) { m_assetBundleImportSourceHasBeenSet = true; m_assetBundleImportSource = std::forward<AssetBundleImportSourceT>(value); }
    template<typename AssetBundleImportSourceT = AssetBundleImportSourceDescription>
    DescribeAssetBundleImportJobResult& WithAssetBundleImportSource(AssetBundleImportSourceT&& value) { SetAssetBundleImportSource(std::forward<AssetBundleImportSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline const AssetBundleImportJobOverrideParameters& GetOverrideParameters() const { return m_overrideParameters; }
    template<typename OverrideParametersT = AssetBundleImportJobOverrideParameters>
    void SetOverrideParameters(OverrideParametersT&& value) { m_overrideParametersHasBeenSet = true; m_overrideParameters = std::forward<OverrideParametersT>(value); }
    template<typename OverrideParametersT = AssetBundleImportJobOverrideParameters>
    DescribeAssetBundleImportJobResult& WithOverrideParameters(OverrideParametersT&& value) { SetOverrideParameters(std::forward<OverrideParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure action for the import job.</p>
     */
    inline AssetBundleImportFailureAction GetFailureAction() const { return m_failureAction; }
    inline void SetFailureAction(AssetBundleImportFailureAction value) { m_failureActionHasBeenSet = true; m_failureAction = value; }
    inline DescribeAssetBundleImportJobResult& WithFailureAction(AssetBundleImportFailureAction value) { SetFailureAction(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAssetBundleImportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the response.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeAssetBundleImportJobResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional permission overrides that are applied to the resource configuration
     * before import.</p>
     */
    inline const AssetBundleImportJobOverridePermissions& GetOverridePermissions() const { return m_overridePermissions; }
    template<typename OverridePermissionsT = AssetBundleImportJobOverridePermissions>
    void SetOverridePermissions(OverridePermissionsT&& value) { m_overridePermissionsHasBeenSet = true; m_overridePermissions = std::forward<OverridePermissionsT>(value); }
    template<typename OverridePermissionsT = AssetBundleImportJobOverridePermissions>
    DescribeAssetBundleImportJobResult& WithOverridePermissions(OverridePermissionsT&& value) { SetOverridePermissions(std::forward<OverridePermissionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional tag overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline const AssetBundleImportJobOverrideTags& GetOverrideTags() const { return m_overrideTags; }
    template<typename OverrideTagsT = AssetBundleImportJobOverrideTags>
    void SetOverrideTags(OverrideTagsT&& value) { m_overrideTagsHasBeenSet = true; m_overrideTags = std::forward<OverrideTagsT>(value); }
    template<typename OverrideTagsT = AssetBundleImportJobOverrideTags>
    DescribeAssetBundleImportJobResult& WithOverrideTags(OverrideTagsT&& value) { SetOverrideTags(std::forward<OverrideTagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional validation strategy override for all analyses and dashboards to
     * be applied to the resource configuration before import.</p>
     */
    inline const AssetBundleImportJobOverrideValidationStrategy& GetOverrideValidationStrategy() const { return m_overrideValidationStrategy; }
    template<typename OverrideValidationStrategyT = AssetBundleImportJobOverrideValidationStrategy>
    void SetOverrideValidationStrategy(OverrideValidationStrategyT&& value) { m_overrideValidationStrategyHasBeenSet = true; m_overrideValidationStrategy = std::forward<OverrideValidationStrategyT>(value); }
    template<typename OverrideValidationStrategyT = AssetBundleImportJobOverrideValidationStrategy>
    DescribeAssetBundleImportJobResult& WithOverrideValidationStrategy(OverrideValidationStrategyT&& value) { SetOverrideValidationStrategy(std::forward<OverrideValidationStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of warning records that describe all permitted errors that are
     * encountered during the import job.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobWarning>& GetWarnings() const { return m_warnings; }
    template<typename WarningsT = Aws::Vector<AssetBundleImportJobWarning>>
    void SetWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings = std::forward<WarningsT>(value); }
    template<typename WarningsT = Aws::Vector<AssetBundleImportJobWarning>>
    DescribeAssetBundleImportJobResult& WithWarnings(WarningsT&& value) { SetWarnings(std::forward<WarningsT>(value)); return *this;}
    template<typename WarningsT = AssetBundleImportJobWarning>
    DescribeAssetBundleImportJobResult& AddWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings.emplace_back(std::forward<WarningsT>(value)); return *this; }
    ///@}
  private:

    AssetBundleImportJobStatus m_jobStatus{AssetBundleImportJobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobError> m_rollbackErrors;
    bool m_rollbackErrorsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_assetBundleImportJobId;
    bool m_assetBundleImportJobIdHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    AssetBundleImportSourceDescription m_assetBundleImportSource;
    bool m_assetBundleImportSourceHasBeenSet = false;

    AssetBundleImportJobOverrideParameters m_overrideParameters;
    bool m_overrideParametersHasBeenSet = false;

    AssetBundleImportFailureAction m_failureAction{AssetBundleImportFailureAction::NOT_SET};
    bool m_failureActionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    AssetBundleImportJobOverridePermissions m_overridePermissions;
    bool m_overridePermissionsHasBeenSet = false;

    AssetBundleImportJobOverrideTags m_overrideTags;
    bool m_overrideTagsHasBeenSet = false;

    AssetBundleImportJobOverrideValidationStrategy m_overrideValidationStrategy;
    bool m_overrideValidationStrategyHasBeenSet = false;

    Aws::Vector<AssetBundleImportJobWarning> m_warnings;
    bool m_warningsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
