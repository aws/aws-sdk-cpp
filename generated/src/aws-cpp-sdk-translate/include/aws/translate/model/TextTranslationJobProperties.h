/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/JobStatus.h>
#include <aws/translate/model/JobDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/translate/model/InputDataConfig.h>
#include <aws/translate/model/OutputDataConfig.h>
#include <aws/translate/model/TranslationSettings.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>Provides information about a translation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TextTranslationJobProperties">AWS
   * API Reference</a></p>
   */
  class TextTranslationJobProperties
  {
  public:
    AWS_TRANSLATE_API TextTranslationJobProperties() = default;
    AWS_TRANSLATE_API TextTranslationJobProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API TextTranslationJobProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the translation job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    TextTranslationJobProperties& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined name of the translation job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    TextTranslationJobProperties& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the translation job.</p>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline TextTranslationJobProperties& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of documents successfully and unsuccessfully processed during the
     * translation job.</p>
     */
    inline const JobDetails& GetJobDetails() const { return m_jobDetails; }
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }
    template<typename JobDetailsT = JobDetails>
    void SetJobDetails(JobDetailsT&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::forward<JobDetailsT>(value); }
    template<typename JobDetailsT = JobDetails>
    TextTranslationJobProperties& WithJobDetails(JobDetailsT&& value) { SetJobDetails(std::forward<JobDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the language of the source text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const { return m_sourceLanguageCode; }
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }
    template<typename SourceLanguageCodeT = Aws::String>
    void SetSourceLanguageCode(SourceLanguageCodeT&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::forward<SourceLanguageCodeT>(value); }
    template<typename SourceLanguageCodeT = Aws::String>
    TextTranslationJobProperties& WithSourceLanguageCode(SourceLanguageCodeT&& value) { SetSourceLanguageCode(std::forward<SourceLanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the language of the target text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetLanguageCodes() const { return m_targetLanguageCodes; }
    inline bool TargetLanguageCodesHasBeenSet() const { return m_targetLanguageCodesHasBeenSet; }
    template<typename TargetLanguageCodesT = Aws::Vector<Aws::String>>
    void SetTargetLanguageCodes(TargetLanguageCodesT&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = std::forward<TargetLanguageCodesT>(value); }
    template<typename TargetLanguageCodesT = Aws::Vector<Aws::String>>
    TextTranslationJobProperties& WithTargetLanguageCodes(TargetLanguageCodesT&& value) { SetTargetLanguageCodes(std::forward<TargetLanguageCodesT>(value)); return *this;}
    template<typename TargetLanguageCodesT = Aws::String>
    TextTranslationJobProperties& AddTargetLanguageCodes(TargetLanguageCodesT&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.emplace_back(std::forward<TargetLanguageCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list containing the names of the terminologies applied to a translation
     * job. Only one terminology can be applied per <a>StartTextTranslationJob</a>
     * request at this time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminologyNames() const { return m_terminologyNames; }
    inline bool TerminologyNamesHasBeenSet() const { return m_terminologyNamesHasBeenSet; }
    template<typename TerminologyNamesT = Aws::Vector<Aws::String>>
    void SetTerminologyNames(TerminologyNamesT&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = std::forward<TerminologyNamesT>(value); }
    template<typename TerminologyNamesT = Aws::Vector<Aws::String>>
    TextTranslationJobProperties& WithTerminologyNames(TerminologyNamesT&& value) { SetTerminologyNames(std::forward<TerminologyNamesT>(value)); return *this;}
    template<typename TerminologyNamesT = Aws::String>
    TextTranslationJobProperties& AddTerminologyNames(TerminologyNamesT&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.emplace_back(std::forward<TerminologyNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list containing the names of the parallel data resources applied to the
     * translation job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParallelDataNames() const { return m_parallelDataNames; }
    inline bool ParallelDataNamesHasBeenSet() const { return m_parallelDataNamesHasBeenSet; }
    template<typename ParallelDataNamesT = Aws::Vector<Aws::String>>
    void SetParallelDataNames(ParallelDataNamesT&& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames = std::forward<ParallelDataNamesT>(value); }
    template<typename ParallelDataNamesT = Aws::Vector<Aws::String>>
    TextTranslationJobProperties& WithParallelDataNames(ParallelDataNamesT&& value) { SetParallelDataNames(std::forward<ParallelDataNamesT>(value)); return *this;}
    template<typename ParallelDataNamesT = Aws::String>
    TextTranslationJobProperties& AddParallelDataNames(ParallelDataNamesT&& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames.emplace_back(std::forward<ParallelDataNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An explanation of any errors that may have occurred during the translation
     * job.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    TextTranslationJobProperties& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the translation job was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedTime() const { return m_submittedTime; }
    inline bool SubmittedTimeHasBeenSet() const { return m_submittedTimeHasBeenSet; }
    template<typename SubmittedTimeT = Aws::Utils::DateTime>
    void SetSubmittedTime(SubmittedTimeT&& value) { m_submittedTimeHasBeenSet = true; m_submittedTime = std::forward<SubmittedTimeT>(value); }
    template<typename SubmittedTimeT = Aws::Utils::DateTime>
    TextTranslationJobProperties& WithSubmittedTime(SubmittedTimeT&& value) { SetSubmittedTime(std::forward<SubmittedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the translation job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    TextTranslationJobProperties& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input configuration properties that were specified when the job was
     * requested.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const { return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    template<typename InputDataConfigT = InputDataConfig>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = InputDataConfig>
    TextTranslationJobProperties& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration properties that were specified when the job was
     * requested.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    template<typename OutputDataConfigT = OutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = OutputDataConfig>
    TextTranslationJobProperties& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that granted Amazon Translate read access to the job's input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    TextTranslationJobProperties& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings that modify the translation output.</p>
     */
    inline const TranslationSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = TranslationSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = TranslationSettings>
    TextTranslationJobProperties& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    JobDetails m_jobDetails;
    bool m_jobDetailsHasBeenSet = false;

    Aws::String m_sourceLanguageCode;
    bool m_sourceLanguageCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetLanguageCodes;
    bool m_targetLanguageCodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_terminologyNames;
    bool m_terminologyNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_parallelDataNames;
    bool m_parallelDataNamesHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_submittedTime{};
    bool m_submittedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    TranslationSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
