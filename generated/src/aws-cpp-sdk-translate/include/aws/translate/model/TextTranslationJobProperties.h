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
    AWS_TRANSLATE_API TextTranslationJobProperties();
    AWS_TRANSLATE_API TextTranslationJobProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API TextTranslationJobProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the translation job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline TextTranslationJobProperties& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline TextTranslationJobProperties& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline TextTranslationJobProperties& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined name of the translation job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline TextTranslationJobProperties& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline TextTranslationJobProperties& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline TextTranslationJobProperties& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the translation job.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }
    inline TextTranslationJobProperties& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline TextTranslationJobProperties& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of documents successfully and unsuccessfully processed during the
     * translation job.</p>
     */
    inline const JobDetails& GetJobDetails() const{ return m_jobDetails; }
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }
    inline void SetJobDetails(const JobDetails& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = value; }
    inline void SetJobDetails(JobDetails&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::move(value); }
    inline TextTranslationJobProperties& WithJobDetails(const JobDetails& value) { SetJobDetails(value); return *this;}
    inline TextTranslationJobProperties& WithJobDetails(JobDetails&& value) { SetJobDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the language of the source text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const{ return m_sourceLanguageCode; }
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }
    inline void SetSourceLanguageCode(const Aws::String& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = value; }
    inline void SetSourceLanguageCode(Aws::String&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::move(value); }
    inline void SetSourceLanguageCode(const char* value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode.assign(value); }
    inline TextTranslationJobProperties& WithSourceLanguageCode(const Aws::String& value) { SetSourceLanguageCode(value); return *this;}
    inline TextTranslationJobProperties& WithSourceLanguageCode(Aws::String&& value) { SetSourceLanguageCode(std::move(value)); return *this;}
    inline TextTranslationJobProperties& WithSourceLanguageCode(const char* value) { SetSourceLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the language of the target text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetLanguageCodes() const{ return m_targetLanguageCodes; }
    inline bool TargetLanguageCodesHasBeenSet() const { return m_targetLanguageCodesHasBeenSet; }
    inline void SetTargetLanguageCodes(const Aws::Vector<Aws::String>& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = value; }
    inline void SetTargetLanguageCodes(Aws::Vector<Aws::String>&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = std::move(value); }
    inline TextTranslationJobProperties& WithTargetLanguageCodes(const Aws::Vector<Aws::String>& value) { SetTargetLanguageCodes(value); return *this;}
    inline TextTranslationJobProperties& WithTargetLanguageCodes(Aws::Vector<Aws::String>&& value) { SetTargetLanguageCodes(std::move(value)); return *this;}
    inline TextTranslationJobProperties& AddTargetLanguageCodes(const Aws::String& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(value); return *this; }
    inline TextTranslationJobProperties& AddTargetLanguageCodes(Aws::String&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(std::move(value)); return *this; }
    inline TextTranslationJobProperties& AddTargetLanguageCodes(const char* value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list containing the names of the terminologies applied to a translation
     * job. Only one terminology can be applied per <a>StartTextTranslationJob</a>
     * request at this time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminologyNames() const{ return m_terminologyNames; }
    inline bool TerminologyNamesHasBeenSet() const { return m_terminologyNamesHasBeenSet; }
    inline void SetTerminologyNames(const Aws::Vector<Aws::String>& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = value; }
    inline void SetTerminologyNames(Aws::Vector<Aws::String>&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = std::move(value); }
    inline TextTranslationJobProperties& WithTerminologyNames(const Aws::Vector<Aws::String>& value) { SetTerminologyNames(value); return *this;}
    inline TextTranslationJobProperties& WithTerminologyNames(Aws::Vector<Aws::String>&& value) { SetTerminologyNames(std::move(value)); return *this;}
    inline TextTranslationJobProperties& AddTerminologyNames(const Aws::String& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(value); return *this; }
    inline TextTranslationJobProperties& AddTerminologyNames(Aws::String&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(std::move(value)); return *this; }
    inline TextTranslationJobProperties& AddTerminologyNames(const char* value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list containing the names of the parallel data resources applied to the
     * translation job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParallelDataNames() const{ return m_parallelDataNames; }
    inline bool ParallelDataNamesHasBeenSet() const { return m_parallelDataNamesHasBeenSet; }
    inline void SetParallelDataNames(const Aws::Vector<Aws::String>& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames = value; }
    inline void SetParallelDataNames(Aws::Vector<Aws::String>&& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames = std::move(value); }
    inline TextTranslationJobProperties& WithParallelDataNames(const Aws::Vector<Aws::String>& value) { SetParallelDataNames(value); return *this;}
    inline TextTranslationJobProperties& WithParallelDataNames(Aws::Vector<Aws::String>&& value) { SetParallelDataNames(std::move(value)); return *this;}
    inline TextTranslationJobProperties& AddParallelDataNames(const Aws::String& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames.push_back(value); return *this; }
    inline TextTranslationJobProperties& AddParallelDataNames(Aws::String&& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames.push_back(std::move(value)); return *this; }
    inline TextTranslationJobProperties& AddParallelDataNames(const char* value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An explanation of any errors that may have occurred during the translation
     * job.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline TextTranslationJobProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline TextTranslationJobProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline TextTranslationJobProperties& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the translation job was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedTime() const{ return m_submittedTime; }
    inline bool SubmittedTimeHasBeenSet() const { return m_submittedTimeHasBeenSet; }
    inline void SetSubmittedTime(const Aws::Utils::DateTime& value) { m_submittedTimeHasBeenSet = true; m_submittedTime = value; }
    inline void SetSubmittedTime(Aws::Utils::DateTime&& value) { m_submittedTimeHasBeenSet = true; m_submittedTime = std::move(value); }
    inline TextTranslationJobProperties& WithSubmittedTime(const Aws::Utils::DateTime& value) { SetSubmittedTime(value); return *this;}
    inline TextTranslationJobProperties& WithSubmittedTime(Aws::Utils::DateTime&& value) { SetSubmittedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the translation job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline TextTranslationJobProperties& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline TextTranslationJobProperties& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input configuration properties that were specified when the job was
     * requested.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }
    inline TextTranslationJobProperties& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}
    inline TextTranslationJobProperties& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration properties that were specified when the job was
     * requested.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline TextTranslationJobProperties& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline TextTranslationJobProperties& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that granted Amazon Translate read access to the job's input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }
    inline TextTranslationJobProperties& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}
    inline TextTranslationJobProperties& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}
    inline TextTranslationJobProperties& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings that modify the translation output.</p>
     */
    inline const TranslationSettings& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const TranslationSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(TranslationSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline TextTranslationJobProperties& WithSettings(const TranslationSettings& value) { SetSettings(value); return *this;}
    inline TextTranslationJobProperties& WithSettings(TranslationSettings&& value) { SetSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobStatus m_jobStatus;
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

    Aws::Utils::DateTime m_submittedTime;
    bool m_submittedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
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
