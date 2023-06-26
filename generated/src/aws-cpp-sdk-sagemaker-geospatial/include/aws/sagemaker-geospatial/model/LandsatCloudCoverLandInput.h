﻿/**
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
   * <p>The structure representing Land Cloud Cover property for Landsat data
   * collection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/LandsatCloudCoverLandInput">AWS
   * API Reference</a></p>
   */
  class LandsatCloudCoverLandInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API LandsatCloudCoverLandInput();
    AWS_SAGEMAKERGEOSPATIAL_API LandsatCloudCoverLandInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API LandsatCloudCoverLandInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum value for Land Cloud Cover property filter. This will filter
     * items having Land Cloud Cover greater than or equal to this value.</p>
     */
    inline double GetLowerBound() const{ return m_lowerBound; }

    /**
     * <p>The minimum value for Land Cloud Cover property filter. This will filter
     * items having Land Cloud Cover greater than or equal to this value.</p>
     */
    inline bool LowerBoundHasBeenSet() const { return m_lowerBoundHasBeenSet; }

    /**
     * <p>The minimum value for Land Cloud Cover property filter. This will filter
     * items having Land Cloud Cover greater than or equal to this value.</p>
     */
    inline void SetLowerBound(double value) { m_lowerBoundHasBeenSet = true; m_lowerBound = value; }

    /**
     * <p>The minimum value for Land Cloud Cover property filter. This will filter
     * items having Land Cloud Cover greater than or equal to this value.</p>
     */
    inline LandsatCloudCoverLandInput& WithLowerBound(double value) { SetLowerBound(value); return *this;}


    /**
     * <p>The maximum value for Land Cloud Cover property filter. This will filter
     * items having Land Cloud Cover less than or equal to this value.</p>
     */
    inline double GetUpperBound() const{ return m_upperBound; }

    /**
     * <p>The maximum value for Land Cloud Cover property filter. This will filter
     * items having Land Cloud Cover less than or equal to this value.</p>
     */
    inline bool UpperBoundHasBeenSet() const { return m_upperBoundHasBeenSet; }

    /**
     * <p>The maximum value for Land Cloud Cover property filter. This will filter
     * items having Land Cloud Cover less than or equal to this value.</p>
     */
    inline void SetUpperBound(double value) { m_upperBoundHasBeenSet = true; m_upperBound = value; }

    /**
     * <p>The maximum value for Land Cloud Cover property filter. This will filter
     * items having Land Cloud Cover less than or equal to this value.</p>
     */
    inline LandsatCloudCoverLandInput& WithUpperBound(double value) { SetUpperBound(value); return *this;}

  private:

    double m_lowerBound;
    bool m_lowerBoundHasBeenSet = false;

    double m_upperBound;
    bool m_upperBoundHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
