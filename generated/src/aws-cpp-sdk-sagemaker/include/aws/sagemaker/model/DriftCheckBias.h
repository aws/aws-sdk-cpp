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
    AWS_SAGEMAKER_API DriftCheckBias();
    AWS_SAGEMAKER_API DriftCheckBias(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DriftCheckBias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bias config file for a model.</p>
     */
    inline const FileSource& GetConfigFile() const{ return m_configFile; }

    /**
     * <p>The bias config file for a model.</p>
     */
    inline bool ConfigFileHasBeenSet() const { return m_configFileHasBeenSet; }

    /**
     * <p>The bias config file for a model.</p>
     */
    inline void SetConfigFile(const FileSource& value) { m_configFileHasBeenSet = true; m_configFile = value; }

    /**
     * <p>The bias config file for a model.</p>
     */
    inline void SetConfigFile(FileSource&& value) { m_configFileHasBeenSet = true; m_configFile = std::move(value); }

    /**
     * <p>The bias config file for a model.</p>
     */
    inline DriftCheckBias& WithConfigFile(const FileSource& value) { SetConfigFile(value); return *this;}

    /**
     * <p>The bias config file for a model.</p>
     */
    inline DriftCheckBias& WithConfigFile(FileSource&& value) { SetConfigFile(std::move(value)); return *this;}


    /**
     * <p>The pre-training constraints.</p>
     */
    inline const MetricsSource& GetPreTrainingConstraints() const{ return m_preTrainingConstraints; }

    /**
     * <p>The pre-training constraints.</p>
     */
    inline bool PreTrainingConstraintsHasBeenSet() const { return m_preTrainingConstraintsHasBeenSet; }

    /**
     * <p>The pre-training constraints.</p>
     */
    inline void SetPreTrainingConstraints(const MetricsSource& value) { m_preTrainingConstraintsHasBeenSet = true; m_preTrainingConstraints = value; }

    /**
     * <p>The pre-training constraints.</p>
     */
    inline void SetPreTrainingConstraints(MetricsSource&& value) { m_preTrainingConstraintsHasBeenSet = true; m_preTrainingConstraints = std::move(value); }

    /**
     * <p>The pre-training constraints.</p>
     */
    inline DriftCheckBias& WithPreTrainingConstraints(const MetricsSource& value) { SetPreTrainingConstraints(value); return *this;}

    /**
     * <p>The pre-training constraints.</p>
     */
    inline DriftCheckBias& WithPreTrainingConstraints(MetricsSource&& value) { SetPreTrainingConstraints(std::move(value)); return *this;}


    /**
     * <p>The post-training constraints.</p>
     */
    inline const MetricsSource& GetPostTrainingConstraints() const{ return m_postTrainingConstraints; }

    /**
     * <p>The post-training constraints.</p>
     */
    inline bool PostTrainingConstraintsHasBeenSet() const { return m_postTrainingConstraintsHasBeenSet; }

    /**
     * <p>The post-training constraints.</p>
     */
    inline void SetPostTrainingConstraints(const MetricsSource& value) { m_postTrainingConstraintsHasBeenSet = true; m_postTrainingConstraints = value; }

    /**
     * <p>The post-training constraints.</p>
     */
    inline void SetPostTrainingConstraints(MetricsSource&& value) { m_postTrainingConstraintsHasBeenSet = true; m_postTrainingConstraints = std::move(value); }

    /**
     * <p>The post-training constraints.</p>
     */
    inline DriftCheckBias& WithPostTrainingConstraints(const MetricsSource& value) { SetPostTrainingConstraints(value); return *this;}

    /**
     * <p>The post-training constraints.</p>
     */
    inline DriftCheckBias& WithPostTrainingConstraints(MetricsSource&& value) { SetPostTrainingConstraints(std::move(value)); return *this;}

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
