/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/CLMLanguageCode.h>
#include <aws/transcribe/model/BaseModelName.h>
#include <aws/transcribe/model/ModelStatus.h>
#include <aws/transcribe/model/InputDataConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Provides information about a custom language model, including:</p> <ul> <li>
   * <p>The base model name</p> </li> <li> <p>When the model was created</p> </li>
   * <li> <p>The location of the files used to train the model</p> </li> <li> <p>When
   * the model was last modified</p> </li> <li> <p>The name you chose for the
   * model</p> </li> <li> <p>The model's language</p> </li> <li> <p>The model's
   * processing state</p> </li> <li> <p>Any available upgrades for the base model</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/LanguageModel">AWS
   * API Reference</a></p>
   */
  class LanguageModel
  {
  public:
    AWS_TRANSCRIBESERVICE_API LanguageModel() = default;
    AWS_TRANSCRIBESERVICE_API LanguageModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API LanguageModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique name, chosen by you, for your custom language model.</p> <p>This
     * name is case sensitive, cannot contain spaces, and must be unique within an
     * Amazon Web Services account.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    LanguageModel& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified custom language model was created.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    LanguageModel& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified custom language model was last modified.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    LanguageModel& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code used to create your custom language model. Each custom
     * language model must contain terms in only one language, and the language you
     * select for your custom language model must match the language of your training
     * and tuning data.</p> <p>For a list of supported languages and their associated
     * language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table. Note that US English (<code>en-US</code>) is the only
     * language supported with Amazon Transcribe Medical.</p>
     */
    inline CLMLanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(CLMLanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline LanguageModel& WithLanguageCode(CLMLanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Transcribe standard language model, or base model, used to create
     * your custom language model.</p>
     */
    inline BaseModelName GetBaseModelName() const { return m_baseModelName; }
    inline bool BaseModelNameHasBeenSet() const { return m_baseModelNameHasBeenSet; }
    inline void SetBaseModelName(BaseModelName value) { m_baseModelNameHasBeenSet = true; m_baseModelName = value; }
    inline LanguageModel& WithBaseModelName(BaseModelName value) { SetBaseModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the specified custom language model. When the status displays
     * as <code>COMPLETED</code> the model is ready for use.</p>
     */
    inline ModelStatus GetModelStatus() const { return m_modelStatus; }
    inline bool ModelStatusHasBeenSet() const { return m_modelStatusHasBeenSet; }
    inline void SetModelStatus(ModelStatus value) { m_modelStatusHasBeenSet = true; m_modelStatus = value; }
    inline LanguageModel& WithModelStatus(ModelStatus value) { SetModelStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows if a more current base model is available for use with the specified
     * custom language model.</p> <p>If <code>false</code>, your custom language model
     * is using the most up-to-date base model.</p> <p>If <code>true</code>, there is a
     * newer base model available than the one your language model is using.</p>
     * <p>Note that to update a base model, you must recreate the custom language model
     * using the new base model. Base model upgrades for existing custom language
     * models are not supported.</p>
     */
    inline bool GetUpgradeAvailability() const { return m_upgradeAvailability; }
    inline bool UpgradeAvailabilityHasBeenSet() const { return m_upgradeAvailabilityHasBeenSet; }
    inline void SetUpgradeAvailability(bool value) { m_upgradeAvailabilityHasBeenSet = true; m_upgradeAvailability = value; }
    inline LanguageModel& WithUpgradeAvailability(bool value) { SetUpgradeAvailability(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>ModelStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom language
     * model request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    LanguageModel& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of the input files used to train and tune your custom
     * language model, in addition to the data access role ARN (Amazon Resource Name)
     * that has permissions to access these data.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const { return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    template<typename InputDataConfigT = InputDataConfig>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = InputDataConfig>
    LanguageModel& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    CLMLanguageCode m_languageCode{CLMLanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    BaseModelName m_baseModelName{BaseModelName::NOT_SET};
    bool m_baseModelNameHasBeenSet = false;

    ModelStatus m_modelStatus{ModelStatus::NOT_SET};
    bool m_modelStatusHasBeenSet = false;

    bool m_upgradeAvailability{false};
    bool m_upgradeAvailabilityHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
