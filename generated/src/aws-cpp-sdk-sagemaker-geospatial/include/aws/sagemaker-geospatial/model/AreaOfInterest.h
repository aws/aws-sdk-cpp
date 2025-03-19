/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/AreaOfInterestGeometry.h>
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
   * <p>The geographic extent of the Earth Observation job.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/AreaOfInterest">AWS
   * API Reference</a></p>
   */
  class AreaOfInterest
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API AreaOfInterest() = default;
    AWS_SAGEMAKERGEOSPATIAL_API AreaOfInterest(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API AreaOfInterest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A GeoJSON object representing the geographic extent in the coordinate
     * space.</p>
     */
    inline const AreaOfInterestGeometry& GetAreaOfInterestGeometry() const { return m_areaOfInterestGeometry; }
    inline bool AreaOfInterestGeometryHasBeenSet() const { return m_areaOfInterestGeometryHasBeenSet; }
    template<typename AreaOfInterestGeometryT = AreaOfInterestGeometry>
    void SetAreaOfInterestGeometry(AreaOfInterestGeometryT&& value) { m_areaOfInterestGeometryHasBeenSet = true; m_areaOfInterestGeometry = std::forward<AreaOfInterestGeometryT>(value); }
    template<typename AreaOfInterestGeometryT = AreaOfInterestGeometry>
    AreaOfInterest& WithAreaOfInterestGeometry(AreaOfInterestGeometryT&& value) { SetAreaOfInterestGeometry(std::forward<AreaOfInterestGeometryT>(value)); return *this;}
    ///@}
  private:

    AreaOfInterestGeometry m_areaOfInterestGeometry;
    bool m_areaOfInterestGeometryHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
