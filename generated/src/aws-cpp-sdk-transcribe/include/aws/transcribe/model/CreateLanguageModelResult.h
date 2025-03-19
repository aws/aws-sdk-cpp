/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/CLMLanguageCode.h>
#include <aws/transcribe/model/BaseModelName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/InputDataConfig.h>
#include <aws/transcribe/model/ModelStatus.h>
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
namespace TranscribeService
{
namespace Model
{
  class CreateLanguageModelResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API CreateLanguageModelResult() = default;
    AWS_TRANSCRIBESERVICE_API CreateLanguageModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API CreateLanguageModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The language code you selected for your custom language model.</p>
     */
    inline CLMLanguageCode GetLanguageCode() const { return m_languageCode; }
    inline void SetLanguageCode(CLMLanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline CreateLanguageModelResult& WithLanguageCode(CLMLanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Transcribe standard language model, or base model, you specified
     * when creating your custom language model.</p>
     */
    inline BaseModelName GetBaseModelName() const { return m_baseModelName; }
    inline void SetBaseModelName(BaseModelName value) { m_baseModelNameHasBeenSet = true; m_baseModelName = value; }
    inline CreateLanguageModelResult& WithBaseModelName(BaseModelName value) { SetBaseModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your custom language model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    CreateLanguageModelResult& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists your data access role ARN (Amazon Resource Name) and the Amazon S3
     * locations you provided for your training (<code>S3Uri</code>) and tuning
     * (<code>TuningDataS3Uri</code>) data.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const { return m_inputDataConfig; }
    template<typename InputDataConfigT = InputDataConfig>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = InputDataConfig>
    CreateLanguageModelResult& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your custom language model. When the status displays as
     * <code>COMPLETED</code>, your model is ready to use.</p>
     */
    inline ModelStatus GetModelStatus() const { return m_modelStatus; }
    inline void SetModelStatus(ModelStatus value) { m_modelStatusHasBeenSet = true; m_modelStatus = value; }
    inline CreateLanguageModelResult& WithModelStatus(ModelStatus value) { SetModelStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateLanguageModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CLMLanguageCode m_languageCode{CLMLanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    BaseModelName m_baseModelName{BaseModelName::NOT_SET};
    bool m_baseModelNameHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    ModelStatus m_modelStatus{ModelStatus::NOT_SET};
    bool m_modelStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
