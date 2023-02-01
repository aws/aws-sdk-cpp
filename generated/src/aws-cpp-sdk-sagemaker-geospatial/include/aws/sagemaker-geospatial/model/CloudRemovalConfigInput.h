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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/CloudRemovalConfigInput">AWS
   * API Reference</a></p>
   */
  class CloudRemovalConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API CloudRemovalConfigInput();
    AWS_SAGEMAKERGEOSPATIAL_API CloudRemovalConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API CloudRemovalConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the algorithm used for cloud removal.</p>
     */
    inline const AlgorithmNameCloudRemoval& GetAlgorithmName() const{ return m_algorithmName; }

    /**
     * <p>The name of the algorithm used for cloud removal.</p>
     */
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }

    /**
     * <p>The name of the algorithm used for cloud removal.</p>
     */
    inline void SetAlgorithmName(const AlgorithmNameCloudRemoval& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }

    /**
     * <p>The name of the algorithm used for cloud removal.</p>
     */
    inline void SetAlgorithmName(AlgorithmNameCloudRemoval&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::move(value); }

    /**
     * <p>The name of the algorithm used for cloud removal.</p>
     */
    inline CloudRemovalConfigInput& WithAlgorithmName(const AlgorithmNameCloudRemoval& value) { SetAlgorithmName(value); return *this;}

    /**
     * <p>The name of the algorithm used for cloud removal.</p>
     */
    inline CloudRemovalConfigInput& WithAlgorithmName(AlgorithmNameCloudRemoval&& value) { SetAlgorithmName(std::move(value)); return *this;}


    /**
     * <p>The interpolation value you provide for cloud removal.</p>
     */
    inline const Aws::String& GetInterpolationValue() const{ return m_interpolationValue; }

    /**
     * <p>The interpolation value you provide for cloud removal.</p>
     */
    inline bool InterpolationValueHasBeenSet() const { return m_interpolationValueHasBeenSet; }

    /**
     * <p>The interpolation value you provide for cloud removal.</p>
     */
    inline void SetInterpolationValue(const Aws::String& value) { m_interpolationValueHasBeenSet = true; m_interpolationValue = value; }

    /**
     * <p>The interpolation value you provide for cloud removal.</p>
     */
    inline void SetInterpolationValue(Aws::String&& value) { m_interpolationValueHasBeenSet = true; m_interpolationValue = std::move(value); }

    /**
     * <p>The interpolation value you provide for cloud removal.</p>
     */
    inline void SetInterpolationValue(const char* value) { m_interpolationValueHasBeenSet = true; m_interpolationValue.assign(value); }

    /**
     * <p>The interpolation value you provide for cloud removal.</p>
     */
    inline CloudRemovalConfigInput& WithInterpolationValue(const Aws::String& value) { SetInterpolationValue(value); return *this;}

    /**
     * <p>The interpolation value you provide for cloud removal.</p>
     */
    inline CloudRemovalConfigInput& WithInterpolationValue(Aws::String&& value) { SetInterpolationValue(std::move(value)); return *this;}

    /**
     * <p>The interpolation value you provide for cloud removal.</p>
     */
    inline CloudRemovalConfigInput& WithInterpolationValue(const char* value) { SetInterpolationValue(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::String>& GetTargetBands() const{ return m_targetBands; }

    /**
     * <p/>
     */
    inline bool TargetBandsHasBeenSet() const { return m_targetBandsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTargetBands(const Aws::Vector<Aws::String>& value) { m_targetBandsHasBeenSet = true; m_targetBands = value; }

    /**
     * <p/>
     */
    inline void SetTargetBands(Aws::Vector<Aws::String>&& value) { m_targetBandsHasBeenSet = true; m_targetBands = std::move(value); }

    /**
     * <p/>
     */
    inline CloudRemovalConfigInput& WithTargetBands(const Aws::Vector<Aws::String>& value) { SetTargetBands(value); return *this;}

    /**
     * <p/>
     */
    inline CloudRemovalConfigInput& WithTargetBands(Aws::Vector<Aws::String>&& value) { SetTargetBands(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline CloudRemovalConfigInput& AddTargetBands(const Aws::String& value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline CloudRemovalConfigInput& AddTargetBands(Aws::String&& value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline CloudRemovalConfigInput& AddTargetBands(const char* value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(value); return *this; }

  private:

    AlgorithmNameCloudRemoval m_algorithmName;
    bool m_algorithmNameHasBeenSet = false;

    Aws::String m_interpolationValue;
    bool m_interpolationValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetBands;
    bool m_targetBandsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
