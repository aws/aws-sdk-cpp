/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/FileSource.h>
#include <aws/sagemaker/model/MetricsSource.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Represents the drift check bias baselines that can be used when the model
   * monitor is set using the model package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DriftCheckBias">AWS
   * API Reference</a></p>
   */
  class DriftCheckBias
  {
  public:
    AWS_SAGEMAKER_API DriftCheckBias() = default;
    AWS_SAGEMAKER_API DriftCheckBias(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DriftCheckBias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bias config file for a model.</p>
     */
    inline const FileSource& GetConfigFile() const { return m_configFile; }
    inline bool ConfigFileHasBeenSet() const { return m_configFileHasBeenSet; }
    template<typename ConfigFileT = FileSource>
    void SetConfigFile(ConfigFileT&& value) { m_configFileHasBeenSet = true; m_configFile = std::forward<ConfigFileT>(value); }
    template<typename ConfigFileT = FileSource>
    DriftCheckBias& WithConfigFile(ConfigFileT&& value) { SetConfigFile(std::forward<ConfigFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-training constraints.</p>
     */
    inline const MetricsSource& GetPreTrainingConstraints() const { return m_preTrainingConstraints; }
    inline bool PreTrainingConstraintsHasBeenSet() const { return m_preTrainingConstraintsHasBeenSet; }
    template<typename PreTrainingConstraintsT = MetricsSource>
    void SetPreTrainingConstraints(PreTrainingConstraintsT&& value) { m_preTrainingConstraintsHasBeenSet = true; m_preTrainingConstraints = std::forward<PreTrainingConstraintsT>(value); }
    template<typename PreTrainingConstraintsT = MetricsSource>
    DriftCheckBias& WithPreTrainingConstraints(PreTrainingConstraintsT&& value) { SetPreTrainingConstraints(std::forward<PreTrainingConstraintsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The post-training constraints.</p>
     */
    inline const MetricsSource& GetPostTrainingConstraints() const { return m_postTrainingConstraints; }
    inline bool PostTrainingConstraintsHasBeenSet() const { return m_postTrainingConstraintsHasBeenSet; }
    template<typename PostTrainingConstraintsT = MetricsSource>
    void SetPostTrainingConstraints(PostTrainingConstraintsT&& value) { m_postTrainingConstraintsHasBeenSet = true; m_postTrainingConstraints = std::forward<PostTrainingConstraintsT>(value); }
    template<typename PostTrainingConstraintsT = MetricsSource>
    DriftCheckBias& WithPostTrainingConstraints(PostTrainingConstraintsT&& value) { SetPostTrainingConstraints(std::forward<PostTrainingConstraintsT>(value)); return *this;}
    ///@}
  private:

    FileSource m_configFile;
    bool m_configFileHasBeenSet = false;

    MetricsSource m_preTrainingConstraints;
    bool m_preTrainingConstraintsHasBeenSet = false;

    MetricsSource m_postTrainingConstraints;
    bool m_postTrainingConstraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
