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
   * <p>The input structure for specifying ViewOffNadir property filter. ViewOffNadir
   * refers to the angle from the sensor between nadir (straight down) and the scene
   * center. Measured in degrees (0-90).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ViewOffNadirInput">AWS
   * API Reference</a></p>
   */
  class ViewOffNadirInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ViewOffNadirInput();
    AWS_SAGEMAKERGEOSPATIAL_API ViewOffNadirInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ViewOffNadirInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum value for ViewOffNadir property filter. This filters items having
     * ViewOffNadir greater than or equal to this value. </p>
     */
    inline double GetLowerBound() const{ return m_lowerBound; }

    /**
     * <p>The minimum value for ViewOffNadir property filter. This filters items having
     * ViewOffNadir greater than or equal to this value. </p>
     */
    inline bool LowerBoundHasBeenSet() const { return m_lowerBoundHasBeenSet; }

    /**
     * <p>The minimum value for ViewOffNadir property filter. This filters items having
     * ViewOffNadir greater than or equal to this value. </p>
     */
    inline void SetLowerBound(double value) { m_lowerBoundHasBeenSet = true; m_lowerBound = value; }

    /**
     * <p>The minimum value for ViewOffNadir property filter. This filters items having
     * ViewOffNadir greater than or equal to this value. </p>
     */
    inline ViewOffNadirInput& WithLowerBound(double value) { SetLowerBound(value); return *this;}


    /**
     * <p>The maximum value for ViewOffNadir property filter. This filters items having
     * ViewOffNadir lesser than or equal to this value.</p>
     */
    inline double GetUpperBound() const{ return m_upperBound; }

    /**
     * <p>The maximum value for ViewOffNadir property filter. This filters items having
     * ViewOffNadir lesser than or equal to this value.</p>
     */
    inline bool UpperBoundHasBeenSet() const { return m_upperBoundHasBeenSet; }

    /**
     * <p>The maximum value for ViewOffNadir property filter. This filters items having
     * ViewOffNadir lesser than or equal to this value.</p>
     */
    inline void SetUpperBound(double value) { m_upperBoundHasBeenSet = true; m_upperBound = value; }

    /**
     * <p>The maximum value for ViewOffNadir property filter. This filters items having
     * ViewOffNadir lesser than or equal to this value.</p>
     */
    inline ViewOffNadirInput& WithUpperBound(double value) { SetUpperBound(value); return *this;}

  private:

    double m_lowerBound;
    bool m_lowerBoundHasBeenSet = false;

    double m_upperBound;
    bool m_upperBoundHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
