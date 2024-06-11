/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/AlgorithmImage.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/personalize/model/DefaultHyperParameterRanges.h>
#include <aws/core/utils/DateTime.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Describes a custom algorithm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/Algorithm">AWS
   * API Reference</a></p>
   */
  class Algorithm
  {
  public:
    AWS_PERSONALIZE_API Algorithm();
    AWS_PERSONALIZE_API Algorithm(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Algorithm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the algorithm.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Algorithm& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Algorithm& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Algorithm& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const{ return m_algorithmArn; }
    inline bool AlgorithmArnHasBeenSet() const { return m_algorithmArnHasBeenSet; }
    inline void SetAlgorithmArn(const Aws::String& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = value; }
    inline void SetAlgorithmArn(Aws::String&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::move(value); }
    inline void SetAlgorithmArn(const char* value) { m_algorithmArnHasBeenSet = true; m_algorithmArn.assign(value); }
    inline Algorithm& WithAlgorithmArn(const Aws::String& value) { SetAlgorithmArn(value); return *this;}
    inline Algorithm& WithAlgorithmArn(Aws::String&& value) { SetAlgorithmArn(std::move(value)); return *this;}
    inline Algorithm& WithAlgorithmArn(const char* value) { SetAlgorithmArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the Docker container for the algorithm image.</p>
     */
    inline const AlgorithmImage& GetAlgorithmImage() const{ return m_algorithmImage; }
    inline bool AlgorithmImageHasBeenSet() const { return m_algorithmImageHasBeenSet; }
    inline void SetAlgorithmImage(const AlgorithmImage& value) { m_algorithmImageHasBeenSet = true; m_algorithmImage = value; }
    inline void SetAlgorithmImage(AlgorithmImage&& value) { m_algorithmImageHasBeenSet = true; m_algorithmImage = std::move(value); }
    inline Algorithm& WithAlgorithmImage(const AlgorithmImage& value) { SetAlgorithmImage(value); return *this;}
    inline Algorithm& WithAlgorithmImage(AlgorithmImage&& value) { SetAlgorithmImage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the default hyperparameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultHyperParameters() const{ return m_defaultHyperParameters; }
    inline bool DefaultHyperParametersHasBeenSet() const { return m_defaultHyperParametersHasBeenSet; }
    inline void SetDefaultHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_defaultHyperParametersHasBeenSet = true; m_defaultHyperParameters = value; }
    inline void SetDefaultHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_defaultHyperParametersHasBeenSet = true; m_defaultHyperParameters = std::move(value); }
    inline Algorithm& WithDefaultHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetDefaultHyperParameters(value); return *this;}
    inline Algorithm& WithDefaultHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetDefaultHyperParameters(std::move(value)); return *this;}
    inline Algorithm& AddDefaultHyperParameters(const Aws::String& key, const Aws::String& value) { m_defaultHyperParametersHasBeenSet = true; m_defaultHyperParameters.emplace(key, value); return *this; }
    inline Algorithm& AddDefaultHyperParameters(Aws::String&& key, const Aws::String& value) { m_defaultHyperParametersHasBeenSet = true; m_defaultHyperParameters.emplace(std::move(key), value); return *this; }
    inline Algorithm& AddDefaultHyperParameters(const Aws::String& key, Aws::String&& value) { m_defaultHyperParametersHasBeenSet = true; m_defaultHyperParameters.emplace(key, std::move(value)); return *this; }
    inline Algorithm& AddDefaultHyperParameters(Aws::String&& key, Aws::String&& value) { m_defaultHyperParametersHasBeenSet = true; m_defaultHyperParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline Algorithm& AddDefaultHyperParameters(const char* key, Aws::String&& value) { m_defaultHyperParametersHasBeenSet = true; m_defaultHyperParameters.emplace(key, std::move(value)); return *this; }
    inline Algorithm& AddDefaultHyperParameters(Aws::String&& key, const char* value) { m_defaultHyperParametersHasBeenSet = true; m_defaultHyperParameters.emplace(std::move(key), value); return *this; }
    inline Algorithm& AddDefaultHyperParameters(const char* key, const char* value) { m_defaultHyperParametersHasBeenSet = true; m_defaultHyperParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the default hyperparameters, their ranges, and whether they are
     * tunable. A tunable hyperparameter can have its value determined during
     * hyperparameter optimization (HPO).</p>
     */
    inline const DefaultHyperParameterRanges& GetDefaultHyperParameterRanges() const{ return m_defaultHyperParameterRanges; }
    inline bool DefaultHyperParameterRangesHasBeenSet() const { return m_defaultHyperParameterRangesHasBeenSet; }
    inline void SetDefaultHyperParameterRanges(const DefaultHyperParameterRanges& value) { m_defaultHyperParameterRangesHasBeenSet = true; m_defaultHyperParameterRanges = value; }
    inline void SetDefaultHyperParameterRanges(DefaultHyperParameterRanges&& value) { m_defaultHyperParameterRangesHasBeenSet = true; m_defaultHyperParameterRanges = std::move(value); }
    inline Algorithm& WithDefaultHyperParameterRanges(const DefaultHyperParameterRanges& value) { SetDefaultHyperParameterRanges(value); return *this;}
    inline Algorithm& WithDefaultHyperParameterRanges(DefaultHyperParameterRanges&& value) { SetDefaultHyperParameterRanges(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the default maximum number of training jobs and parallel training
     * jobs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultResourceConfig() const{ return m_defaultResourceConfig; }
    inline bool DefaultResourceConfigHasBeenSet() const { return m_defaultResourceConfigHasBeenSet; }
    inline void SetDefaultResourceConfig(const Aws::Map<Aws::String, Aws::String>& value) { m_defaultResourceConfigHasBeenSet = true; m_defaultResourceConfig = value; }
    inline void SetDefaultResourceConfig(Aws::Map<Aws::String, Aws::String>&& value) { m_defaultResourceConfigHasBeenSet = true; m_defaultResourceConfig = std::move(value); }
    inline Algorithm& WithDefaultResourceConfig(const Aws::Map<Aws::String, Aws::String>& value) { SetDefaultResourceConfig(value); return *this;}
    inline Algorithm& WithDefaultResourceConfig(Aws::Map<Aws::String, Aws::String>&& value) { SetDefaultResourceConfig(std::move(value)); return *this;}
    inline Algorithm& AddDefaultResourceConfig(const Aws::String& key, const Aws::String& value) { m_defaultResourceConfigHasBeenSet = true; m_defaultResourceConfig.emplace(key, value); return *this; }
    inline Algorithm& AddDefaultResourceConfig(Aws::String&& key, const Aws::String& value) { m_defaultResourceConfigHasBeenSet = true; m_defaultResourceConfig.emplace(std::move(key), value); return *this; }
    inline Algorithm& AddDefaultResourceConfig(const Aws::String& key, Aws::String&& value) { m_defaultResourceConfigHasBeenSet = true; m_defaultResourceConfig.emplace(key, std::move(value)); return *this; }
    inline Algorithm& AddDefaultResourceConfig(Aws::String&& key, Aws::String&& value) { m_defaultResourceConfigHasBeenSet = true; m_defaultResourceConfig.emplace(std::move(key), std::move(value)); return *this; }
    inline Algorithm& AddDefaultResourceConfig(const char* key, Aws::String&& value) { m_defaultResourceConfigHasBeenSet = true; m_defaultResourceConfig.emplace(key, std::move(value)); return *this; }
    inline Algorithm& AddDefaultResourceConfig(Aws::String&& key, const char* value) { m_defaultResourceConfigHasBeenSet = true; m_defaultResourceConfig.emplace(std::move(key), value); return *this; }
    inline Algorithm& AddDefaultResourceConfig(const char* key, const char* value) { m_defaultResourceConfigHasBeenSet = true; m_defaultResourceConfig.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The training input mode.</p>
     */
    inline const Aws::String& GetTrainingInputMode() const{ return m_trainingInputMode; }
    inline bool TrainingInputModeHasBeenSet() const { return m_trainingInputModeHasBeenSet; }
    inline void SetTrainingInputMode(const Aws::String& value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = value; }
    inline void SetTrainingInputMode(Aws::String&& value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = std::move(value); }
    inline void SetTrainingInputMode(const char* value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode.assign(value); }
    inline Algorithm& WithTrainingInputMode(const Aws::String& value) { SetTrainingInputMode(value); return *this;}
    inline Algorithm& WithTrainingInputMode(Aws::String&& value) { SetTrainingInputMode(std::move(value)); return *this;}
    inline Algorithm& WithTrainingInputMode(const char* value) { SetTrainingInputMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline Algorithm& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline Algorithm& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline Algorithm& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the algorithm was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline Algorithm& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline Algorithm& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the algorithm was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline Algorithm& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline Algorithm& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_algorithmArn;
    bool m_algorithmArnHasBeenSet = false;

    AlgorithmImage m_algorithmImage;
    bool m_algorithmImageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_defaultHyperParameters;
    bool m_defaultHyperParametersHasBeenSet = false;

    DefaultHyperParameterRanges m_defaultHyperParameterRanges;
    bool m_defaultHyperParameterRangesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_defaultResourceConfig;
    bool m_defaultResourceConfigHasBeenSet = false;

    Aws::String m_trainingInputMode;
    bool m_trainingInputModeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
