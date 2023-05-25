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
    AWS_SAGEMAKERGEOSPATIAL_API StackConfigInput();
    AWS_SAGEMAKERGEOSPATIAL_API StackConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API StackConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The structure representing output resolution (in target georeferenced units)
     * of the result of stacking operation.</p>
     */
    inline const OutputResolutionStackInput& GetOutputResolution() const{ return m_outputResolution; }

    /**
     * <p>The structure representing output resolution (in target georeferenced units)
     * of the result of stacking operation.</p>
     */
    inline bool OutputResolutionHasBeenSet() const { return m_outputResolutionHasBeenSet; }

    /**
     * <p>The structure representing output resolution (in target georeferenced units)
     * of the result of stacking operation.</p>
     */
    inline void SetOutputResolution(const OutputResolutionStackInput& value) { m_outputResolutionHasBeenSet = true; m_outputResolution = value; }

    /**
     * <p>The structure representing output resolution (in target georeferenced units)
     * of the result of stacking operation.</p>
     */
    inline void SetOutputResolution(OutputResolutionStackInput&& value) { m_outputResolutionHasBeenSet = true; m_outputResolution = std::move(value); }

    /**
     * <p>The structure representing output resolution (in target georeferenced units)
     * of the result of stacking operation.</p>
     */
    inline StackConfigInput& WithOutputResolution(const OutputResolutionStackInput& value) { SetOutputResolution(value); return *this;}

    /**
     * <p>The structure representing output resolution (in target georeferenced units)
     * of the result of stacking operation.</p>
     */
    inline StackConfigInput& WithOutputResolution(OutputResolutionStackInput&& value) { SetOutputResolution(std::move(value)); return *this;}


    /**
     * <p>A list of bands to be stacked in the specified order. When the parameter is
     * not provided, all the available bands in the data collection are stacked in the
     * alphabetical order of their asset names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetBands() const{ return m_targetBands; }

    /**
     * <p>A list of bands to be stacked in the specified order. When the parameter is
     * not provided, all the available bands in the data collection are stacked in the
     * alphabetical order of their asset names.</p>
     */
    inline bool TargetBandsHasBeenSet() const { return m_targetBandsHasBeenSet; }

    /**
     * <p>A list of bands to be stacked in the specified order. When the parameter is
     * not provided, all the available bands in the data collection are stacked in the
     * alphabetical order of their asset names.</p>
     */
    inline void SetTargetBands(const Aws::Vector<Aws::String>& value) { m_targetBandsHasBeenSet = true; m_targetBands = value; }

    /**
     * <p>A list of bands to be stacked in the specified order. When the parameter is
     * not provided, all the available bands in the data collection are stacked in the
     * alphabetical order of their asset names.</p>
     */
    inline void SetTargetBands(Aws::Vector<Aws::String>&& value) { m_targetBandsHasBeenSet = true; m_targetBands = std::move(value); }

    /**
     * <p>A list of bands to be stacked in the specified order. When the parameter is
     * not provided, all the available bands in the data collection are stacked in the
     * alphabetical order of their asset names.</p>
     */
    inline StackConfigInput& WithTargetBands(const Aws::Vector<Aws::String>& value) { SetTargetBands(value); return *this;}

    /**
     * <p>A list of bands to be stacked in the specified order. When the parameter is
     * not provided, all the available bands in the data collection are stacked in the
     * alphabetical order of their asset names.</p>
     */
    inline StackConfigInput& WithTargetBands(Aws::Vector<Aws::String>&& value) { SetTargetBands(std::move(value)); return *this;}

    /**
     * <p>A list of bands to be stacked in the specified order. When the parameter is
     * not provided, all the available bands in the data collection are stacked in the
     * alphabetical order of their asset names.</p>
     */
    inline StackConfigInput& AddTargetBands(const Aws::String& value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(value); return *this; }

    /**
     * <p>A list of bands to be stacked in the specified order. When the parameter is
     * not provided, all the available bands in the data collection are stacked in the
     * alphabetical order of their asset names.</p>
     */
    inline StackConfigInput& AddTargetBands(Aws::String&& value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of bands to be stacked in the specified order. When the parameter is
     * not provided, all the available bands in the data collection are stacked in the
     * alphabetical order of their asset names.</p>
     */
    inline StackConfigInput& AddTargetBands(const char* value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(value); return *this; }

  private:

    OutputResolutionStackInput m_outputResolution;
    bool m_outputResolutionHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetBands;
    bool m_targetBandsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
