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


    /**
     * <p>The ID of the translation job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the translation job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID of the translation job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the translation job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID of the translation job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID of the translation job.</p>
     */
    inline TextTranslationJobProperties& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the translation job.</p>
     */
    inline TextTranslationJobProperties& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the translation job.</p>
     */
    inline TextTranslationJobProperties& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The user-defined name of the translation job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The user-defined name of the translation job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The user-defined name of the translation job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The user-defined name of the translation job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The user-defined name of the translation job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The user-defined name of the translation job.</p>
     */
    inline TextTranslationJobProperties& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The user-defined name of the translation job.</p>
     */
    inline TextTranslationJobProperties& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The user-defined name of the translation job.</p>
     */
    inline TextTranslationJobProperties& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The status of the translation job.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The status of the translation job.</p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>The status of the translation job.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The status of the translation job.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>The status of the translation job.</p>
     */
    inline TextTranslationJobProperties& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The status of the translation job.</p>
     */
    inline TextTranslationJobProperties& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The number of documents successfully and unsuccessfully processed during the
     * translation job.</p>
     */
    inline const JobDetails& GetJobDetails() const{ return m_jobDetails; }

    /**
     * <p>The number of documents successfully and unsuccessfully processed during the
     * translation job.</p>
     */
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }

    /**
     * <p>The number of documents successfully and unsuccessfully processed during the
     * translation job.</p>
     */
    inline void SetJobDetails(const JobDetails& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = value; }

    /**
     * <p>The number of documents successfully and unsuccessfully processed during the
     * translation job.</p>
     */
    inline void SetJobDetails(JobDetails&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::move(value); }

    /**
     * <p>The number of documents successfully and unsuccessfully processed during the
     * translation job.</p>
     */
    inline TextTranslationJobProperties& WithJobDetails(const JobDetails& value) { SetJobDetails(value); return *this;}

    /**
     * <p>The number of documents successfully and unsuccessfully processed during the
     * translation job.</p>
     */
    inline TextTranslationJobProperties& WithJobDetails(JobDetails&& value) { SetJobDetails(std::move(value)); return *this;}


    /**
     * <p>The language code of the language of the source text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const{ return m_sourceLanguageCode; }

    /**
     * <p>The language code of the language of the source text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }

    /**
     * <p>The language code of the language of the source text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline void SetSourceLanguageCode(const Aws::String& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = value; }

    /**
     * <p>The language code of the language of the source text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline void SetSourceLanguageCode(Aws::String&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::move(value); }

    /**
     * <p>The language code of the language of the source text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline void SetSourceLanguageCode(const char* value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode.assign(value); }

    /**
     * <p>The language code of the language of the source text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline TextTranslationJobProperties& WithSourceLanguageCode(const Aws::String& value) { SetSourceLanguageCode(value); return *this;}

    /**
     * <p>The language code of the language of the source text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline TextTranslationJobProperties& WithSourceLanguageCode(Aws::String&& value) { SetSourceLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code of the language of the source text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline TextTranslationJobProperties& WithSourceLanguageCode(const char* value) { SetSourceLanguageCode(value); return *this;}


    /**
     * <p>The language code of the language of the target text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetLanguageCodes() const{ return m_targetLanguageCodes; }

    /**
     * <p>The language code of the language of the target text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline bool TargetLanguageCodesHasBeenSet() const { return m_targetLanguageCodesHasBeenSet; }

    /**
     * <p>The language code of the language of the target text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline void SetTargetLanguageCodes(const Aws::Vector<Aws::String>& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = value; }

    /**
     * <p>The language code of the language of the target text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline void SetTargetLanguageCodes(Aws::Vector<Aws::String>&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = std::move(value); }

    /**
     * <p>The language code of the language of the target text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline TextTranslationJobProperties& WithTargetLanguageCodes(const Aws::Vector<Aws::String>& value) { SetTargetLanguageCodes(value); return *this;}

    /**
     * <p>The language code of the language of the target text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline TextTranslationJobProperties& WithTargetLanguageCodes(Aws::Vector<Aws::String>&& value) { SetTargetLanguageCodes(std::move(value)); return *this;}

    /**
     * <p>The language code of the language of the target text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline TextTranslationJobProperties& AddTargetLanguageCodes(const Aws::String& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(value); return *this; }

    /**
     * <p>The language code of the language of the target text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline TextTranslationJobProperties& AddTargetLanguageCodes(Aws::String&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(std::move(value)); return *this; }

    /**
     * <p>The language code of the language of the target text. The language must be a
     * language supported by Amazon Translate.</p>
     */
    inline TextTranslationJobProperties& AddTargetLanguageCodes(const char* value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(value); return *this; }


    /**
     * <p>A list containing the names of the terminologies applied to a translation
     * job. Only one terminology can be applied per <a>StartTextTranslationJob</a>
     * request at this time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminologyNames() const{ return m_terminologyNames; }

    /**
     * <p>A list containing the names of the terminologies applied to a translation
     * job. Only one terminology can be applied per <a>StartTextTranslationJob</a>
     * request at this time.</p>
     */
    inline bool TerminologyNamesHasBeenSet() const { return m_terminologyNamesHasBeenSet; }

    /**
     * <p>A list containing the names of the terminologies applied to a translation
     * job. Only one terminology can be applied per <a>StartTextTranslationJob</a>
     * request at this time.</p>
     */
    inline void SetTerminologyNames(const Aws::Vector<Aws::String>& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = value; }

    /**
     * <p>A list containing the names of the terminologies applied to a translation
     * job. Only one terminology can be applied per <a>StartTextTranslationJob</a>
     * request at this time.</p>
     */
    inline void SetTerminologyNames(Aws::Vector<Aws::String>&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = std::move(value); }

    /**
     * <p>A list containing the names of the terminologies applied to a translation
     * job. Only one terminology can be applied per <a>StartTextTranslationJob</a>
     * request at this time.</p>
     */
    inline TextTranslationJobProperties& WithTerminologyNames(const Aws::Vector<Aws::String>& value) { SetTerminologyNames(value); return *this;}

    /**
     * <p>A list containing the names of the terminologies applied to a translation
     * job. Only one terminology can be applied per <a>StartTextTranslationJob</a>
     * request at this time.</p>
     */
    inline TextTranslationJobProperties& WithTerminologyNames(Aws::Vector<Aws::String>&& value) { SetTerminologyNames(std::move(value)); return *this;}

    /**
     * <p>A list containing the names of the terminologies applied to a translation
     * job. Only one terminology can be applied per <a>StartTextTranslationJob</a>
     * request at this time.</p>
     */
    inline TextTranslationJobProperties& AddTerminologyNames(const Aws::String& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(value); return *this; }

    /**
     * <p>A list containing the names of the terminologies applied to a translation
     * job. Only one terminology can be applied per <a>StartTextTranslationJob</a>
     * request at this time.</p>
     */
    inline TextTranslationJobProperties& AddTerminologyNames(Aws::String&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list containing the names of the terminologies applied to a translation
     * job. Only one terminology can be applied per <a>StartTextTranslationJob</a>
     * request at this time.</p>
     */
    inline TextTranslationJobProperties& AddTerminologyNames(const char* value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(value); return *this; }


    /**
     * <p>A list containing the names of the parallel data resources applied to the
     * translation job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParallelDataNames() const{ return m_parallelDataNames; }

    /**
     * <p>A list containing the names of the parallel data resources applied to the
     * translation job.</p>
     */
    inline bool ParallelDataNamesHasBeenSet() const { return m_parallelDataNamesHasBeenSet; }

    /**
     * <p>A list containing the names of the parallel data resources applied to the
     * translation job.</p>
     */
    inline void SetParallelDataNames(const Aws::Vector<Aws::String>& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames = value; }

    /**
     * <p>A list containing the names of the parallel data resources applied to the
     * translation job.</p>
     */
    inline void SetParallelDataNames(Aws::Vector<Aws::String>&& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames = std::move(value); }

    /**
     * <p>A list containing the names of the parallel data resources applied to the
     * translation job.</p>
     */
    inline TextTranslationJobProperties& WithParallelDataNames(const Aws::Vector<Aws::String>& value) { SetParallelDataNames(value); return *this;}

    /**
     * <p>A list containing the names of the parallel data resources applied to the
     * translation job.</p>
     */
    inline TextTranslationJobProperties& WithParallelDataNames(Aws::Vector<Aws::String>&& value) { SetParallelDataNames(std::move(value)); return *this;}

    /**
     * <p>A list containing the names of the parallel data resources applied to the
     * translation job.</p>
     */
    inline TextTranslationJobProperties& AddParallelDataNames(const Aws::String& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames.push_back(value); return *this; }

    /**
     * <p>A list containing the names of the parallel data resources applied to the
     * translation job.</p>
     */
    inline TextTranslationJobProperties& AddParallelDataNames(Aws::String&& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list containing the names of the parallel data resources applied to the
     * translation job.</p>
     */
    inline TextTranslationJobProperties& AddParallelDataNames(const char* value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames.push_back(value); return *this; }


    /**
     * <p>An explanation of any errors that may have occurred during the translation
     * job.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>An explanation of any errors that may have occurred during the translation
     * job.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>An explanation of any errors that may have occurred during the translation
     * job.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>An explanation of any errors that may have occurred during the translation
     * job.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>An explanation of any errors that may have occurred during the translation
     * job.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>An explanation of any errors that may have occurred during the translation
     * job.</p>
     */
    inline TextTranslationJobProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>An explanation of any errors that may have occurred during the translation
     * job.</p>
     */
    inline TextTranslationJobProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>An explanation of any errors that may have occurred during the translation
     * job.</p>
     */
    inline TextTranslationJobProperties& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The time at which the translation job was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedTime() const{ return m_submittedTime; }

    /**
     * <p>The time at which the translation job was submitted.</p>
     */
    inline bool SubmittedTimeHasBeenSet() const { return m_submittedTimeHasBeenSet; }

    /**
     * <p>The time at which the translation job was submitted.</p>
     */
    inline void SetSubmittedTime(const Aws::Utils::DateTime& value) { m_submittedTimeHasBeenSet = true; m_submittedTime = value; }

    /**
     * <p>The time at which the translation job was submitted.</p>
     */
    inline void SetSubmittedTime(Aws::Utils::DateTime&& value) { m_submittedTimeHasBeenSet = true; m_submittedTime = std::move(value); }

    /**
     * <p>The time at which the translation job was submitted.</p>
     */
    inline TextTranslationJobProperties& WithSubmittedTime(const Aws::Utils::DateTime& value) { SetSubmittedTime(value); return *this;}

    /**
     * <p>The time at which the translation job was submitted.</p>
     */
    inline TextTranslationJobProperties& WithSubmittedTime(Aws::Utils::DateTime&& value) { SetSubmittedTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the translation job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time at which the translation job ended.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time at which the translation job ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time at which the translation job ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time at which the translation job ended.</p>
     */
    inline TextTranslationJobProperties& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time at which the translation job ended.</p>
     */
    inline TextTranslationJobProperties& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The input configuration properties that were specified when the job was
     * requested.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>The input configuration properties that were specified when the job was
     * requested.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>The input configuration properties that were specified when the job was
     * requested.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>The input configuration properties that were specified when the job was
     * requested.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>The input configuration properties that were specified when the job was
     * requested.</p>
     */
    inline TextTranslationJobProperties& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>The input configuration properties that were specified when the job was
     * requested.</p>
     */
    inline TextTranslationJobProperties& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The output configuration properties that were specified when the job was
     * requested.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>The output configuration properties that were specified when the job was
     * requested.</p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>The output configuration properties that were specified when the job was
     * requested.</p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>The output configuration properties that were specified when the job was
     * requested.</p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>The output configuration properties that were specified when the job was
     * requested.</p>
     */
    inline TextTranslationJobProperties& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>The output configuration properties that were specified when the job was
     * requested.</p>
     */
    inline TextTranslationJobProperties& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that granted Amazon Translate read access to the job's input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that granted Amazon Translate read access to the job's input data.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that granted Amazon Translate read access to the job's input data.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that granted Amazon Translate read access to the job's input data.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that granted Amazon Translate read access to the job's input data.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that granted Amazon Translate read access to the job's input data.</p>
     */
    inline TextTranslationJobProperties& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that granted Amazon Translate read access to the job's input data.</p>
     */
    inline TextTranslationJobProperties& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that granted Amazon Translate read access to the job's input data.</p>
     */
    inline TextTranslationJobProperties& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>Settings that configure the translation output.</p>
     */
    inline const TranslationSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>Settings that configure the translation output.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Settings that configure the translation output.</p>
     */
    inline void SetSettings(const TranslationSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Settings that configure the translation output.</p>
     */
    inline void SetSettings(TranslationSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Settings that configure the translation output.</p>
     */
    inline TextTranslationJobProperties& WithSettings(const TranslationSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>Settings that configure the translation output.</p>
     */
    inline TextTranslationJobProperties& WithSettings(TranslationSettings&& value) { SetSettings(std::move(value)); return *this;}

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
