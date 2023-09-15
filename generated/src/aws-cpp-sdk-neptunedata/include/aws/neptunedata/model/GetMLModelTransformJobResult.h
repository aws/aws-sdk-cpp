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
  class GetMLModelTransformJobResult
  {
  public:
    AWS_NEPTUNEDATA_API GetMLModelTransformJobResult();
    AWS_NEPTUNEDATA_API GetMLModelTransformJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API GetMLModelTransformJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the model-transform job.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the model-transform job.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the model-transform job.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the model-transform job.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the model-transform job.</p>
     */
    inline GetMLModelTransformJobResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the model-transform job.</p>
     */
    inline GetMLModelTransformJobResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the model-transform job.</p>
     */
    inline GetMLModelTransformJobResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The unique identifier of the model-transform job to be retrieved.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the model-transform job to be retrieved.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The unique identifier of the model-transform job to be retrieved.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The unique identifier of the model-transform job to be retrieved.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The unique identifier of the model-transform job to be retrieved.</p>
     */
    inline GetMLModelTransformJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the model-transform job to be retrieved.</p>
     */
    inline GetMLModelTransformJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the model-transform job to be retrieved.</p>
     */
    inline GetMLModelTransformJobResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The base data processing job.</p>
     */
    inline const MlResourceDefinition& GetBaseProcessingJob() const{ return m_baseProcessingJob; }

    /**
     * <p>The base data processing job.</p>
     */
    inline void SetBaseProcessingJob(const MlResourceDefinition& value) { m_baseProcessingJob = value; }

    /**
     * <p>The base data processing job.</p>
     */
    inline void SetBaseProcessingJob(MlResourceDefinition&& value) { m_baseProcessingJob = std::move(value); }

    /**
     * <p>The base data processing job.</p>
     */
    inline GetMLModelTransformJobResult& WithBaseProcessingJob(const MlResourceDefinition& value) { SetBaseProcessingJob(value); return *this;}

    /**
     * <p>The base data processing job.</p>
     */
    inline GetMLModelTransformJobResult& WithBaseProcessingJob(MlResourceDefinition&& value) { SetBaseProcessingJob(std::move(value)); return *this;}


    /**
     * <p>The remote model transform job.</p>
     */
    inline const MlResourceDefinition& GetRemoteModelTransformJob() const{ return m_remoteModelTransformJob; }

    /**
     * <p>The remote model transform job.</p>
     */
    inline void SetRemoteModelTransformJob(const MlResourceDefinition& value) { m_remoteModelTransformJob = value; }

    /**
     * <p>The remote model transform job.</p>
     */
    inline void SetRemoteModelTransformJob(MlResourceDefinition&& value) { m_remoteModelTransformJob = std::move(value); }

    /**
     * <p>The remote model transform job.</p>
     */
    inline GetMLModelTransformJobResult& WithRemoteModelTransformJob(const MlResourceDefinition& value) { SetRemoteModelTransformJob(value); return *this;}

    /**
     * <p>The remote model transform job.</p>
     */
    inline GetMLModelTransformJobResult& WithRemoteModelTransformJob(MlResourceDefinition&& value) { SetRemoteModelTransformJob(std::move(value)); return *this;}


    /**
     * <p>A list of the configuration information for the models being used.</p>
     */
    inline const Aws::Vector<MlConfigDefinition>& GetModels() const{ return m_models; }

    /**
     * <p>A list of the configuration information for the models being used.</p>
     */
    inline void SetModels(const Aws::Vector<MlConfigDefinition>& value) { m_models = value; }

    /**
     * <p>A list of the configuration information for the models being used.</p>
     */
    inline void SetModels(Aws::Vector<MlConfigDefinition>&& value) { m_models = std::move(value); }

    /**
     * <p>A list of the configuration information for the models being used.</p>
     */
    inline GetMLModelTransformJobResult& WithModels(const Aws::Vector<MlConfigDefinition>& value) { SetModels(value); return *this;}

    /**
     * <p>A list of the configuration information for the models being used.</p>
     */
    inline GetMLModelTransformJobResult& WithModels(Aws::Vector<MlConfigDefinition>&& value) { SetModels(std::move(value)); return *this;}

    /**
     * <p>A list of the configuration information for the models being used.</p>
     */
    inline GetMLModelTransformJobResult& AddModels(const MlConfigDefinition& value) { m_models.push_back(value); return *this; }

    /**
     * <p>A list of the configuration information for the models being used.</p>
     */
    inline GetMLModelTransformJobResult& AddModels(MlConfigDefinition&& value) { m_models.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMLModelTransformJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMLModelTransformJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMLModelTransformJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_status;

    Aws::String m_id;

    MlResourceDefinition m_baseProcessingJob;

    MlResourceDefinition m_remoteModelTransformJob;

    Aws::Vector<MlConfigDefinition> m_models;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
