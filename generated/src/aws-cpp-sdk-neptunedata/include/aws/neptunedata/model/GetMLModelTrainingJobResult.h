/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/model/MlResourceDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptunedata/model/MlConfigDefinition.h>
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
namespace neptunedata
{
namespace Model
{
  class GetMLModelTrainingJobResult
  {
  public:
    AWS_NEPTUNEDATA_API GetMLModelTrainingJobResult() = default;
    AWS_NEPTUNEDATA_API GetMLModelTrainingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API GetMLModelTrainingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the model training job.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    GetMLModelTrainingJobResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of this model-training job.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetMLModelTrainingJobResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data processing job.</p>
     */
    inline const MlResourceDefinition& GetProcessingJob() const { return m_processingJob; }
    template<typename ProcessingJobT = MlResourceDefinition>
    void SetProcessingJob(ProcessingJobT&& value) { m_processingJobHasBeenSet = true; m_processingJob = std::forward<ProcessingJobT>(value); }
    template<typename ProcessingJobT = MlResourceDefinition>
    GetMLModelTrainingJobResult& WithProcessingJob(ProcessingJobT&& value) { SetProcessingJob(std::forward<ProcessingJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HPO job.</p>
     */
    inline const MlResourceDefinition& GetHpoJob() const { return m_hpoJob; }
    template<typename HpoJobT = MlResourceDefinition>
    void SetHpoJob(HpoJobT&& value) { m_hpoJobHasBeenSet = true; m_hpoJob = std::forward<HpoJobT>(value); }
    template<typename HpoJobT = MlResourceDefinition>
    GetMLModelTrainingJobResult& WithHpoJob(HpoJobT&& value) { SetHpoJob(std::forward<HpoJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model transform job.</p>
     */
    inline const MlResourceDefinition& GetModelTransformJob() const { return m_modelTransformJob; }
    template<typename ModelTransformJobT = MlResourceDefinition>
    void SetModelTransformJob(ModelTransformJobT&& value) { m_modelTransformJobHasBeenSet = true; m_modelTransformJob = std::forward<ModelTransformJobT>(value); }
    template<typename ModelTransformJobT = MlResourceDefinition>
    GetMLModelTrainingJobResult& WithModelTransformJob(ModelTransformJobT&& value) { SetModelTransformJob(std::forward<ModelTransformJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the configurations of the ML models being used.</p>
     */
    inline const Aws::Vector<MlConfigDefinition>& GetMlModels() const { return m_mlModels; }
    template<typename MlModelsT = Aws::Vector<MlConfigDefinition>>
    void SetMlModels(MlModelsT&& value) { m_mlModelsHasBeenSet = true; m_mlModels = std::forward<MlModelsT>(value); }
    template<typename MlModelsT = Aws::Vector<MlConfigDefinition>>
    GetMLModelTrainingJobResult& WithMlModels(MlModelsT&& value) { SetMlModels(std::forward<MlModelsT>(value)); return *this;}
    template<typename MlModelsT = MlConfigDefinition>
    GetMLModelTrainingJobResult& AddMlModels(MlModelsT&& value) { m_mlModelsHasBeenSet = true; m_mlModels.emplace_back(std::forward<MlModelsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMLModelTrainingJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    MlResourceDefinition m_processingJob;
    bool m_processingJobHasBeenSet = false;

    MlResourceDefinition m_hpoJob;
    bool m_hpoJobHasBeenSet = false;

    MlResourceDefinition m_modelTransformJob;
    bool m_modelTransformJobHasBeenSet = false;

    Aws::Vector<MlConfigDefinition> m_mlModels;
    bool m_mlModelsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
