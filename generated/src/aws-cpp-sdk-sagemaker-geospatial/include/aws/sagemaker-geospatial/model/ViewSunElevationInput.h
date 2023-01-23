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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ViewSunElevationInput">AWS
   * API Reference</a></p>
   */
  class ViewSunElevationInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ViewSunElevationInput();
    AWS_SAGEMAKERGEOSPATIAL_API ViewSunElevationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ViewSunElevationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The lower bound to view the sun elevation.</p>
     */
    inline double GetLowerBound() const{ return m_lowerBound; }

    /**
     * <p>The lower bound to view the sun elevation.</p>
     */
    inline bool LowerBoundHasBeenSet() const { return m_lowerBoundHasBeenSet; }

    /**
     * <p>The lower bound to view the sun elevation.</p>
     */
    inline void SetLowerBound(double value) { m_lowerBoundHasBeenSet = true; m_lowerBound = value; }

    /**
     * <p>The lower bound to view the sun elevation.</p>
     */
    inline ViewSunElevationInput& WithLowerBound(double value) { SetLowerBound(value); return *this;}


    /**
     * <p>The upper bound to view the sun elevation.</p>
     */
    inline double GetUpperBound() const{ return m_upperBound; }

    /**
     * <p>The upper bound to view the sun elevation.</p>
     */
    inline bool UpperBoundHasBeenSet() const { return m_upperBoundHasBeenSet; }

    /**
     * <p>The upper bound to view the sun elevation.</p>
     */
    inline void SetUpperBound(double value) { m_upperBoundHasBeenSet = true; m_upperBound = value; }

    /**
     * <p>The upper bound to view the sun elevation.</p>
     */
    inline ViewSunElevationInput& WithUpperBound(double value) { SetUpperBound(value); return *this;}

  private:

    double m_lowerBound;
    bool m_lowerBoundHasBeenSet = false;

    double m_upperBound;
    bool m_upperBoundHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
