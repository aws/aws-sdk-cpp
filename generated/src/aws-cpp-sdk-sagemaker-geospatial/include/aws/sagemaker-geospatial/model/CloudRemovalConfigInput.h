/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/AlgorithmNameCloudRemoval.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>Input structure for Cloud Removal Operation type</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/CloudRemovalConfigInput">AWS
   * API Reference</a></p>
   */
  class CloudRemovalConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API CloudRemovalConfigInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API CloudRemovalConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API CloudRemovalConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the algorithm used for cloud removal.</p>
     */
    inline AlgorithmNameCloudRemoval GetAlgorithmName() const { return m_algorithmName; }
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }
    inline void SetAlgorithmName(AlgorithmNameCloudRemoval value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }
    inline CloudRemovalConfigInput& WithAlgorithmName(AlgorithmNameCloudRemoval value) { SetAlgorithmName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interpolation value you provide for cloud removal.</p>
     */
    inline const Aws::String& GetInterpolationValue() const { return m_interpolationValue; }
    inline bool InterpolationValueHasBeenSet() const { return m_interpolationValueHasBeenSet; }
    template<typename InterpolationValueT = Aws::String>
    void SetInterpolationValue(InterpolationValueT&& value) { m_interpolationValueHasBeenSet = true; m_interpolationValue = std::forward<InterpolationValueT>(value); }
    template<typename InterpolationValueT = Aws::String>
    CloudRemovalConfigInput& WithInterpolationValue(InterpolationValueT&& value) { SetInterpolationValue(std::forward<InterpolationValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>TargetBands to be returned in the output of CloudRemoval operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetBands() const { return m_targetBands; }
    inline bool TargetBandsHasBeenSet() const { return m_targetBandsHasBeenSet; }
    template<typename TargetBandsT = Aws::Vector<Aws::String>>
    void SetTargetBands(TargetBandsT&& value) { m_targetBandsHasBeenSet = true; m_targetBands = std::forward<TargetBandsT>(value); }
    template<typename TargetBandsT = Aws::Vector<Aws::String>>
    CloudRemovalConfigInput& WithTargetBands(TargetBandsT&& value) { SetTargetBands(std::forward<TargetBandsT>(value)); return *this;}
    template<typename TargetBandsT = Aws::String>
    CloudRemovalConfigInput& AddTargetBands(TargetBandsT&& value) { m_targetBandsHasBeenSet = true; m_targetBands.emplace_back(std::forward<TargetBandsT>(value)); return *this; }
    ///@}
  private:

    AlgorithmNameCloudRemoval m_algorithmName{AlgorithmNameCloudRemoval::NOT_SET};
    bool m_algorithmNameHasBeenSet = false;

    Aws::String m_interpolationValue;
    bool m_interpolationValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetBands;
    bool m_targetBandsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
