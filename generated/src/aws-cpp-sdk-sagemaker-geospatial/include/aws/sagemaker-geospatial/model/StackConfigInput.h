/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/OutputResolutionStackInput.h>
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
   * <p>The input structure for Stacking Operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/StackConfigInput">AWS
   * API Reference</a></p>
   */
  class StackConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API StackConfigInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API StackConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API StackConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The structure representing output resolution (in target georeferenced units)
     * of the result of stacking operation.</p>
     */
    inline const OutputResolutionStackInput& GetOutputResolution() const { return m_outputResolution; }
    inline bool OutputResolutionHasBeenSet() const { return m_outputResolutionHasBeenSet; }
    template<typename OutputResolutionT = OutputResolutionStackInput>
    void SetOutputResolution(OutputResolutionT&& value) { m_outputResolutionHasBeenSet = true; m_outputResolution = std::forward<OutputResolutionT>(value); }
    template<typename OutputResolutionT = OutputResolutionStackInput>
    StackConfigInput& WithOutputResolution(OutputResolutionT&& value) { SetOutputResolution(std::forward<OutputResolutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of bands to be stacked in the specified order. When the parameter is
     * not provided, all the available bands in the data collection are stacked in the
     * alphabetical order of their asset names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetBands() const { return m_targetBands; }
    inline bool TargetBandsHasBeenSet() const { return m_targetBandsHasBeenSet; }
    template<typename TargetBandsT = Aws::Vector<Aws::String>>
    void SetTargetBands(TargetBandsT&& value) { m_targetBandsHasBeenSet = true; m_targetBands = std::forward<TargetBandsT>(value); }
    template<typename TargetBandsT = Aws::Vector<Aws::String>>
    StackConfigInput& WithTargetBands(TargetBandsT&& value) { SetTargetBands(std::forward<TargetBandsT>(value)); return *this;}
    template<typename TargetBandsT = Aws::String>
    StackConfigInput& AddTargetBands(TargetBandsT&& value) { m_targetBandsHasBeenSet = true; m_targetBands.emplace_back(std::forward<TargetBandsT>(value)); return *this; }
    ///@}
  private:

    OutputResolutionStackInput m_outputResolution;
    bool m_outputResolutionHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetBands;
    bool m_targetBandsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
