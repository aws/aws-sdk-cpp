/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AssetBundleExportJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/AssetBundleExportFormat.h>
#include <aws/quicksight/model/AssetBundleCloudFormationOverridePropertyConfiguration.h>
#include <aws/quicksight/model/AssetBundleExportJobValidationStrategy.h>
#include <aws/quicksight/model/IncludeFolderMembers.h>
#include <aws/quicksight/model/AssetBundleExportJobError.h>
#include <aws/quicksight/model/AssetBundleExportJobWarning.h>
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
  class DescribeAssetBundleExportJobResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeAssetBundleExportJobResult() = default;
    AWS_QUICKSIGHT_API DescribeAssetBundleExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeAssetBundleExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates the status of a job through its queuing and execution.</p> <p>Poll
     * this <code>DescribeAssetBundleExportApi</code> until <code>JobStatus</code> is
     * either <code>SUCCESSFUL</code> or <code>FAILED</code>.</p>
     */
    inline AssetBundleExportJobStatus GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(AssetBundleExportJobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline DescribeAssetBundleExportJobResult& WithJobStatus(AssetBundleExportJobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to download the exported asset bundle data from.</p> <p>This URL is
     * available only after the job has succeeded. This URL is valid for 5 minutes
     * after issuance. Call <code>DescribeAssetBundleExportJob</code> again for a fresh
     * URL if needed.</p> <p>The downloaded asset bundle is a zip file named
     * <code>assetbundle-{jobId}.qs</code>. The file has a <code>.qs</code>
     * extension.</p> <p>This URL can't be used in a
     * <code>StartAssetBundleImportJob</code> API call and should only be used for
     * download purposes.</p>
     */
    inline const Aws::String& GetDownloadUrl() const { return m_downloadUrl; }
    template<typename DownloadUrlT = Aws::String>
    void SetDownloadUrl(DownloadUrlT&& value) { m_downloadUrlHasBeenSet = true; m_downloadUrl = std::forward<DownloadUrlT>(value); }
    template<typename DownloadUrlT = Aws::String>
    DescribeAssetBundleExportJobResult& WithDownloadUrl(DownloadUrlT&& value) { SetDownloadUrl(std::forward<DownloadUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job runs.
     * The complete set of error records is available after the job has completed and
     * failed.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<AssetBundleExportJobError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<AssetBundleExportJobError>>
    DescribeAssetBundleExportJobResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = AssetBundleExportJobError>
    DescribeAssetBundleExportJobResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the export job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeAssetBundleExportJobResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DescribeAssetBundleExportJobResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline const Aws::String& GetAssetBundleExportJobId() const { return m_assetBundleExportJobId; }
    template<typename AssetBundleExportJobIdT = Aws::String>
    void SetAssetBundleExportJobId(AssetBundleExportJobIdT&& value) { m_assetBundleExportJobIdHasBeenSet = true; m_assetBundleExportJobId = std::forward<AssetBundleExportJobIdT>(value); }
    template<typename AssetBundleExportJobIdT = Aws::String>
    DescribeAssetBundleExportJobResult& WithAssetBundleExportJobId(AssetBundleExportJobIdT&& value) { SetAssetBundleExportJobId(std::forward<AssetBundleExportJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that the export job was executed
     * in. </p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    DescribeAssetBundleExportJobResult& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of resource ARNs that exported with the job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const { return m_resourceArns; }
    template<typename ResourceArnsT = Aws::Vector<Aws::String>>
    void SetResourceArns(ResourceArnsT&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::forward<ResourceArnsT>(value); }
    template<typename ResourceArnsT = Aws::Vector<Aws::String>>
    DescribeAssetBundleExportJobResult& WithResourceArns(ResourceArnsT&& value) { SetResourceArns(std::forward<ResourceArnsT>(value)); return *this;}
    template<typename ResourceArnsT = Aws::String>
    DescribeAssetBundleExportJobResult& AddResourceArns(ResourceArnsT&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.emplace_back(std::forward<ResourceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The include dependencies flag.</p>
     */
    inline bool GetIncludeAllDependencies() const { return m_includeAllDependencies; }
    inline void SetIncludeAllDependencies(bool value) { m_includeAllDependenciesHasBeenSet = true; m_includeAllDependencies = value; }
    inline DescribeAssetBundleExportJobResult& WithIncludeAllDependencies(bool value) { SetIncludeAllDependencies(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the exported asset bundle. A <code>QUICKSIGHT_JSON</code>
     * formatted file can be used to make a <code>StartAssetBundleImportJob</code> API
     * call. A <code>CLOUDFORMATION_JSON</code> formatted file can be used in the
     * CloudFormation console and with the CloudFormation APIs.</p>
     */
    inline AssetBundleExportFormat GetExportFormat() const { return m_exportFormat; }
    inline void SetExportFormat(AssetBundleExportFormat value) { m_exportFormatHasBeenSet = true; m_exportFormat = value; }
    inline DescribeAssetBundleExportJobResult& WithExportFormat(AssetBundleExportFormat value) { SetExportFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudFormation override property configuration for the export job.</p>
     */
    inline const AssetBundleCloudFormationOverridePropertyConfiguration& GetCloudFormationOverridePropertyConfiguration() const { return m_cloudFormationOverridePropertyConfiguration; }
    template<typename CloudFormationOverridePropertyConfigurationT = AssetBundleCloudFormationOverridePropertyConfiguration>
    void SetCloudFormationOverridePropertyConfiguration(CloudFormationOverridePropertyConfigurationT&& value) { m_cloudFormationOverridePropertyConfigurationHasBeenSet = true; m_cloudFormationOverridePropertyConfiguration = std::forward<CloudFormationOverridePropertyConfigurationT>(value); }
    template<typename CloudFormationOverridePropertyConfigurationT = AssetBundleCloudFormationOverridePropertyConfiguration>
    DescribeAssetBundleExportJobResult& WithCloudFormationOverridePropertyConfiguration(CloudFormationOverridePropertyConfigurationT&& value) { SetCloudFormationOverridePropertyConfiguration(std::forward<CloudFormationOverridePropertyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAssetBundleExportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the response.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeAssetBundleExportJobResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The include permissions flag.</p>
     */
    inline bool GetIncludePermissions() const { return m_includePermissions; }
    inline void SetIncludePermissions(bool value) { m_includePermissionsHasBeenSet = true; m_includePermissions = value; }
    inline DescribeAssetBundleExportJobResult& WithIncludePermissions(bool value) { SetIncludePermissions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The include tags flag.</p>
     */
    inline bool GetIncludeTags() const { return m_includeTags; }
    inline void SetIncludeTags(bool value) { m_includeTagsHasBeenSet = true; m_includeTags = value; }
    inline DescribeAssetBundleExportJobResult& WithIncludeTags(bool value) { SetIncludeTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation strategy that is used to export the analysis or dashboard.</p>
     */
    inline const AssetBundleExportJobValidationStrategy& GetValidationStrategy() const { return m_validationStrategy; }
    template<typename ValidationStrategyT = AssetBundleExportJobValidationStrategy>
    void SetValidationStrategy(ValidationStrategyT&& value) { m_validationStrategyHasBeenSet = true; m_validationStrategy = std::forward<ValidationStrategyT>(value); }
    template<typename ValidationStrategyT = AssetBundleExportJobValidationStrategy>
    DescribeAssetBundleExportJobResult& WithValidationStrategy(ValidationStrategyT&& value) { SetValidationStrategy(std::forward<ValidationStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of warning records that describe the analysis or dashboard that is
     * exported. This array includes UI errors that can be skipped during the
     * validation process.</p> <p>This property only appears if
     * <code>StrictModeForAllResources</code> in <code>ValidationStrategy</code> is set
     * to <code>FALSE</code>.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobWarning>& GetWarnings() const { return m_warnings; }
    template<typename WarningsT = Aws::Vector<AssetBundleExportJobWarning>>
    void SetWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings = std::forward<WarningsT>(value); }
    template<typename WarningsT = Aws::Vector<AssetBundleExportJobWarning>>
    DescribeAssetBundleExportJobResult& WithWarnings(WarningsT&& value) { SetWarnings(std::forward<WarningsT>(value)); return *this;}
    template<typename WarningsT = AssetBundleExportJobWarning>
    DescribeAssetBundleExportJobResult& AddWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings.emplace_back(std::forward<WarningsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The include folder memberships flag.</p>
     */
    inline bool GetIncludeFolderMemberships() const { return m_includeFolderMemberships; }
    inline void SetIncludeFolderMemberships(bool value) { m_includeFolderMembershipsHasBeenSet = true; m_includeFolderMemberships = value; }
    inline DescribeAssetBundleExportJobResult& WithIncludeFolderMemberships(bool value) { SetIncludeFolderMemberships(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A setting that determines whether folder members are included.</p>
     */
    inline IncludeFolderMembers GetIncludeFolderMembers() const { return m_includeFolderMembers; }
    inline void SetIncludeFolderMembers(IncludeFolderMembers value) { m_includeFolderMembersHasBeenSet = true; m_includeFolderMembers = value; }
    inline DescribeAssetBundleExportJobResult& WithIncludeFolderMembers(IncludeFolderMembers value) { SetIncludeFolderMembers(value); return *this;}
    ///@}
  private:

    AssetBundleExportJobStatus m_jobStatus{AssetBundleExportJobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_downloadUrl;
    bool m_downloadUrlHasBeenSet = false;

    Aws::Vector<AssetBundleExportJobError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_assetBundleExportJobId;
    bool m_assetBundleExportJobIdHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    bool m_includeAllDependencies{false};
    bool m_includeAllDependenciesHasBeenSet = false;

    AssetBundleExportFormat m_exportFormat{AssetBundleExportFormat::NOT_SET};
    bool m_exportFormatHasBeenSet = false;

    AssetBundleCloudFormationOverridePropertyConfiguration m_cloudFormationOverridePropertyConfiguration;
    bool m_cloudFormationOverridePropertyConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    bool m_includePermissions{false};
    bool m_includePermissionsHasBeenSet = false;

    bool m_includeTags{false};
    bool m_includeTagsHasBeenSet = false;

    AssetBundleExportJobValidationStrategy m_validationStrategy;
    bool m_validationStrategyHasBeenSet = false;

    Aws::Vector<AssetBundleExportJobWarning> m_warnings;
    bool m_warningsHasBeenSet = false;

    bool m_includeFolderMemberships{false};
    bool m_includeFolderMembershipsHasBeenSet = false;

    IncludeFolderMembers m_includeFolderMembers{IncludeFolderMembers::NOT_SET};
    bool m_includeFolderMembersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
