/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The model on the edge device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EdgeModel">AWS
   * API Reference</a></p>
   */
  class EdgeModel
  {
  public:
    AWS_SAGEMAKER_API EdgeModel() = default;
    AWS_SAGEMAKER_API EdgeModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgeModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    EdgeModel& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version.</p>
     */
    inline const Aws::String& GetModelVersion() const { return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    template<typename ModelVersionT = Aws::String>
    void SetModelVersion(ModelVersionT&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::forward<ModelVersionT>(value); }
    template<typename ModelVersionT = Aws::String>
    EdgeModel& WithModelVersion(ModelVersionT&& value) { SetModelVersion(std::forward<ModelVersionT>(value)); return *this;}
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
    EdgeModel& WithLatestSampleTime(LatestSampleTimeT&& value) { SetLatestSampleTime(std::forward<LatestSampleTimeT>(value)); return *this;}
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
    EdgeModel& WithLatestInference(LatestInferenceT&& value) { SetLatestInference(std::forward<LatestInferenceT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
