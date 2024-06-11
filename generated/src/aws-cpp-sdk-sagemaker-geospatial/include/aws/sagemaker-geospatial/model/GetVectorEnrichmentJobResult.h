/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobErrorDetails.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobExportErrorDetails.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobExportStatus.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobInputConfig.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobConfig.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobType.h>
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
namespace SageMakerGeospatial
{
namespace Model
{
  class GetVectorEnrichmentJobResult
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API GetVectorEnrichmentJobResult();
    AWS_SAGEMAKERGEOSPATIAL_API GetVectorEnrichmentJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API GetVectorEnrichmentJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetVectorEnrichmentJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetVectorEnrichmentJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetVectorEnrichmentJobResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetVectorEnrichmentJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetVectorEnrichmentJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the Vector Enrichment job, in seconds.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }
    inline void SetDurationInSeconds(int value) { m_durationInSeconds = value; }
    inline GetVectorEnrichmentJobResult& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the errors generated during the Vector Enrichment job.</p>
     */
    inline const VectorEnrichmentJobErrorDetails& GetErrorDetails() const{ return m_errorDetails; }
    inline void SetErrorDetails(const VectorEnrichmentJobErrorDetails& value) { m_errorDetails = value; }
    inline void SetErrorDetails(VectorEnrichmentJobErrorDetails&& value) { m_errorDetails = std::move(value); }
    inline GetVectorEnrichmentJobResult& WithErrorDetails(const VectorEnrichmentJobErrorDetails& value) { SetErrorDetails(value); return *this;}
    inline GetVectorEnrichmentJobResult& WithErrorDetails(VectorEnrichmentJobErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArn.assign(value); }
    inline GetVectorEnrichmentJobResult& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline GetVectorEnrichmentJobResult& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline GetVectorEnrichmentJobResult& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the errors generated during the ExportVectorEnrichmentJob.</p>
     */
    inline const VectorEnrichmentJobExportErrorDetails& GetExportErrorDetails() const{ return m_exportErrorDetails; }
    inline void SetExportErrorDetails(const VectorEnrichmentJobExportErrorDetails& value) { m_exportErrorDetails = value; }
    inline void SetExportErrorDetails(VectorEnrichmentJobExportErrorDetails&& value) { m_exportErrorDetails = std::move(value); }
    inline GetVectorEnrichmentJobResult& WithExportErrorDetails(const VectorEnrichmentJobExportErrorDetails& value) { SetExportErrorDetails(value); return *this;}
    inline GetVectorEnrichmentJobResult& WithExportErrorDetails(VectorEnrichmentJobExportErrorDetails&& value) { SetExportErrorDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The export status of the Vector Enrichment job being initiated.</p>
     */
    inline const VectorEnrichmentJobExportStatus& GetExportStatus() const{ return m_exportStatus; }
    inline void SetExportStatus(const VectorEnrichmentJobExportStatus& value) { m_exportStatus = value; }
    inline void SetExportStatus(VectorEnrichmentJobExportStatus&& value) { m_exportStatus = std::move(value); }
    inline GetVectorEnrichmentJobResult& WithExportStatus(const VectorEnrichmentJobExportStatus& value) { SetExportStatus(value); return *this;}
    inline GetVectorEnrichmentJobResult& WithExportStatus(VectorEnrichmentJobExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input configuration information for the Vector Enrichment job.</p>
     */
    inline const VectorEnrichmentJobInputConfig& GetInputConfig() const{ return m_inputConfig; }
    inline void SetInputConfig(const VectorEnrichmentJobInputConfig& value) { m_inputConfig = value; }
    inline void SetInputConfig(VectorEnrichmentJobInputConfig&& value) { m_inputConfig = std::move(value); }
    inline GetVectorEnrichmentJobResult& WithInputConfig(const VectorEnrichmentJobInputConfig& value) { SetInputConfig(value); return *this;}
    inline GetVectorEnrichmentJobResult& WithInputConfig(VectorEnrichmentJobInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline const VectorEnrichmentJobConfig& GetJobConfig() const{ return m_jobConfig; }
    inline void SetJobConfig(const VectorEnrichmentJobConfig& value) { m_jobConfig = value; }
    inline void SetJobConfig(VectorEnrichmentJobConfig&& value) { m_jobConfig = std::move(value); }
    inline GetVectorEnrichmentJobResult& WithJobConfig(const VectorEnrichmentJobConfig& value) { SetJobConfig(value); return *this;}
    inline GetVectorEnrichmentJobResult& WithJobConfig(VectorEnrichmentJobConfig&& value) { SetJobConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service key ID for server-side encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline GetVectorEnrichmentJobResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline GetVectorEnrichmentJobResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline GetVectorEnrichmentJobResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetVectorEnrichmentJobResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetVectorEnrichmentJobResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetVectorEnrichmentJobResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the initiated Vector Enrichment job.</p>
     */
    inline const VectorEnrichmentJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const VectorEnrichmentJobStatus& value) { m_status = value; }
    inline void SetStatus(VectorEnrichmentJobStatus&& value) { m_status = std::move(value); }
    inline GetVectorEnrichmentJobResult& WithStatus(const VectorEnrichmentJobStatus& value) { SetStatus(value); return *this;}
    inline GetVectorEnrichmentJobResult& WithStatus(VectorEnrichmentJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetVectorEnrichmentJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetVectorEnrichmentJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetVectorEnrichmentJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetVectorEnrichmentJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetVectorEnrichmentJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetVectorEnrichmentJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetVectorEnrichmentJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetVectorEnrichmentJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetVectorEnrichmentJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the Vector Enrichment job being initiated.</p>
     */
    inline const VectorEnrichmentJobType& GetType() const{ return m_type; }
    inline void SetType(const VectorEnrichmentJobType& value) { m_type = value; }
    inline void SetType(VectorEnrichmentJobType&& value) { m_type = std::move(value); }
    inline GetVectorEnrichmentJobResult& WithType(const VectorEnrichmentJobType& value) { SetType(value); return *this;}
    inline GetVectorEnrichmentJobResult& WithType(VectorEnrichmentJobType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetVectorEnrichmentJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetVectorEnrichmentJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetVectorEnrichmentJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    int m_durationInSeconds;

    VectorEnrichmentJobErrorDetails m_errorDetails;

    Aws::String m_executionRoleArn;

    VectorEnrichmentJobExportErrorDetails m_exportErrorDetails;

    VectorEnrichmentJobExportStatus m_exportStatus;

    VectorEnrichmentJobInputConfig m_inputConfig;

    VectorEnrichmentJobConfig m_jobConfig;

    Aws::String m_kmsKeyId;

    Aws::String m_name;

    VectorEnrichmentJobStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    VectorEnrichmentJobType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
