/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>

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
   * <p>The input structure for specifying ViewSunAzimuth property filter.
   * ViewSunAzimuth refers to the Sun azimuth angle. From the scene center point on
   * the ground, this is the angle between truth north and the sun. Measured
   * clockwise in degrees (0-360).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ViewSunAzimuthInput">AWS
   * API Reference</a></p>
   */
  class ViewSunAzimuthInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ViewSunAzimuthInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API ViewSunAzimuthInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ViewSunAzimuthInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum value for ViewSunAzimuth property filter. This filters items
     * having ViewSunAzimuth greater than or equal to this value.</p>
     */
    inline double GetLowerBound() const { return m_lowerBound; }
    inline bool LowerBoundHasBeenSet() const { return m_lowerBoundHasBeenSet; }
    inline void SetLowerBound(double value) { m_lowerBoundHasBeenSet = true; m_lowerBound = value; }
    inline ViewSunAzimuthInput& WithLowerBound(double value) { SetLowerBound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value for ViewSunAzimuth property filter. This filters items
     * having ViewSunAzimuth lesser than or equal to this value.</p>
     */
    inline double GetUpperBound() const { return m_upperBound; }
    inline bool UpperBoundHasBeenSet() const { return m_upperBoundHasBeenSet; }
    inline void SetUpperBound(double value) { m_upperBoundHasBeenSet = true; m_upperBound = value; }
    inline ViewSunAzimuthInput& WithUpperBound(double value) { SetUpperBound(value); return *this;}
    ///@}
  private:

    double m_lowerBound{0.0};
    bool m_lowerBoundHasBeenSet = false;

    double m_upperBound{0.0};
    bool m_upperBoundHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
