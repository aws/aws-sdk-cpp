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
    AWS_SAGEMAKERGEOSPATIAL_API GetVectorEnrichmentJobResult() = default;
    AWS_SAGEMAKERGEOSPATIAL_API GetVectorEnrichmentJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API GetVectorEnrichmentJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetVectorEnrichmentJobResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetVectorEnrichmentJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the Vector Enrichment job, in seconds.</p>
     */
    inline int GetDurationInSeconds() const { return m_durationInSeconds; }
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline GetVectorEnrichmentJobResult& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the errors generated during the Vector Enrichment job.</p>
     */
    inline const VectorEnrichmentJobErrorDetails& GetErrorDetails() const { return m_errorDetails; }
    template<typename ErrorDetailsT = VectorEnrichmentJobErrorDetails>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = VectorEnrichmentJobErrorDetails>
    GetVectorEnrichmentJobResult& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    GetVectorEnrichmentJobResult& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the errors generated during the ExportVectorEnrichmentJob.</p>
     */
    inline const VectorEnrichmentJobExportErrorDetails& GetExportErrorDetails() const { return m_exportErrorDetails; }
    template<typename ExportErrorDetailsT = VectorEnrichmentJobExportErrorDetails>
    void SetExportErrorDetails(ExportErrorDetailsT&& value) { m_exportErrorDetailsHasBeenSet = true; m_exportErrorDetails = std::forward<ExportErrorDetailsT>(value); }
    template<typename ExportErrorDetailsT = VectorEnrichmentJobExportErrorDetails>
    GetVectorEnrichmentJobResult& WithExportErrorDetails(ExportErrorDetailsT&& value) { SetExportErrorDetails(std::forward<ExportErrorDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The export status of the Vector Enrichment job being initiated.</p>
     */
    inline VectorEnrichmentJobExportStatus GetExportStatus() const { return m_exportStatus; }
    inline void SetExportStatus(VectorEnrichmentJobExportStatus value) { m_exportStatusHasBeenSet = true; m_exportStatus = value; }
    inline GetVectorEnrichmentJobResult& WithExportStatus(VectorEnrichmentJobExportStatus value) { SetExportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input configuration information for the Vector Enrichment job.</p>
     */
    inline const VectorEnrichmentJobInputConfig& GetInputConfig() const { return m_inputConfig; }
    template<typename InputConfigT = VectorEnrichmentJobInputConfig>
    void SetInputConfig(InputConfigT&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::forward<InputConfigT>(value); }
    template<typename InputConfigT = VectorEnrichmentJobInputConfig>
    GetVectorEnrichmentJobResult& WithInputConfig(InputConfigT&& value) { SetInputConfig(std::forward<InputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline const VectorEnrichmentJobConfig& GetJobConfig() const { return m_jobConfig; }
    template<typename JobConfigT = VectorEnrichmentJobConfig>
    void SetJobConfig(JobConfigT&& value) { m_jobConfigHasBeenSet = true; m_jobConfig = std::forward<JobConfigT>(value); }
    template<typename JobConfigT = VectorEnrichmentJobConfig>
    GetVectorEnrichmentJobResult& WithJobConfig(JobConfigT&& value) { SetJobConfig(std::forward<JobConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service key ID for server-side encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    GetVectorEnrichmentJobResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Vector Enrichment job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetVectorEnrichmentJobResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the initiated Vector Enrichment job.</p>
     */
    inline VectorEnrichmentJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(VectorEnrichmentJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetVectorEnrichmentJobResult& WithStatus(VectorEnrichmentJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetVectorEnrichmentJobResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetVectorEnrichmentJobResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of the Vector Enrichment job being initiated.</p>
     */
    inline VectorEnrichmentJobType GetType() const { return m_type; }
    inline void SetType(VectorEnrichmentJobType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetVectorEnrichmentJobResult& WithType(VectorEnrichmentJobType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetVectorEnrichmentJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    int m_durationInSeconds{0};
    bool m_durationInSecondsHasBeenSet = false;

    VectorEnrichmentJobErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    VectorEnrichmentJobExportErrorDetails m_exportErrorDetails;
    bool m_exportErrorDetailsHasBeenSet = false;

    VectorEnrichmentJobExportStatus m_exportStatus{VectorEnrichmentJobExportStatus::NOT_SET};
    bool m_exportStatusHasBeenSet = false;

    VectorEnrichmentJobInputConfig m_inputConfig;
    bool m_inputConfigHasBeenSet = false;

    VectorEnrichmentJobConfig m_jobConfig;
    bool m_jobConfigHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VectorEnrichmentJobStatus m_status{VectorEnrichmentJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    VectorEnrichmentJobType m_type{VectorEnrichmentJobType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
