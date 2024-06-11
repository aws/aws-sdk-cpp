﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/InputDataConfig.h>
#include <aws/translate/model/OutputDataConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/translate/model/TranslationSettings.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Translate
{
namespace Model
{

  /**
   */
  class StartTextTranslationJobRequest : public TranslateRequest
  {
  public:
    AWS_TRANSLATE_API StartTextTranslationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTextTranslationJob"; }

    AWS_TRANSLATE_API Aws::String SerializePayload() const override;

    AWS_TRANSLATE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the batch translation job to be performed.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline StartTextTranslationJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline StartTextTranslationJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline StartTextTranslationJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the format and location of the input documents for the translation
     * job.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }
    inline StartTextTranslationJobRequest& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}
    inline StartTextTranslationJobRequest& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the S3 folder to which your job output will be saved. </p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline StartTextTranslationJobRequest& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline StartTextTranslationJobRequest& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that grants Amazon Translate read access to your input data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/identity-and-access-management.html">Identity
     * and access management </a>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }
    inline StartTextTranslationJobRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}
    inline StartTextTranslationJobRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}
    inline StartTextTranslationJobRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the input language. Specify the language if all input
     * documents share the same language. If you don't know the language of the source
     * files, or your input documents contains different source languages, select
     * <code>auto</code>. Amazon Translate auto detects the source language for each
     * input document. For a list of supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const{ return m_sourceLanguageCode; }
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }
    inline void SetSourceLanguageCode(const Aws::String& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = value; }
    inline void SetSourceLanguageCode(Aws::String&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::move(value); }
    inline void SetSourceLanguageCode(const char* value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode.assign(value); }
    inline StartTextTranslationJobRequest& WithSourceLanguageCode(const Aws::String& value) { SetSourceLanguageCode(value); return *this;}
    inline StartTextTranslationJobRequest& WithSourceLanguageCode(Aws::String&& value) { SetSourceLanguageCode(std::move(value)); return *this;}
    inline StartTextTranslationJobRequest& WithSourceLanguageCode(const char* value) { SetSourceLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target languages of the translation job. Enter up to 10 language codes.
     * Each input file is translated into each target language.</p> <p>Each language
     * code is 2 or 5 characters long. For a list of language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetLanguageCodes() const{ return m_targetLanguageCodes; }
    inline bool TargetLanguageCodesHasBeenSet() const { return m_targetLanguageCodesHasBeenSet; }
    inline void SetTargetLanguageCodes(const Aws::Vector<Aws::String>& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = value; }
    inline void SetTargetLanguageCodes(Aws::Vector<Aws::String>&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = std::move(value); }
    inline StartTextTranslationJobRequest& WithTargetLanguageCodes(const Aws::Vector<Aws::String>& value) { SetTargetLanguageCodes(value); return *this;}
    inline StartTextTranslationJobRequest& WithTargetLanguageCodes(Aws::Vector<Aws::String>&& value) { SetTargetLanguageCodes(std::move(value)); return *this;}
    inline StartTextTranslationJobRequest& AddTargetLanguageCodes(const Aws::String& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(value); return *this; }
    inline StartTextTranslationJobRequest& AddTargetLanguageCodes(Aws::String&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(std::move(value)); return *this; }
    inline StartTextTranslationJobRequest& AddTargetLanguageCodes(const char* value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a custom terminology resource to add to the translation job. This
     * resource lists examples source terms and the desired translation for each
     * term.</p> <p>This parameter accepts only one custom terminology resource.</p>
     * <p>If you specify multiple target languages for the job, translate uses the
     * designated terminology for each requested target language that has an entry for
     * the source term in the terminology file.</p> <p>For a list of available custom
     * terminology resources, use the <a>ListTerminologies</a> operation.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/how-custom-terminology.html">Custom
     * terminology</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminologyNames() const{ return m_terminologyNames; }
    inline bool TerminologyNamesHasBeenSet() const { return m_terminologyNamesHasBeenSet; }
    inline void SetTerminologyNames(const Aws::Vector<Aws::String>& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = value; }
    inline void SetTerminologyNames(Aws::Vector<Aws::String>&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = std::move(value); }
    inline StartTextTranslationJobRequest& WithTerminologyNames(const Aws::Vector<Aws::String>& value) { SetTerminologyNames(value); return *this;}
    inline StartTextTranslationJobRequest& WithTerminologyNames(Aws::Vector<Aws::String>&& value) { SetTerminologyNames(std::move(value)); return *this;}
    inline StartTextTranslationJobRequest& AddTerminologyNames(const Aws::String& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(value); return *this; }
    inline StartTextTranslationJobRequest& AddTerminologyNames(Aws::String&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(std::move(value)); return *this; }
    inline StartTextTranslationJobRequest& AddTerminologyNames(const char* value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a parallel data resource to add to the translation job. This
     * resource consists of examples that show how you want segments of text to be
     * translated. If you specify multiple target languages for the job, the parallel
     * data file must include translations for all the target languages.</p> <p>When
     * you add parallel data to a translation job, you create an <i>Active Custom
     * Translation</i> job. </p> <p>This parameter accepts only one parallel data
     * resource.</p>  <p>Active Custom Translation jobs are priced at a higher
     * rate than other jobs that don't use parallel data. For more information, see <a
     * href="http://aws.amazon.com/translate/pricing/">Amazon Translate
     * pricing</a>.</p>  <p>For a list of available parallel data resources, use
     * the <a>ListParallelData</a> operation.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/customizing-translations-parallel-data.html">
     * Customizing your translations with parallel data</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParallelDataNames() const{ return m_parallelDataNames; }
    inline bool ParallelDataNamesHasBeenSet() const { return m_parallelDataNamesHasBeenSet; }
    inline void SetParallelDataNames(const Aws::Vector<Aws::String>& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames = value; }
    inline void SetParallelDataNames(Aws::Vector<Aws::String>&& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames = std::move(value); }
    inline StartTextTranslationJobRequest& WithParallelDataNames(const Aws::Vector<Aws::String>& value) { SetParallelDataNames(value); return *this;}
    inline StartTextTranslationJobRequest& WithParallelDataNames(Aws::Vector<Aws::String>&& value) { SetParallelDataNames(std::move(value)); return *this;}
    inline StartTextTranslationJobRequest& AddParallelDataNames(const Aws::String& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames.push_back(value); return *this; }
    inline StartTextTranslationJobRequest& AddParallelDataNames(Aws::String&& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames.push_back(std::move(value)); return *this; }
    inline StartTextTranslationJobRequest& AddParallelDataNames(const char* value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the request. This token is generated for you when
     * using the Amazon Translate SDK.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartTextTranslationJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartTextTranslationJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartTextTranslationJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings to configure your translation output. You can configure the
     * following options:</p> <ul> <li> <p>Brevity: not supported.</p> </li> <li>
     * <p>Formality: sets the formality level of the output text.</p> </li> <li>
     * <p>Profanity: masks profane words and phrases in your translation output.</p>
     * </li> </ul>
     */
    inline const TranslationSettings& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const TranslationSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(TranslationSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline StartTextTranslationJobRequest& WithSettings(const TranslationSettings& value) { SetSettings(value); return *this;}
    inline StartTextTranslationJobRequest& WithSettings(TranslationSettings&& value) { SetSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_sourceLanguageCode;
    bool m_sourceLanguageCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetLanguageCodes;
    bool m_targetLanguageCodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_terminologyNames;
    bool m_terminologyNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_parallelDataNames;
    bool m_parallelDataNamesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    TranslationSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
