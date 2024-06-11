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
   * <p>The structure representing the EoCloudCover filter.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/EoCloudCoverInput">AWS
   * API Reference</a></p>
   */
  class EoCloudCoverInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API EoCloudCoverInput();
    AWS_SAGEMAKERGEOSPATIAL_API EoCloudCoverInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API EoCloudCoverInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Lower bound for EoCloudCover.</p>
     */
    inline double GetLowerBound() const{ return m_lowerBound; }
    inline bool LowerBoundHasBeenSet() const { return m_lowerBoundHasBeenSet; }
    inline void SetLowerBound(double value) { m_lowerBoundHasBeenSet = true; m_lowerBound = value; }
    inline EoCloudCoverInput& WithLowerBound(double value) { SetLowerBound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Upper bound for EoCloudCover.</p>
     */
    inline double GetUpperBound() const{ return m_upperBound; }
    inline bool UpperBoundHasBeenSet() const { return m_upperBoundHasBeenSet; }
    inline void SetUpperBound(double value) { m_upperBoundHasBeenSet = true; m_upperBound = value; }
    inline EoCloudCoverInput& WithUpperBound(double value) { SetUpperBound(value); return *this;}
    ///@}
  private:

    double m_lowerBound;
    bool m_lowerBoundHasBeenSet = false;

    double m_upperBound;
    bool m_upperBoundHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
