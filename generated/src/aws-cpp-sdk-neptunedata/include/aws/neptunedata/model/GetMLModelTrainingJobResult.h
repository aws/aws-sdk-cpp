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
    AWS_NEPTUNEDATA_API GetMLModelTrainingJobResult();
    AWS_NEPTUNEDATA_API GetMLModelTrainingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API GetMLModelTrainingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the model training job.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the model training job.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the model training job.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the model training job.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the model training job.</p>
     */
    inline GetMLModelTrainingJobResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the model training job.</p>
     */
    inline GetMLModelTrainingJobResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the model training job.</p>
     */
    inline GetMLModelTrainingJobResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The unique identifier of this model-training job.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of this model-training job.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The unique identifier of this model-training job.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The unique identifier of this model-training job.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The unique identifier of this model-training job.</p>
     */
    inline GetMLModelTrainingJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of this model-training job.</p>
     */
    inline GetMLModelTrainingJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of this model-training job.</p>
     */
    inline GetMLModelTrainingJobResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The data processing job.</p>
     */
    inline const MlResourceDefinition& GetProcessingJob() const{ return m_processingJob; }

    /**
     * <p>The data processing job.</p>
     */
    inline void SetProcessingJob(const MlResourceDefinition& value) { m_processingJob = value; }

    /**
     * <p>The data processing job.</p>
     */
    inline void SetProcessingJob(MlResourceDefinition&& value) { m_processingJob = std::move(value); }

    /**
     * <p>The data processing job.</p>
     */
    inline GetMLModelTrainingJobResult& WithProcessingJob(const MlResourceDefinition& value) { SetProcessingJob(value); return *this;}

    /**
     * <p>The data processing job.</p>
     */
    inline GetMLModelTrainingJobResult& WithProcessingJob(MlResourceDefinition&& value) { SetProcessingJob(std::move(value)); return *this;}


    /**
     * <p>The HPO job.</p>
     */
    inline const MlResourceDefinition& GetHpoJob() const{ return m_hpoJob; }

    /**
     * <p>The HPO job.</p>
     */
    inline void SetHpoJob(const MlResourceDefinition& value) { m_hpoJob = value; }

    /**
     * <p>The HPO job.</p>
     */
    inline void SetHpoJob(MlResourceDefinition&& value) { m_hpoJob = std::move(value); }

    /**
     * <p>The HPO job.</p>
     */
    inline GetMLModelTrainingJobResult& WithHpoJob(const MlResourceDefinition& value) { SetHpoJob(value); return *this;}

    /**
     * <p>The HPO job.</p>
     */
    inline GetMLModelTrainingJobResult& WithHpoJob(MlResourceDefinition&& value) { SetHpoJob(std::move(value)); return *this;}


    /**
     * <p>The model transform job.</p>
     */
    inline const MlResourceDefinition& GetModelTransformJob() const{ return m_modelTransformJob; }

    /**
     * <p>The model transform job.</p>
     */
    inline void SetModelTransformJob(const MlResourceDefinition& value) { m_modelTransformJob = value; }

    /**
     * <p>The model transform job.</p>
     */
    inline void SetModelTransformJob(MlResourceDefinition&& value) { m_modelTransformJob = std::move(value); }

    /**
     * <p>The model transform job.</p>
     */
    inline GetMLModelTrainingJobResult& WithModelTransformJob(const MlResourceDefinition& value) { SetModelTransformJob(value); return *this;}

    /**
     * <p>The model transform job.</p>
     */
    inline GetMLModelTrainingJobResult& WithModelTransformJob(MlResourceDefinition&& value) { SetModelTransformJob(std::move(value)); return *this;}


    /**
     * <p>A list of the configurations of the ML models being used.</p>
     */
    inline const Aws::Vector<MlConfigDefinition>& GetMlModels() const{ return m_mlModels; }

    /**
     * <p>A list of the configurations of the ML models being used.</p>
     */
    inline void SetMlModels(const Aws::Vector<MlConfigDefinition>& value) { m_mlModels = value; }

    /**
     * <p>A list of the configurations of the ML models being used.</p>
     */
    inline void SetMlModels(Aws::Vector<MlConfigDefinition>&& value) { m_mlModels = std::move(value); }

    /**
     * <p>A list of the configurations of the ML models being used.</p>
     */
    inline GetMLModelTrainingJobResult& WithMlModels(const Aws::Vector<MlConfigDefinition>& value) { SetMlModels(value); return *this;}

    /**
     * <p>A list of the configurations of the ML models being used.</p>
     */
    inline GetMLModelTrainingJobResult& WithMlModels(Aws::Vector<MlConfigDefinition>&& value) { SetMlModels(std::move(value)); return *this;}

    /**
     * <p>A list of the configurations of the ML models being used.</p>
     */
    inline GetMLModelTrainingJobResult& AddMlModels(const MlConfigDefinition& value) { m_mlModels.push_back(value); return *this; }

    /**
     * <p>A list of the configurations of the ML models being used.</p>
     */
    inline GetMLModelTrainingJobResult& AddMlModels(MlConfigDefinition&& value) { m_mlModels.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMLModelTrainingJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMLModelTrainingJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMLModelTrainingJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_status;

    Aws::String m_id;

    MlResourceDefinition m_processingJob;

    MlResourceDefinition m_hpoJob;

    MlResourceDefinition m_modelTransformJob;

    Aws::Vector<MlConfigDefinition> m_mlModels;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
