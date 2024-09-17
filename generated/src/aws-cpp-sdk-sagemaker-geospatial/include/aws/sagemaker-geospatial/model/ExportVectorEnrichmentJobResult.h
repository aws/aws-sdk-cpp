/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobExportStatus.h>
#include <aws/sagemaker-geospatial/model/ExportVectorEnrichmentJobOutputConfig.h>
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
  class ExportVectorEnrichmentJobResult
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ExportVectorEnrichmentJobResult();
    AWS_SAGEMAKERGEOSPATIAL_API ExportVectorEnrichmentJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API ExportVectorEnrichmentJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job being
     * exported.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline ExportVectorEnrichmentJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ExportVectorEnrichmentJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ExportVectorEnrichmentJobResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline ExportVectorEnrichmentJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ExportVectorEnrichmentJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permission to upload to
     * the location in OutputConfig.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArn.assign(value); }
    inline ExportVectorEnrichmentJobResult& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline ExportVectorEnrichmentJobResult& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline ExportVectorEnrichmentJobResult& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the results the Vector Enrichment job being exported.</p>
     */
    inline const VectorEnrichmentJobExportStatus& GetExportStatus() const{ return m_exportStatus; }
    inline void SetExportStatus(const VectorEnrichmentJobExportStatus& value) { m_exportStatus = value; }
    inline void SetExportStatus(VectorEnrichmentJobExportStatus&& value) { m_exportStatus = std::move(value); }
    inline ExportVectorEnrichmentJobResult& WithExportStatus(const VectorEnrichmentJobExportStatus& value) { SetExportStatus(value); return *this;}
    inline ExportVectorEnrichmentJobResult& WithExportStatus(VectorEnrichmentJobExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output location information for exporting Vector Enrichment Job results. </p>
     */
    inline const ExportVectorEnrichmentJobOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline void SetOutputConfig(const ExportVectorEnrichmentJobOutputConfig& value) { m_outputConfig = value; }
    inline void SetOutputConfig(ExportVectorEnrichmentJobOutputConfig&& value) { m_outputConfig = std::move(value); }
    inline ExportVectorEnrichmentJobResult& WithOutputConfig(const ExportVectorEnrichmentJobOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline ExportVectorEnrichmentJobResult& WithOutputConfig(ExportVectorEnrichmentJobOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ExportVectorEnrichmentJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ExportVectorEnrichmentJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ExportVectorEnrichmentJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_executionRoleArn;

    VectorEnrichmentJobExportStatus m_exportStatus;

    ExportVectorEnrichmentJobOutputConfig m_outputConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
