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
    AWS_NEPTUNEDATA_API GetMLModelTransformJobResult() = default;
    AWS_NEPTUNEDATA_API GetMLModelTransformJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API GetMLModelTransformJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the model-transform job.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    GetMLModelTransformJobResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the model-transform job to be retrieved.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetMLModelTransformJobResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base data processing job.</p>
     */
    inline const MlResourceDefinition& GetBaseProcessingJob() const { return m_baseProcessingJob; }
    template<typename BaseProcessingJobT = MlResourceDefinition>
    void SetBaseProcessingJob(BaseProcessingJobT&& value) { m_baseProcessingJobHasBeenSet = true; m_baseProcessingJob = std::forward<BaseProcessingJobT>(value); }
    template<typename BaseProcessingJobT = MlResourceDefinition>
    GetMLModelTransformJobResult& WithBaseProcessingJob(BaseProcessingJobT&& value) { SetBaseProcessingJob(std::forward<BaseProcessingJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remote model transform job.</p>
     */
    inline const MlResourceDefinition& GetRemoteModelTransformJob() const { return m_remoteModelTransformJob; }
    template<typename RemoteModelTransformJobT = MlResourceDefinition>
    void SetRemoteModelTransformJob(RemoteModelTransformJobT&& value) { m_remoteModelTransformJobHasBeenSet = true; m_remoteModelTransformJob = std::forward<RemoteModelTransformJobT>(value); }
    template<typename RemoteModelTransformJobT = MlResourceDefinition>
    GetMLModelTransformJobResult& WithRemoteModelTransformJob(RemoteModelTransformJobT&& value) { SetRemoteModelTransformJob(std::forward<RemoteModelTransformJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the configuration information for the models being used.</p>
     */
    inline const Aws::Vector<MlConfigDefinition>& GetModels() const { return m_models; }
    template<typename ModelsT = Aws::Vector<MlConfigDefinition>>
    void SetModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models = std::forward<ModelsT>(value); }
    template<typename ModelsT = Aws::Vector<MlConfigDefinition>>
    GetMLModelTransformJobResult& WithModels(ModelsT&& value) { SetModels(std::forward<ModelsT>(value)); return *this;}
    template<typename ModelsT = MlConfigDefinition>
    GetMLModelTransformJobResult& AddModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models.emplace_back(std::forward<ModelsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMLModelTransformJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    MlResourceDefinition m_baseProcessingJob;
    bool m_baseProcessingJobHasBeenSet = false;

    MlResourceDefinition m_remoteModelTransformJob;
    bool m_remoteModelTransformJobHasBeenSet = false;

    Aws::Vector<MlConfigDefinition> m_models;
    bool m_modelsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
