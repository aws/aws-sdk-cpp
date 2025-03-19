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
    AWS_PERSONALIZE_API Algorithm() = default;
    AWS_PERSONALIZE_API Algorithm(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Algorithm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the algorithm.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Algorithm& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const { return m_algorithmArn; }
    inline bool AlgorithmArnHasBeenSet() const { return m_algorithmArnHasBeenSet; }
    template<typename AlgorithmArnT = Aws::String>
    void SetAlgorithmArn(AlgorithmArnT&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::forward<AlgorithmArnT>(value); }
    template<typename AlgorithmArnT = Aws::String>
    Algorithm& WithAlgorithmArn(AlgorithmArnT&& value) { SetAlgorithmArn(std::forward<AlgorithmArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the Docker container for the algorithm image.</p>
     */
    inline const AlgorithmImage& GetAlgorithmImage() const { return m_algorithmImage; }
    inline bool AlgorithmImageHasBeenSet() const { return m_algorithmImageHasBeenSet; }
    template<typename AlgorithmImageT = AlgorithmImage>
    void SetAlgorithmImage(AlgorithmImageT&& value) { m_algorithmImageHasBeenSet = true; m_algorithmImage = std::forward<AlgorithmImageT>(value); }
    template<typename AlgorithmImageT = AlgorithmImage>
    Algorithm& WithAlgorithmImage(AlgorithmImageT&& value) { SetAlgorithmImage(std::forward<AlgorithmImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the default hyperparameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultHyperParameters() const { return m_defaultHyperParameters; }
    inline bool DefaultHyperParametersHasBeenSet() const { return m_defaultHyperParametersHasBeenSet; }
    template<typename DefaultHyperParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetDefaultHyperParameters(DefaultHyperParametersT&& value) { m_defaultHyperParametersHasBeenSet = true; m_defaultHyperParameters = std::forward<DefaultHyperParametersT>(value); }
    template<typename DefaultHyperParametersT = Aws::Map<Aws::String, Aws::String>>
    Algorithm& WithDefaultHyperParameters(DefaultHyperParametersT&& value) { SetDefaultHyperParameters(std::forward<DefaultHyperParametersT>(value)); return *this;}
    template<typename DefaultHyperParametersKeyT = Aws::String, typename DefaultHyperParametersValueT = Aws::String>
    Algorithm& AddDefaultHyperParameters(DefaultHyperParametersKeyT&& key, DefaultHyperParametersValueT&& value) {
      m_defaultHyperParametersHasBeenSet = true; m_defaultHyperParameters.emplace(std::forward<DefaultHyperParametersKeyT>(key), std::forward<DefaultHyperParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the default hyperparameters, their ranges, and whether they are
     * tunable. A tunable hyperparameter can have its value determined during
     * hyperparameter optimization (HPO).</p>
     */
    inline const DefaultHyperParameterRanges& GetDefaultHyperParameterRanges() const { return m_defaultHyperParameterRanges; }
    inline bool DefaultHyperParameterRangesHasBeenSet() const { return m_defaultHyperParameterRangesHasBeenSet; }
    template<typename DefaultHyperParameterRangesT = DefaultHyperParameterRanges>
    void SetDefaultHyperParameterRanges(DefaultHyperParameterRangesT&& value) { m_defaultHyperParameterRangesHasBeenSet = true; m_defaultHyperParameterRanges = std::forward<DefaultHyperParameterRangesT>(value); }
    template<typename DefaultHyperParameterRangesT = DefaultHyperParameterRanges>
    Algorithm& WithDefaultHyperParameterRanges(DefaultHyperParameterRangesT&& value) { SetDefaultHyperParameterRanges(std::forward<DefaultHyperParameterRangesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the default maximum number of training jobs and parallel training
     * jobs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultResourceConfig() const { return m_defaultResourceConfig; }
    inline bool DefaultResourceConfigHasBeenSet() const { return m_defaultResourceConfigHasBeenSet; }
    template<typename DefaultResourceConfigT = Aws::Map<Aws::String, Aws::String>>
    void SetDefaultResourceConfig(DefaultResourceConfigT&& value) { m_defaultResourceConfigHasBeenSet = true; m_defaultResourceConfig = std::forward<DefaultResourceConfigT>(value); }
    template<typename DefaultResourceConfigT = Aws::Map<Aws::String, Aws::String>>
    Algorithm& WithDefaultResourceConfig(DefaultResourceConfigT&& value) { SetDefaultResourceConfig(std::forward<DefaultResourceConfigT>(value)); return *this;}
    template<typename DefaultResourceConfigKeyT = Aws::String, typename DefaultResourceConfigValueT = Aws::String>
    Algorithm& AddDefaultResourceConfig(DefaultResourceConfigKeyT&& key, DefaultResourceConfigValueT&& value) {
      m_defaultResourceConfigHasBeenSet = true; m_defaultResourceConfig.emplace(std::forward<DefaultResourceConfigKeyT>(key), std::forward<DefaultResourceConfigValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The training input mode.</p>
     */
    inline const Aws::String& GetTrainingInputMode() const { return m_trainingInputMode; }
    inline bool TrainingInputModeHasBeenSet() const { return m_trainingInputModeHasBeenSet; }
    template<typename TrainingInputModeT = Aws::String>
    void SetTrainingInputMode(TrainingInputModeT&& value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = std::forward<TrainingInputModeT>(value); }
    template<typename TrainingInputModeT = Aws::String>
    Algorithm& WithTrainingInputMode(TrainingInputModeT&& value) { SetTrainingInputMode(std::forward<TrainingInputModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    Algorithm& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the algorithm was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    Algorithm& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the algorithm was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    Algorithm& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
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

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
