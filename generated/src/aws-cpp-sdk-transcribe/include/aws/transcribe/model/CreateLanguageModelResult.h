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
    AWS_TRANSCRIBESERVICE_API CreateLanguageModelResult();
    AWS_TRANSCRIBESERVICE_API CreateLanguageModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API CreateLanguageModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The language code you selected for your custom language model.</p>
     */
    inline const CLMLanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code you selected for your custom language model.</p>
     */
    inline void SetLanguageCode(const CLMLanguageCode& value) { m_languageCode = value; }

    /**
     * <p>The language code you selected for your custom language model.</p>
     */
    inline void SetLanguageCode(CLMLanguageCode&& value) { m_languageCode = std::move(value); }

    /**
     * <p>The language code you selected for your custom language model.</p>
     */
    inline CreateLanguageModelResult& WithLanguageCode(const CLMLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code you selected for your custom language model.</p>
     */
    inline CreateLanguageModelResult& WithLanguageCode(CLMLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The Amazon Transcribe standard language model, or base model, you specified
     * when creating your custom language model.</p>
     */
    inline const BaseModelName& GetBaseModelName() const{ return m_baseModelName; }

    /**
     * <p>The Amazon Transcribe standard language model, or base model, you specified
     * when creating your custom language model.</p>
     */
    inline void SetBaseModelName(const BaseModelName& value) { m_baseModelName = value; }

    /**
     * <p>The Amazon Transcribe standard language model, or base model, you specified
     * when creating your custom language model.</p>
     */
    inline void SetBaseModelName(BaseModelName&& value) { m_baseModelName = std::move(value); }

    /**
     * <p>The Amazon Transcribe standard language model, or base model, you specified
     * when creating your custom language model.</p>
     */
    inline CreateLanguageModelResult& WithBaseModelName(const BaseModelName& value) { SetBaseModelName(value); return *this;}

    /**
     * <p>The Amazon Transcribe standard language model, or base model, you specified
     * when creating your custom language model.</p>
     */
    inline CreateLanguageModelResult& WithBaseModelName(BaseModelName&& value) { SetBaseModelName(std::move(value)); return *this;}


    /**
     * <p>The name of your custom language model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of your custom language model.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }

    /**
     * <p>The name of your custom language model.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }

    /**
     * <p>The name of your custom language model.</p>
     */
    inline void SetModelName(const char* value) { m_modelName.assign(value); }

    /**
     * <p>The name of your custom language model.</p>
     */
    inline CreateLanguageModelResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of your custom language model.</p>
     */
    inline CreateLanguageModelResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of your custom language model.</p>
     */
    inline CreateLanguageModelResult& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>Lists your data access role ARN (Amazon Resource Name) and the Amazon S3
     * locations you provided for your training (<code>S3Uri</code>) and tuning
     * (<code>TuningDataS3Uri</code>) data.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>Lists your data access role ARN (Amazon Resource Name) and the Amazon S3
     * locations you provided for your training (<code>S3Uri</code>) and tuning
     * (<code>TuningDataS3Uri</code>) data.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfig = value; }

    /**
     * <p>Lists your data access role ARN (Amazon Resource Name) and the Amazon S3
     * locations you provided for your training (<code>S3Uri</code>) and tuning
     * (<code>TuningDataS3Uri</code>) data.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfig = std::move(value); }

    /**
     * <p>Lists your data access role ARN (Amazon Resource Name) and the Amazon S3
     * locations you provided for your training (<code>S3Uri</code>) and tuning
     * (<code>TuningDataS3Uri</code>) data.</p>
     */
    inline CreateLanguageModelResult& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>Lists your data access role ARN (Amazon Resource Name) and the Amazon S3
     * locations you provided for your training (<code>S3Uri</code>) and tuning
     * (<code>TuningDataS3Uri</code>) data.</p>
     */
    inline CreateLanguageModelResult& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The status of your custom language model. When the status displays as
     * <code>COMPLETED</code>, your model is ready to use.</p>
     */
    inline const ModelStatus& GetModelStatus() const{ return m_modelStatus; }

    /**
     * <p>The status of your custom language model. When the status displays as
     * <code>COMPLETED</code>, your model is ready to use.</p>
     */
    inline void SetModelStatus(const ModelStatus& value) { m_modelStatus = value; }

    /**
     * <p>The status of your custom language model. When the status displays as
     * <code>COMPLETED</code>, your model is ready to use.</p>
     */
    inline void SetModelStatus(ModelStatus&& value) { m_modelStatus = std::move(value); }

    /**
     * <p>The status of your custom language model. When the status displays as
     * <code>COMPLETED</code>, your model is ready to use.</p>
     */
    inline CreateLanguageModelResult& WithModelStatus(const ModelStatus& value) { SetModelStatus(value); return *this;}

    /**
     * <p>The status of your custom language model. When the status displays as
     * <code>COMPLETED</code>, your model is ready to use.</p>
     */
    inline CreateLanguageModelResult& WithModelStatus(ModelStatus&& value) { SetModelStatus(std::move(value)); return *this;}

  private:

    CLMLanguageCode m_languageCode;

    BaseModelName m_baseModelName;

    Aws::String m_modelName;

    InputDataConfig m_inputDataConfig;

    ModelStatus m_modelStatus;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
