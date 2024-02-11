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
    AWS_QUICKSIGHT_API DescribeAssetBundleImportJobResult();
    AWS_QUICKSIGHT_API DescribeAssetBundleImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeAssetBundleImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates the status of a job through its queuing and execution.</p> <p>Poll
     * the <code>DescribeAssetBundleImport</code> API until <code>JobStatus</code>
     * returns one of the following values:</p> <ul> <li> <p> <code>SUCCESSFUL</code>
     * </p> </li> <li> <p> <code>FAILED</code> </p> </li> <li> <p>
     * <code>FAILED_ROLLBACK_COMPLETED</code> </p> </li> <li> <p>
     * <code>FAILED_ROLLBACK_ERROR</code> </p> </li> </ul>
     */
    inline const AssetBundleImportJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>Indicates the status of a job through its queuing and execution.</p> <p>Poll
     * the <code>DescribeAssetBundleImport</code> API until <code>JobStatus</code>
     * returns one of the following values:</p> <ul> <li> <p> <code>SUCCESSFUL</code>
     * </p> </li> <li> <p> <code>FAILED</code> </p> </li> <li> <p>
     * <code>FAILED_ROLLBACK_COMPLETED</code> </p> </li> <li> <p>
     * <code>FAILED_ROLLBACK_ERROR</code> </p> </li> </ul>
     */
    inline void SetJobStatus(const AssetBundleImportJobStatus& value) { m_jobStatus = value; }

    /**
     * <p>Indicates the status of a job through its queuing and execution.</p> <p>Poll
     * the <code>DescribeAssetBundleImport</code> API until <code>JobStatus</code>
     * returns one of the following values:</p> <ul> <li> <p> <code>SUCCESSFUL</code>
     * </p> </li> <li> <p> <code>FAILED</code> </p> </li> <li> <p>
     * <code>FAILED_ROLLBACK_COMPLETED</code> </p> </li> <li> <p>
     * <code>FAILED_ROLLBACK_ERROR</code> </p> </li> </ul>
     */
    inline void SetJobStatus(AssetBundleImportJobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>Indicates the status of a job through its queuing and execution.</p> <p>Poll
     * the <code>DescribeAssetBundleImport</code> API until <code>JobStatus</code>
     * returns one of the following values:</p> <ul> <li> <p> <code>SUCCESSFUL</code>
     * </p> </li> <li> <p> <code>FAILED</code> </p> </li> <li> <p>
     * <code>FAILED_ROLLBACK_COMPLETED</code> </p> </li> <li> <p>
     * <code>FAILED_ROLLBACK_ERROR</code> </p> </li> </ul>
     */
    inline DescribeAssetBundleImportJobResult& WithJobStatus(const AssetBundleImportJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>Indicates the status of a job through its queuing and execution.</p> <p>Poll
     * the <code>DescribeAssetBundleImport</code> API until <code>JobStatus</code>
     * returns one of the following values:</p> <ul> <li> <p> <code>SUCCESSFUL</code>
     * </p> </li> <li> <p> <code>FAILED</code> </p> </li> <li> <p>
     * <code>FAILED_ROLLBACK_COMPLETED</code> </p> </li> <li> <p>
     * <code>FAILED_ROLLBACK_ERROR</code> </p> </li> </ul>
     */
    inline DescribeAssetBundleImportJobResult& WithJobStatus(AssetBundleImportJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job is
     * still running. The complete set of error records is available after the job has
     * completed and failed.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobError>& GetErrors() const{ return m_errors; }

    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job is
     * still running. The complete set of error records is available after the job has
     * completed and failed.</p>
     */
    inline void SetErrors(const Aws::Vector<AssetBundleImportJobError>& value) { m_errors = value; }

    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job is
     * still running. The complete set of error records is available after the job has
     * completed and failed.</p>
     */
    inline void SetErrors(Aws::Vector<AssetBundleImportJobError>&& value) { m_errors = std::move(value); }

    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job is
     * still running. The complete set of error records is available after the job has
     * completed and failed.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithErrors(const Aws::Vector<AssetBundleImportJobError>& value) { SetErrors(value); return *this;}

    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job is
     * still running. The complete set of error records is available after the job has
     * completed and failed.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithErrors(Aws::Vector<AssetBundleImportJobError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job is
     * still running. The complete set of error records is available after the job has
     * completed and failed.</p>
     */
    inline DescribeAssetBundleImportJobResult& AddErrors(const AssetBundleImportJobError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job is
     * still running. The complete set of error records is available after the job has
     * completed and failed.</p>
     */
    inline DescribeAssetBundleImportJobResult& AddErrors(AssetBundleImportJobError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of error records that describes any failures that occurred while an
     * import job was attempting a rollback.</p> <p>Error records accumulate while the
     * job is still running. The complete set of error records is available after the
     * job has completed and failed.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobError>& GetRollbackErrors() const{ return m_rollbackErrors; }

    /**
     * <p>An array of error records that describes any failures that occurred while an
     * import job was attempting a rollback.</p> <p>Error records accumulate while the
     * job is still running. The complete set of error records is available after the
     * job has completed and failed.</p>
     */
    inline void SetRollbackErrors(const Aws::Vector<AssetBundleImportJobError>& value) { m_rollbackErrors = value; }

    /**
     * <p>An array of error records that describes any failures that occurred while an
     * import job was attempting a rollback.</p> <p>Error records accumulate while the
     * job is still running. The complete set of error records is available after the
     * job has completed and failed.</p>
     */
    inline void SetRollbackErrors(Aws::Vector<AssetBundleImportJobError>&& value) { m_rollbackErrors = std::move(value); }

    /**
     * <p>An array of error records that describes any failures that occurred while an
     * import job was attempting a rollback.</p> <p>Error records accumulate while the
     * job is still running. The complete set of error records is available after the
     * job has completed and failed.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithRollbackErrors(const Aws::Vector<AssetBundleImportJobError>& value) { SetRollbackErrors(value); return *this;}

    /**
     * <p>An array of error records that describes any failures that occurred while an
     * import job was attempting a rollback.</p> <p>Error records accumulate while the
     * job is still running. The complete set of error records is available after the
     * job has completed and failed.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithRollbackErrors(Aws::Vector<AssetBundleImportJobError>&& value) { SetRollbackErrors(std::move(value)); return *this;}

    /**
     * <p>An array of error records that describes any failures that occurred while an
     * import job was attempting a rollback.</p> <p>Error records accumulate while the
     * job is still running. The complete set of error records is available after the
     * job has completed and failed.</p>
     */
    inline DescribeAssetBundleImportJobResult& AddRollbackErrors(const AssetBundleImportJobError& value) { m_rollbackErrors.push_back(value); return *this; }

    /**
     * <p>An array of error records that describes any failures that occurred while an
     * import job was attempting a rollback.</p> <p>Error records accumulate while the
     * job is still running. The complete set of error records is available after the
     * job has completed and failed.</p>
     */
    inline DescribeAssetBundleImportJobResult& AddRollbackErrors(AssetBundleImportJobError&& value) { m_rollbackErrors.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) for the import job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the import job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the import job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the import job.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the import job.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the import job.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the import job.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time that the import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time that the import job was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>The time that the import job was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>The time that the import job was created.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time that the import job was created.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline const Aws::String& GetAssetBundleImportJobId() const{ return m_assetBundleImportJobId; }

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline void SetAssetBundleImportJobId(const Aws::String& value) { m_assetBundleImportJobId = value; }

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline void SetAssetBundleImportJobId(Aws::String&& value) { m_assetBundleImportJobId = std::move(value); }

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline void SetAssetBundleImportJobId(const char* value) { m_assetBundleImportJobId.assign(value); }

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithAssetBundleImportJobId(const Aws::String& value) { SetAssetBundleImportJobId(value); return *this;}

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithAssetBundleImportJobId(Aws::String&& value) { SetAssetBundleImportJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleImportJob</code> API call.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithAssetBundleImportJobId(const char* value) { SetAssetBundleImportJobId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline DescribeAssetBundleImportJobResult& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline DescribeAssetBundleImportJobResult& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account the import job was executed in.
     * </p>
     */
    inline DescribeAssetBundleImportJobResult& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The source of the asset bundle zip file that contains the data that is
     * imported by the job.</p>
     */
    inline const AssetBundleImportSourceDescription& GetAssetBundleImportSource() const{ return m_assetBundleImportSource; }

    /**
     * <p>The source of the asset bundle zip file that contains the data that is
     * imported by the job.</p>
     */
    inline void SetAssetBundleImportSource(const AssetBundleImportSourceDescription& value) { m_assetBundleImportSource = value; }

    /**
     * <p>The source of the asset bundle zip file that contains the data that is
     * imported by the job.</p>
     */
    inline void SetAssetBundleImportSource(AssetBundleImportSourceDescription&& value) { m_assetBundleImportSource = std::move(value); }

    /**
     * <p>The source of the asset bundle zip file that contains the data that is
     * imported by the job.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithAssetBundleImportSource(const AssetBundleImportSourceDescription& value) { SetAssetBundleImportSource(value); return *this;}

    /**
     * <p>The source of the asset bundle zip file that contains the data that is
     * imported by the job.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithAssetBundleImportSource(AssetBundleImportSourceDescription&& value) { SetAssetBundleImportSource(std::move(value)); return *this;}


    /**
     * <p>Optional overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline const AssetBundleImportJobOverrideParameters& GetOverrideParameters() const{ return m_overrideParameters; }

    /**
     * <p>Optional overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline void SetOverrideParameters(const AssetBundleImportJobOverrideParameters& value) { m_overrideParameters = value; }

    /**
     * <p>Optional overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline void SetOverrideParameters(AssetBundleImportJobOverrideParameters&& value) { m_overrideParameters = std::move(value); }

    /**
     * <p>Optional overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithOverrideParameters(const AssetBundleImportJobOverrideParameters& value) { SetOverrideParameters(value); return *this;}

    /**
     * <p>Optional overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithOverrideParameters(AssetBundleImportJobOverrideParameters&& value) { SetOverrideParameters(std::move(value)); return *this;}


    /**
     * <p>The failure action for the import job.</p>
     */
    inline const AssetBundleImportFailureAction& GetFailureAction() const{ return m_failureAction; }

    /**
     * <p>The failure action for the import job.</p>
     */
    inline void SetFailureAction(const AssetBundleImportFailureAction& value) { m_failureAction = value; }

    /**
     * <p>The failure action for the import job.</p>
     */
    inline void SetFailureAction(AssetBundleImportFailureAction&& value) { m_failureAction = std::move(value); }

    /**
     * <p>The failure action for the import job.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithFailureAction(const AssetBundleImportFailureAction& value) { SetFailureAction(value); return *this;}

    /**
     * <p>The failure action for the import job.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithFailureAction(AssetBundleImportFailureAction&& value) { SetFailureAction(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAssetBundleImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAssetBundleImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAssetBundleImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the response.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the response.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the response.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>Optional permission overrides that are applied to the resource configuration
     * before import.</p>
     */
    inline const AssetBundleImportJobOverridePermissions& GetOverridePermissions() const{ return m_overridePermissions; }

    /**
     * <p>Optional permission overrides that are applied to the resource configuration
     * before import.</p>
     */
    inline void SetOverridePermissions(const AssetBundleImportJobOverridePermissions& value) { m_overridePermissions = value; }

    /**
     * <p>Optional permission overrides that are applied to the resource configuration
     * before import.</p>
     */
    inline void SetOverridePermissions(AssetBundleImportJobOverridePermissions&& value) { m_overridePermissions = std::move(value); }

    /**
     * <p>Optional permission overrides that are applied to the resource configuration
     * before import.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithOverridePermissions(const AssetBundleImportJobOverridePermissions& value) { SetOverridePermissions(value); return *this;}

    /**
     * <p>Optional permission overrides that are applied to the resource configuration
     * before import.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithOverridePermissions(AssetBundleImportJobOverridePermissions&& value) { SetOverridePermissions(std::move(value)); return *this;}


    /**
     * <p>Optional tag overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline const AssetBundleImportJobOverrideTags& GetOverrideTags() const{ return m_overrideTags; }

    /**
     * <p>Optional tag overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline void SetOverrideTags(const AssetBundleImportJobOverrideTags& value) { m_overrideTags = value; }

    /**
     * <p>Optional tag overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline void SetOverrideTags(AssetBundleImportJobOverrideTags&& value) { m_overrideTags = std::move(value); }

    /**
     * <p>Optional tag overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithOverrideTags(const AssetBundleImportJobOverrideTags& value) { SetOverrideTags(value); return *this;}

    /**
     * <p>Optional tag overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithOverrideTags(AssetBundleImportJobOverrideTags&& value) { SetOverrideTags(std::move(value)); return *this;}


    /**
     * <p>An optional validation strategy override for all analyses and dashboards to
     * be applied to the resource configuration before import.</p>
     */
    inline const AssetBundleImportJobOverrideValidationStrategy& GetOverrideValidationStrategy() const{ return m_overrideValidationStrategy; }

    /**
     * <p>An optional validation strategy override for all analyses and dashboards to
     * be applied to the resource configuration before import.</p>
     */
    inline void SetOverrideValidationStrategy(const AssetBundleImportJobOverrideValidationStrategy& value) { m_overrideValidationStrategy = value; }

    /**
     * <p>An optional validation strategy override for all analyses and dashboards to
     * be applied to the resource configuration before import.</p>
     */
    inline void SetOverrideValidationStrategy(AssetBundleImportJobOverrideValidationStrategy&& value) { m_overrideValidationStrategy = std::move(value); }

    /**
     * <p>An optional validation strategy override for all analyses and dashboards to
     * be applied to the resource configuration before import.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithOverrideValidationStrategy(const AssetBundleImportJobOverrideValidationStrategy& value) { SetOverrideValidationStrategy(value); return *this;}

    /**
     * <p>An optional validation strategy override for all analyses and dashboards to
     * be applied to the resource configuration before import.</p>
     */
    inline DescribeAssetBundleImportJobResult& WithOverrideValidationStrategy(AssetBundleImportJobOverrideValidationStrategy&& value) { SetOverrideValidationStrategy(std::move(value)); return *this;}

  private:

    AssetBundleImportJobStatus m_jobStatus;

    Aws::Vector<AssetBundleImportJobError> m_errors;

    Aws::Vector<AssetBundleImportJobError> m_rollbackErrors;

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_assetBundleImportJobId;

    Aws::String m_awsAccountId;

    AssetBundleImportSourceDescription m_assetBundleImportSource;

    AssetBundleImportJobOverrideParameters m_overrideParameters;

    AssetBundleImportFailureAction m_failureAction;

    Aws::String m_requestId;

    int m_status;

    AssetBundleImportJobOverridePermissions m_overridePermissions;

    AssetBundleImportJobOverrideTags m_overrideTags;

    AssetBundleImportJobOverrideValidationStrategy m_overrideValidationStrategy;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
