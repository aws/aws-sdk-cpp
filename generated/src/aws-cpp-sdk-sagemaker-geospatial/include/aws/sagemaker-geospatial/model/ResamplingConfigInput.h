/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/AlgorithmNameResampling.h>
#include <aws/sagemaker-geospatial/model/OutputResolutionResamplingInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>The structure representing input for resampling operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ResamplingConfigInput">AWS
   * API Reference</a></p>
   */
  class ResamplingConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ResamplingConfigInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API ResamplingConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ResamplingConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the algorithm used for resampling.</p>
     */
    inline AlgorithmNameResampling GetAlgorithmName() const { return m_algorithmName; }
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }
    inline void SetAlgorithmName(AlgorithmNameResampling value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }
    inline ResamplingConfigInput& WithAlgorithmName(AlgorithmNameResampling value) { SetAlgorithmName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing output resolution (in target georeferenced units)
     * of the result of resampling operation.</p>
     */
    inline const OutputResolutionResamplingInput& GetOutputResolution() const { return m_outputResolution; }
    inline bool OutputResolutionHasBeenSet() const { return m_outputResolutionHasBeenSet; }
    template<typename OutputResolutionT = OutputResolutionResamplingInput>
    void SetOutputResolution(OutputResolutionT&& value) { m_outputResolutionHasBeenSet = true; m_outputResolution = std::forward<OutputResolutionT>(value); }
    template<typename OutputResolutionT = OutputResolutionResamplingInput>
    ResamplingConfigInput& WithOutputResolution(OutputResolutionT&& value) { SetOutputResolution(std::forward<OutputResolutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Bands used in the operation. If no target bands are specified, it uses all
     * bands available in the input.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetBands() const { return m_targetBands; }
    inline bool TargetBandsHasBeenSet() const { return m_targetBandsHasBeenSet; }
    template<typename TargetBandsT = Aws::Vector<Aws::String>>
    void SetTargetBands(TargetBandsT&& value) { m_targetBandsHasBeenSet = true; m_targetBands = std::forward<TargetBandsT>(value); }
    template<typename TargetBandsT = Aws::Vector<Aws::String>>
    ResamplingConfigInput& WithTargetBands(TargetBandsT&& value) { SetTargetBands(std::forward<TargetBandsT>(value)); return *this;}
    template<typename TargetBandsT = Aws::String>
    ResamplingConfigInput& AddTargetBands(TargetBandsT&& value) { m_targetBandsHasBeenSet = true; m_targetBands.emplace_back(std::forward<TargetBandsT>(value)); return *this; }
    ///@}
  private:

    AlgorithmNameResampling m_algorithmName{AlgorithmNameResampling::NOT_SET};
    bool m_algorithmNameHasBeenSet = false;

    OutputResolutionResamplingInput m_outputResolution;
    bool m_outputResolutionHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetBands;
    bool m_targetBandsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
