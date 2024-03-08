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
    AWS_QUICKSIGHT_API DescribeAssetBundleExportJobResult();
    AWS_QUICKSIGHT_API DescribeAssetBundleExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeAssetBundleExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates the status of a job through its queuing and execution.</p> <p>Poll
     * this <code>DescribeAssetBundleExportApi</code> until <code>JobStatus</code> is
     * either <code>SUCCESSFUL</code> or <code>FAILED</code>.</p>
     */
    inline const AssetBundleExportJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>Indicates the status of a job through its queuing and execution.</p> <p>Poll
     * this <code>DescribeAssetBundleExportApi</code> until <code>JobStatus</code> is
     * either <code>SUCCESSFUL</code> or <code>FAILED</code>.</p>
     */
    inline void SetJobStatus(const AssetBundleExportJobStatus& value) { m_jobStatus = value; }

    /**
     * <p>Indicates the status of a job through its queuing and execution.</p> <p>Poll
     * this <code>DescribeAssetBundleExportApi</code> until <code>JobStatus</code> is
     * either <code>SUCCESSFUL</code> or <code>FAILED</code>.</p>
     */
    inline void SetJobStatus(AssetBundleExportJobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>Indicates the status of a job through its queuing and execution.</p> <p>Poll
     * this <code>DescribeAssetBundleExportApi</code> until <code>JobStatus</code> is
     * either <code>SUCCESSFUL</code> or <code>FAILED</code>.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithJobStatus(const AssetBundleExportJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>Indicates the status of a job through its queuing and execution.</p> <p>Poll
     * this <code>DescribeAssetBundleExportApi</code> until <code>JobStatus</code> is
     * either <code>SUCCESSFUL</code> or <code>FAILED</code>.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithJobStatus(AssetBundleExportJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


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
    inline const Aws::String& GetDownloadUrl() const{ return m_downloadUrl; }

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
    inline void SetDownloadUrl(const Aws::String& value) { m_downloadUrl = value; }

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
    inline void SetDownloadUrl(Aws::String&& value) { m_downloadUrl = std::move(value); }

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
    inline void SetDownloadUrl(const char* value) { m_downloadUrl.assign(value); }

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
    inline DescribeAssetBundleExportJobResult& WithDownloadUrl(const Aws::String& value) { SetDownloadUrl(value); return *this;}

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
    inline DescribeAssetBundleExportJobResult& WithDownloadUrl(Aws::String&& value) { SetDownloadUrl(std::move(value)); return *this;}

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
    inline DescribeAssetBundleExportJobResult& WithDownloadUrl(const char* value) { SetDownloadUrl(value); return *this;}


    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job runs.
     * The complete set of error records is available after the job has completed and
     * failed.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobError>& GetErrors() const{ return m_errors; }

    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job runs.
     * The complete set of error records is available after the job has completed and
     * failed.</p>
     */
    inline void SetErrors(const Aws::Vector<AssetBundleExportJobError>& value) { m_errors = value; }

    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job runs.
     * The complete set of error records is available after the job has completed and
     * failed.</p>
     */
    inline void SetErrors(Aws::Vector<AssetBundleExportJobError>&& value) { m_errors = std::move(value); }

    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job runs.
     * The complete set of error records is available after the job has completed and
     * failed.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithErrors(const Aws::Vector<AssetBundleExportJobError>& value) { SetErrors(value); return *this;}

    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job runs.
     * The complete set of error records is available after the job has completed and
     * failed.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithErrors(Aws::Vector<AssetBundleExportJobError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job runs.
     * The complete set of error records is available after the job has completed and
     * failed.</p>
     */
    inline DescribeAssetBundleExportJobResult& AddErrors(const AssetBundleExportJobError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>An array of error records that describes any failures that occurred during
     * the export job processing.</p> <p>Error records accumulate while the job runs.
     * The complete set of error records is available after the job has completed and
     * failed.</p>
     */
    inline DescribeAssetBundleExportJobResult& AddErrors(AssetBundleExportJobError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) for the export job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the export job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the export job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the export job.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the export job.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the export job.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the export job.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time that the export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time that the export job was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>The time that the export job was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>The time that the export job was created.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time that the export job was created.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline const Aws::String& GetAssetBundleExportJobId() const{ return m_assetBundleExportJobId; }

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline void SetAssetBundleExportJobId(const Aws::String& value) { m_assetBundleExportJobId = value; }

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline void SetAssetBundleExportJobId(Aws::String&& value) { m_assetBundleExportJobId = std::move(value); }

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline void SetAssetBundleExportJobId(const char* value) { m_assetBundleExportJobId.assign(value); }

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithAssetBundleExportJobId(const Aws::String& value) { SetAssetBundleExportJobId(value); return *this;}

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithAssetBundleExportJobId(Aws::String&& value) { SetAssetBundleExportJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartAssetBundleExportJob</code> API call.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithAssetBundleExportJobId(const char* value) { SetAssetBundleExportJobId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that the export job was executed
     * in. </p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that the export job was executed
     * in. </p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that the export job was executed
     * in. </p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that the export job was executed
     * in. </p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that the export job was executed
     * in. </p>
     */
    inline DescribeAssetBundleExportJobResult& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that the export job was executed
     * in. </p>
     */
    inline DescribeAssetBundleExportJobResult& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that the export job was executed
     * in. </p>
     */
    inline DescribeAssetBundleExportJobResult& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>A list of resource ARNs that exported with the job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>A list of resource ARNs that exported with the job.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArns = value; }

    /**
     * <p>A list of resource ARNs that exported with the job.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArns = std::move(value); }

    /**
     * <p>A list of resource ARNs that exported with the job.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>A list of resource ARNs that exported with the job.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>A list of resource ARNs that exported with the job.</p>
     */
    inline DescribeAssetBundleExportJobResult& AddResourceArns(const Aws::String& value) { m_resourceArns.push_back(value); return *this; }

    /**
     * <p>A list of resource ARNs that exported with the job.</p>
     */
    inline DescribeAssetBundleExportJobResult& AddResourceArns(Aws::String&& value) { m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of resource ARNs that exported with the job.</p>
     */
    inline DescribeAssetBundleExportJobResult& AddResourceArns(const char* value) { m_resourceArns.push_back(value); return *this; }


    /**
     * <p>The include dependencies flag.</p>
     */
    inline bool GetIncludeAllDependencies() const{ return m_includeAllDependencies; }

    /**
     * <p>The include dependencies flag.</p>
     */
    inline void SetIncludeAllDependencies(bool value) { m_includeAllDependencies = value; }

    /**
     * <p>The include dependencies flag.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithIncludeAllDependencies(bool value) { SetIncludeAllDependencies(value); return *this;}


    /**
     * <p>The format of the exported asset bundle. A <code>QUICKSIGHT_JSON</code>
     * formatted file can be used to make a <code>StartAssetBundleImportJob</code> API
     * call. A <code>CLOUDFORMATION_JSON</code> formatted file can be used in the
     * CloudFormation console and with the CloudFormation APIs.</p>
     */
    inline const AssetBundleExportFormat& GetExportFormat() const{ return m_exportFormat; }

    /**
     * <p>The format of the exported asset bundle. A <code>QUICKSIGHT_JSON</code>
     * formatted file can be used to make a <code>StartAssetBundleImportJob</code> API
     * call. A <code>CLOUDFORMATION_JSON</code> formatted file can be used in the
     * CloudFormation console and with the CloudFormation APIs.</p>
     */
    inline void SetExportFormat(const AssetBundleExportFormat& value) { m_exportFormat = value; }

    /**
     * <p>The format of the exported asset bundle. A <code>QUICKSIGHT_JSON</code>
     * formatted file can be used to make a <code>StartAssetBundleImportJob</code> API
     * call. A <code>CLOUDFORMATION_JSON</code> formatted file can be used in the
     * CloudFormation console and with the CloudFormation APIs.</p>
     */
    inline void SetExportFormat(AssetBundleExportFormat&& value) { m_exportFormat = std::move(value); }

    /**
     * <p>The format of the exported asset bundle. A <code>QUICKSIGHT_JSON</code>
     * formatted file can be used to make a <code>StartAssetBundleImportJob</code> API
     * call. A <code>CLOUDFORMATION_JSON</code> formatted file can be used in the
     * CloudFormation console and with the CloudFormation APIs.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithExportFormat(const AssetBundleExportFormat& value) { SetExportFormat(value); return *this;}

    /**
     * <p>The format of the exported asset bundle. A <code>QUICKSIGHT_JSON</code>
     * formatted file can be used to make a <code>StartAssetBundleImportJob</code> API
     * call. A <code>CLOUDFORMATION_JSON</code> formatted file can be used in the
     * CloudFormation console and with the CloudFormation APIs.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithExportFormat(AssetBundleExportFormat&& value) { SetExportFormat(std::move(value)); return *this;}


    /**
     * <p>The CloudFormation override property configuration for the export job.</p>
     */
    inline const AssetBundleCloudFormationOverridePropertyConfiguration& GetCloudFormationOverridePropertyConfiguration() const{ return m_cloudFormationOverridePropertyConfiguration; }

    /**
     * <p>The CloudFormation override property configuration for the export job.</p>
     */
    inline void SetCloudFormationOverridePropertyConfiguration(const AssetBundleCloudFormationOverridePropertyConfiguration& value) { m_cloudFormationOverridePropertyConfiguration = value; }

    /**
     * <p>The CloudFormation override property configuration for the export job.</p>
     */
    inline void SetCloudFormationOverridePropertyConfiguration(AssetBundleCloudFormationOverridePropertyConfiguration&& value) { m_cloudFormationOverridePropertyConfiguration = std::move(value); }

    /**
     * <p>The CloudFormation override property configuration for the export job.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithCloudFormationOverridePropertyConfiguration(const AssetBundleCloudFormationOverridePropertyConfiguration& value) { SetCloudFormationOverridePropertyConfiguration(value); return *this;}

    /**
     * <p>The CloudFormation override property configuration for the export job.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithCloudFormationOverridePropertyConfiguration(AssetBundleCloudFormationOverridePropertyConfiguration&& value) { SetCloudFormationOverridePropertyConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAssetBundleExportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAssetBundleExportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAssetBundleExportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


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
    inline DescribeAssetBundleExportJobResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The include permissions flag.</p>
     */
    inline bool GetIncludePermissions() const{ return m_includePermissions; }

    /**
     * <p>The include permissions flag.</p>
     */
    inline void SetIncludePermissions(bool value) { m_includePermissions = value; }

    /**
     * <p>The include permissions flag.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithIncludePermissions(bool value) { SetIncludePermissions(value); return *this;}


    /**
     * <p>The include tags flag.</p>
     */
    inline bool GetIncludeTags() const{ return m_includeTags; }

    /**
     * <p>The include tags flag.</p>
     */
    inline void SetIncludeTags(bool value) { m_includeTags = value; }

    /**
     * <p>The include tags flag.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithIncludeTags(bool value) { SetIncludeTags(value); return *this;}


    /**
     * <p>The validation strategy that is used to export the analysis or dashboard.</p>
     */
    inline const AssetBundleExportJobValidationStrategy& GetValidationStrategy() const{ return m_validationStrategy; }

    /**
     * <p>The validation strategy that is used to export the analysis or dashboard.</p>
     */
    inline void SetValidationStrategy(const AssetBundleExportJobValidationStrategy& value) { m_validationStrategy = value; }

    /**
     * <p>The validation strategy that is used to export the analysis or dashboard.</p>
     */
    inline void SetValidationStrategy(AssetBundleExportJobValidationStrategy&& value) { m_validationStrategy = std::move(value); }

    /**
     * <p>The validation strategy that is used to export the analysis or dashboard.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithValidationStrategy(const AssetBundleExportJobValidationStrategy& value) { SetValidationStrategy(value); return *this;}

    /**
     * <p>The validation strategy that is used to export the analysis or dashboard.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithValidationStrategy(AssetBundleExportJobValidationStrategy&& value) { SetValidationStrategy(std::move(value)); return *this;}


    /**
     * <p>An array of warning records that describe the analysis or dashboard that is
     * exported. This array includes UI errors that can be skipped during the
     * validation process.</p> <p>This property only appears if
     * <code>StrictModeForAllResources</code> in <code>ValidationStrategy</code> is set
     * to <code>FALSE</code>.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobWarning>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>An array of warning records that describe the analysis or dashboard that is
     * exported. This array includes UI errors that can be skipped during the
     * validation process.</p> <p>This property only appears if
     * <code>StrictModeForAllResources</code> in <code>ValidationStrategy</code> is set
     * to <code>FALSE</code>.</p>
     */
    inline void SetWarnings(const Aws::Vector<AssetBundleExportJobWarning>& value) { m_warnings = value; }

    /**
     * <p>An array of warning records that describe the analysis or dashboard that is
     * exported. This array includes UI errors that can be skipped during the
     * validation process.</p> <p>This property only appears if
     * <code>StrictModeForAllResources</code> in <code>ValidationStrategy</code> is set
     * to <code>FALSE</code>.</p>
     */
    inline void SetWarnings(Aws::Vector<AssetBundleExportJobWarning>&& value) { m_warnings = std::move(value); }

    /**
     * <p>An array of warning records that describe the analysis or dashboard that is
     * exported. This array includes UI errors that can be skipped during the
     * validation process.</p> <p>This property only appears if
     * <code>StrictModeForAllResources</code> in <code>ValidationStrategy</code> is set
     * to <code>FALSE</code>.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithWarnings(const Aws::Vector<AssetBundleExportJobWarning>& value) { SetWarnings(value); return *this;}

    /**
     * <p>An array of warning records that describe the analysis or dashboard that is
     * exported. This array includes UI errors that can be skipped during the
     * validation process.</p> <p>This property only appears if
     * <code>StrictModeForAllResources</code> in <code>ValidationStrategy</code> is set
     * to <code>FALSE</code>.</p>
     */
    inline DescribeAssetBundleExportJobResult& WithWarnings(Aws::Vector<AssetBundleExportJobWarning>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>An array of warning records that describe the analysis or dashboard that is
     * exported. This array includes UI errors that can be skipped during the
     * validation process.</p> <p>This property only appears if
     * <code>StrictModeForAllResources</code> in <code>ValidationStrategy</code> is set
     * to <code>FALSE</code>.</p>
     */
    inline DescribeAssetBundleExportJobResult& AddWarnings(const AssetBundleExportJobWarning& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>An array of warning records that describe the analysis or dashboard that is
     * exported. This array includes UI errors that can be skipped during the
     * validation process.</p> <p>This property only appears if
     * <code>StrictModeForAllResources</code> in <code>ValidationStrategy</code> is set
     * to <code>FALSE</code>.</p>
     */
    inline DescribeAssetBundleExportJobResult& AddWarnings(AssetBundleExportJobWarning&& value) { m_warnings.push_back(std::move(value)); return *this; }

  private:

    AssetBundleExportJobStatus m_jobStatus;

    Aws::String m_downloadUrl;

    Aws::Vector<AssetBundleExportJobError> m_errors;

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_assetBundleExportJobId;

    Aws::String m_awsAccountId;

    Aws::Vector<Aws::String> m_resourceArns;

    bool m_includeAllDependencies;

    AssetBundleExportFormat m_exportFormat;

    AssetBundleCloudFormationOverridePropertyConfiguration m_cloudFormationOverridePropertyConfiguration;

    Aws::String m_requestId;

    int m_status;

    bool m_includePermissions;

    bool m_includeTags;

    AssetBundleExportJobValidationStrategy m_validationStrategy;

    Aws::Vector<AssetBundleExportJobWarning> m_warnings;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
