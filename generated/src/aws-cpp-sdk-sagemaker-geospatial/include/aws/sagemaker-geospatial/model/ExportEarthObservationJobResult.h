/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker-geospatial/model/EarthObservationJobExportStatus.h>
#include <aws/sagemaker-geospatial/model/OutputConfigInput.h>
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
  class ExportEarthObservationJobResult
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ExportEarthObservationJobResult() = default;
    AWS_SAGEMAKERGEOSPATIAL_API ExportEarthObservationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API ExportEarthObservationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The output Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ExportEarthObservationJobResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ExportEarthObservationJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    ExportEarthObservationJobResult& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source images provided to the Earth Observation job being exported.</p>
     */
    inline bool GetExportSourceImages() const { return m_exportSourceImages; }
    inline void SetExportSourceImages(bool value) { m_exportSourceImagesHasBeenSet = true; m_exportSourceImages = value; }
    inline ExportEarthObservationJobResult& WithExportSourceImages(bool value) { SetExportSourceImages(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the results of the Earth Observation job being exported.</p>
     */
    inline EarthObservationJobExportStatus GetExportStatus() const { return m_exportStatus; }
    inline void SetExportStatus(EarthObservationJobExportStatus value) { m_exportStatusHasBeenSet = true; m_exportStatus = value; }
    inline ExportEarthObservationJobResult& WithExportStatus(EarthObservationJobExportStatus value) { SetExportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the output file.</p>
     */
    inline const OutputConfigInput& GetOutputConfig() const { return m_outputConfig; }
    template<typename OutputConfigT = OutputConfigInput>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = OutputConfigInput>
    ExportEarthObservationJobResult& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExportEarthObservationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    bool m_exportSourceImages{false};
    bool m_exportSourceImagesHasBeenSet = false;

    EarthObservationJobExportStatus m_exportStatus{EarthObservationJobExportStatus::NOT_SET};
    bool m_exportStatusHasBeenSet = false;

    OutputConfigInput m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
