/**
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
    AWS_TRANSLATE_API StartTextTranslationJobRequest() = default;

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
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    StartTextTranslationJobRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the format and location of the input documents for the translation
     * job.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const { return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    template<typename InputDataConfigT = InputDataConfig>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = InputDataConfig>
    StartTextTranslationJobRequest& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the S3 folder to which your job output will be saved. </p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    template<typename OutputDataConfigT = OutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = OutputDataConfig>
    StartTextTranslationJobRequest& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity Access and Management (IAM)
     * role that grants Amazon Translate read access to your input data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/identity-and-access-management.html">Identity
     * and access management </a>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    StartTextTranslationJobRequest& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
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
    inline const Aws::String& GetSourceLanguageCode() const { return m_sourceLanguageCode; }
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }
    template<typename SourceLanguageCodeT = Aws::String>
    void SetSourceLanguageCode(SourceLanguageCodeT&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::forward<SourceLanguageCodeT>(value); }
    template<typename SourceLanguageCodeT = Aws::String>
    StartTextTranslationJobRequest& WithSourceLanguageCode(SourceLanguageCodeT&& value) { SetSourceLanguageCode(std::forward<SourceLanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target languages of the translation job. Enter up to 10 language codes.
     * Each input file is translated into each target language.</p> <p>Each language
     * code is 2 or 5 characters long. For a list of language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetLanguageCodes() const { return m_targetLanguageCodes; }
    inline bool TargetLanguageCodesHasBeenSet() const { return m_targetLanguageCodesHasBeenSet; }
    template<typename TargetLanguageCodesT = Aws::Vector<Aws::String>>
    void SetTargetLanguageCodes(TargetLanguageCodesT&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = std::forward<TargetLanguageCodesT>(value); }
    template<typename TargetLanguageCodesT = Aws::Vector<Aws::String>>
    StartTextTranslationJobRequest& WithTargetLanguageCodes(TargetLanguageCodesT&& value) { SetTargetLanguageCodes(std::forward<TargetLanguageCodesT>(value)); return *this;}
    template<typename TargetLanguageCodesT = Aws::String>
    StartTextTranslationJobRequest& AddTargetLanguageCodes(TargetLanguageCodesT&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.emplace_back(std::forward<TargetLanguageCodesT>(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetTerminologyNames() const { return m_terminologyNames; }
    inline bool TerminologyNamesHasBeenSet() const { return m_terminologyNamesHasBeenSet; }
    template<typename TerminologyNamesT = Aws::Vector<Aws::String>>
    void SetTerminologyNames(TerminologyNamesT&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = std::forward<TerminologyNamesT>(value); }
    template<typename TerminologyNamesT = Aws::Vector<Aws::String>>
    StartTextTranslationJobRequest& WithTerminologyNames(TerminologyNamesT&& value) { SetTerminologyNames(std::forward<TerminologyNamesT>(value)); return *this;}
    template<typename TerminologyNamesT = Aws::String>
    StartTextTranslationJobRequest& AddTerminologyNames(TerminologyNamesT&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.emplace_back(std::forward<TerminologyNamesT>(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetParallelDataNames() const { return m_parallelDataNames; }
    inline bool ParallelDataNamesHasBeenSet() const { return m_parallelDataNamesHasBeenSet; }
    template<typename ParallelDataNamesT = Aws::Vector<Aws::String>>
    void SetParallelDataNames(ParallelDataNamesT&& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames = std::forward<ParallelDataNamesT>(value); }
    template<typename ParallelDataNamesT = Aws::Vector<Aws::String>>
    StartTextTranslationJobRequest& WithParallelDataNames(ParallelDataNamesT&& value) { SetParallelDataNames(std::forward<ParallelDataNamesT>(value)); return *this;}
    template<typename ParallelDataNamesT = Aws::String>
    StartTextTranslationJobRequest& AddParallelDataNames(ParallelDataNamesT&& value) { m_parallelDataNamesHasBeenSet = true; m_parallelDataNames.emplace_back(std::forward<ParallelDataNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the request. This token is generated for you when
     * using the Amazon Translate SDK.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartTextTranslationJobRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings to configure your translation output. You can configure the
     * following options:</p> <ul> <li> <p>Brevity: not supported.</p> </li> <li>
     * <p>Formality: sets the formality level of the output text.</p> </li> <li>
     * <p>Profanity: masks profane words and phrases in your translation output.</p>
     * </li> </ul>
     */
    inline const TranslationSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = TranslationSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = TranslationSettings>
    StartTextTranslationJobRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
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

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    TranslationSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
