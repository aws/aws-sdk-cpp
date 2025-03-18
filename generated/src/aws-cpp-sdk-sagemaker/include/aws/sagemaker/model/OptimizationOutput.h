/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Output values produced by an optimization job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OptimizationOutput">AWS
   * API Reference</a></p>
   */
  class OptimizationOutput
  {
  public:
    AWS_SAGEMAKER_API OptimizationOutput() = default;
    AWS_SAGEMAKER_API OptimizationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OptimizationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The image that SageMaker recommends that you use to host the optimized model
     * that you created with an optimization job.</p>
     */
    inline const Aws::String& GetRecommendedInferenceImage() const { return m_recommendedInferenceImage; }
    inline bool RecommendedInferenceImageHasBeenSet() const { return m_recommendedInferenceImageHasBeenSet; }
    template<typename RecommendedInferenceImageT = Aws::String>
    void SetRecommendedInferenceImage(RecommendedInferenceImageT&& value) { m_recommendedInferenceImageHasBeenSet = true; m_recommendedInferenceImage = std::forward<RecommendedInferenceImageT>(value); }
    template<typename RecommendedInferenceImageT = Aws::String>
    OptimizationOutput& WithRecommendedInferenceImage(RecommendedInferenceImageT&& value) { SetRecommendedInferenceImage(std::forward<RecommendedInferenceImageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recommendedInferenceImage;
    bool m_recommendedInferenceImageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
