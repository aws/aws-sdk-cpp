/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-edge/model/EdgeMetric.h>
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
namespace SagemakerEdgeManager
{
namespace Model
{

  /**
   * <p>Information about a model deployed on an edge device that is registered with
   * SageMaker Edge Manager.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/Model">AWS
   * API Reference</a></p>
   */
  class Model
  {
  public:
    AWS_SAGEMAKEREDGEMANAGER_API Model() = default;
    AWS_SAGEMAKEREDGEMANAGER_API Model(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Model& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    Model& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model.</p>
     */
    inline const Aws::String& GetModelVersion() const { return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    template<typename ModelVersionT = Aws::String>
    void SetModelVersion(ModelVersionT&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::forward<ModelVersionT>(value); }
    template<typename ModelVersionT = Aws::String>
    Model& WithModelVersion(ModelVersionT&& value) { SetModelVersion(std::forward<ModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last data sample taken.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestSampleTime() const { return m_latestSampleTime; }
    inline bool LatestSampleTimeHasBeenSet() const { return m_latestSampleTimeHasBeenSet; }
    template<typename LatestSampleTimeT = Aws::Utils::DateTime>
    void SetLatestSampleTime(LatestSampleTimeT&& value) { m_latestSampleTimeHasBeenSet = true; m_latestSampleTime = std::forward<LatestSampleTimeT>(value); }
    template<typename LatestSampleTimeT = Aws::Utils::DateTime>
    Model& WithLatestSampleTime(LatestSampleTimeT&& value) { SetLatestSampleTime(std::forward<LatestSampleTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last inference that was made.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestInference() const { return m_latestInference; }
    inline bool LatestInferenceHasBeenSet() const { return m_latestInferenceHasBeenSet; }
    template<typename LatestInferenceT = Aws::Utils::DateTime>
    void SetLatestInference(LatestInferenceT&& value) { m_latestInferenceHasBeenSet = true; m_latestInference = std::forward<LatestInferenceT>(value); }
    template<typename LatestInferenceT = Aws::Utils::DateTime>
    Model& WithLatestInference(LatestInferenceT&& value) { SetLatestInference(std::forward<LatestInferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information required for model metrics.</p>
     */
    inline const Aws::Vector<EdgeMetric>& GetModelMetrics() const { return m_modelMetrics; }
    inline bool ModelMetricsHasBeenSet() const { return m_modelMetricsHasBeenSet; }
    template<typename ModelMetricsT = Aws::Vector<EdgeMetric>>
    void SetModelMetrics(ModelMetricsT&& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics = std::forward<ModelMetricsT>(value); }
    template<typename ModelMetricsT = Aws::Vector<EdgeMetric>>
    Model& WithModelMetrics(ModelMetricsT&& value) { SetModelMetrics(std::forward<ModelMetricsT>(value)); return *this;}
    template<typename ModelMetricsT = EdgeMetric>
    Model& AddModelMetrics(ModelMetricsT&& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics.emplace_back(std::forward<ModelMetricsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::Utils::DateTime m_latestSampleTime{};
    bool m_latestSampleTimeHasBeenSet = false;

    Aws::Utils::DateTime m_latestInference{};
    bool m_latestInferenceHasBeenSet = false;

    Aws::Vector<EdgeMetric> m_modelMetrics;
    bool m_modelMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
