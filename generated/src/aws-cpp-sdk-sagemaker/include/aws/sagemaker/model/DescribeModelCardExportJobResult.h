/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardExportJobStatus.h>
#include <aws/sagemaker/model/ModelCardExportOutputConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ModelCardExportArtifacts.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeModelCardExportJobResult
  {
  public:
    AWS_SAGEMAKER_API DescribeModelCardExportJobResult() = default;
    AWS_SAGEMAKER_API DescribeModelCardExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelCardExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the model card export job to describe.</p>
     */
    inline const Aws::String& GetModelCardExportJobName() const { return m_modelCardExportJobName; }
    template<typename ModelCardExportJobNameT = Aws::String>
    void SetModelCardExportJobName(ModelCardExportJobNameT&& value) { m_modelCardExportJobNameHasBeenSet = true; m_modelCardExportJobName = std::forward<ModelCardExportJobNameT>(value); }
    template<typename ModelCardExportJobNameT = Aws::String>
    DescribeModelCardExportJobResult& WithModelCardExportJobName(ModelCardExportJobNameT&& value) { SetModelCardExportJobName(std::forward<ModelCardExportJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline const Aws::String& GetModelCardExportJobArn() const { return m_modelCardExportJobArn; }
    template<typename ModelCardExportJobArnT = Aws::String>
    void SetModelCardExportJobArn(ModelCardExportJobArnT&& value) { m_modelCardExportJobArnHasBeenSet = true; m_modelCardExportJobArn = std::forward<ModelCardExportJobArnT>(value); }
    template<typename ModelCardExportJobArnT = Aws::String>
    DescribeModelCardExportJobResult& WithModelCardExportJobArn(ModelCardExportJobArnT&& value) { SetModelCardExportJobArn(std::forward<ModelCardExportJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The completion status of the model card export job.</p> <ul> <li> <p>
     * <code>InProgress</code>: The model card export job is in progress.</p> </li>
     * <li> <p> <code>Completed</code>: The model card export job is complete.</p>
     * </li> <li> <p> <code>Failed</code>: The model card export job failed. To see the
     * reason for the failure, see the <code>FailureReason</code> field in the response
     * to a <code>DescribeModelCardExportJob</code> call.</p> </li> </ul>
     */
    inline ModelCardExportJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(ModelCardExportJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeModelCardExportJobResult& WithStatus(ModelCardExportJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the model card that the model
     * export job exports.</p>
     */
    inline const Aws::String& GetModelCardName() const { return m_modelCardName; }
    template<typename ModelCardNameT = Aws::String>
    void SetModelCardName(ModelCardNameT&& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = std::forward<ModelCardNameT>(value); }
    template<typename ModelCardNameT = Aws::String>
    DescribeModelCardExportJobResult& WithModelCardName(ModelCardNameT&& value) { SetModelCardName(std::forward<ModelCardNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model card that the model export job exports.</p>
     */
    inline int GetModelCardVersion() const { return m_modelCardVersion; }
    inline void SetModelCardVersion(int value) { m_modelCardVersionHasBeenSet = true; m_modelCardVersion = value; }
    inline DescribeModelCardExportJobResult& WithModelCardVersion(int value) { SetModelCardVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The export output details for the model card.</p>
     */
    inline const ModelCardExportOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    template<typename OutputConfigT = ModelCardExportOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = ModelCardExportOutputConfig>
    DescribeModelCardExportJobResult& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the model export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeModelCardExportJobResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the model export job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    void SetLastModifiedAt(LastModifiedAtT&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::forward<LastModifiedAtT>(value); }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    DescribeModelCardExportJobResult& WithLastModifiedAt(LastModifiedAtT&& value) { SetLastModifiedAt(std::forward<LastModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason if the model export job fails.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeModelCardExportJobResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exported model card artifacts.</p>
     */
    inline const ModelCardExportArtifacts& GetExportArtifacts() const { return m_exportArtifacts; }
    template<typename ExportArtifactsT = ModelCardExportArtifacts>
    void SetExportArtifacts(ExportArtifactsT&& value) { m_exportArtifactsHasBeenSet = true; m_exportArtifacts = std::forward<ExportArtifactsT>(value); }
    template<typename ExportArtifactsT = ModelCardExportArtifacts>
    DescribeModelCardExportJobResult& WithExportArtifacts(ExportArtifactsT&& value) { SetExportArtifacts(std::forward<ExportArtifactsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeModelCardExportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelCardExportJobName;
    bool m_modelCardExportJobNameHasBeenSet = false;

    Aws::String m_modelCardExportJobArn;
    bool m_modelCardExportJobArnHasBeenSet = false;

    ModelCardExportJobStatus m_status{ModelCardExportJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_modelCardName;
    bool m_modelCardNameHasBeenSet = false;

    int m_modelCardVersion{0};
    bool m_modelCardVersionHasBeenSet = false;

    ModelCardExportOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt{};
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    ModelCardExportArtifacts m_exportArtifacts;
    bool m_exportArtifactsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
