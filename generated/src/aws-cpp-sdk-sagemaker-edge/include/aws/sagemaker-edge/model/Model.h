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
    AWS_SAGEMAKEREDGEMANAGER_API Model();
    AWS_SAGEMAKEREDGEMANAGER_API Model(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Model& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline Model& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline Model& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline Model& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The version of the model.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The version of the model.</p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p>The version of the model.</p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p>The version of the model.</p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * <p>The version of the model.</p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }

    /**
     * <p>The version of the model.</p>
     */
    inline Model& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p>The version of the model.</p>
     */
    inline Model& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the model.</p>
     */
    inline Model& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}


    /**
     * <p>The timestamp of the last data sample taken.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestSampleTime() const{ return m_latestSampleTime; }

    /**
     * <p>The timestamp of the last data sample taken.</p>
     */
    inline bool LatestSampleTimeHasBeenSet() const { return m_latestSampleTimeHasBeenSet; }

    /**
     * <p>The timestamp of the last data sample taken.</p>
     */
    inline void SetLatestSampleTime(const Aws::Utils::DateTime& value) { m_latestSampleTimeHasBeenSet = true; m_latestSampleTime = value; }

    /**
     * <p>The timestamp of the last data sample taken.</p>
     */
    inline void SetLatestSampleTime(Aws::Utils::DateTime&& value) { m_latestSampleTimeHasBeenSet = true; m_latestSampleTime = std::move(value); }

    /**
     * <p>The timestamp of the last data sample taken.</p>
     */
    inline Model& WithLatestSampleTime(const Aws::Utils::DateTime& value) { SetLatestSampleTime(value); return *this;}

    /**
     * <p>The timestamp of the last data sample taken.</p>
     */
    inline Model& WithLatestSampleTime(Aws::Utils::DateTime&& value) { SetLatestSampleTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp of the last inference that was made.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestInference() const{ return m_latestInference; }

    /**
     * <p>The timestamp of the last inference that was made.</p>
     */
    inline bool LatestInferenceHasBeenSet() const { return m_latestInferenceHasBeenSet; }

    /**
     * <p>The timestamp of the last inference that was made.</p>
     */
    inline void SetLatestInference(const Aws::Utils::DateTime& value) { m_latestInferenceHasBeenSet = true; m_latestInference = value; }

    /**
     * <p>The timestamp of the last inference that was made.</p>
     */
    inline void SetLatestInference(Aws::Utils::DateTime&& value) { m_latestInferenceHasBeenSet = true; m_latestInference = std::move(value); }

    /**
     * <p>The timestamp of the last inference that was made.</p>
     */
    inline Model& WithLatestInference(const Aws::Utils::DateTime& value) { SetLatestInference(value); return *this;}

    /**
     * <p>The timestamp of the last inference that was made.</p>
     */
    inline Model& WithLatestInference(Aws::Utils::DateTime&& value) { SetLatestInference(std::move(value)); return *this;}


    /**
     * <p>Information required for model metrics.</p>
     */
    inline const Aws::Vector<EdgeMetric>& GetModelMetrics() const{ return m_modelMetrics; }

    /**
     * <p>Information required for model metrics.</p>
     */
    inline bool ModelMetricsHasBeenSet() const { return m_modelMetricsHasBeenSet; }

    /**
     * <p>Information required for model metrics.</p>
     */
    inline void SetModelMetrics(const Aws::Vector<EdgeMetric>& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics = value; }

    /**
     * <p>Information required for model metrics.</p>
     */
    inline void SetModelMetrics(Aws::Vector<EdgeMetric>&& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics = std::move(value); }

    /**
     * <p>Information required for model metrics.</p>
     */
    inline Model& WithModelMetrics(const Aws::Vector<EdgeMetric>& value) { SetModelMetrics(value); return *this;}

    /**
     * <p>Information required for model metrics.</p>
     */
    inline Model& WithModelMetrics(Aws::Vector<EdgeMetric>&& value) { SetModelMetrics(std::move(value)); return *this;}

    /**
     * <p>Information required for model metrics.</p>
     */
    inline Model& AddModelMetrics(const EdgeMetric& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics.push_back(value); return *this; }

    /**
     * <p>Information required for model metrics.</p>
     */
    inline Model& AddModelMetrics(EdgeMetric&& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::Utils::DateTime m_latestSampleTime;
    bool m_latestSampleTimeHasBeenSet = false;

    Aws::Utils::DateTime m_latestInference;
    bool m_latestInferenceHasBeenSet = false;

    Aws::Vector<EdgeMetric> m_modelMetrics;
    bool m_modelMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
