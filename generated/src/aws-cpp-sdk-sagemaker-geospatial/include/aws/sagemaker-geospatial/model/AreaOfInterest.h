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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/AreaOfInterest">AWS
   * API Reference</a></p>
   */
  class AreaOfInterest
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API AreaOfInterest();
    AWS_SAGEMAKERGEOSPATIAL_API AreaOfInterest(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API AreaOfInterest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const AreaOfInterestGeometry& GetAreaOfInterestGeometry() const{ return m_areaOfInterestGeometry; }

    /**
     * <p/>
     */
    inline bool AreaOfInterestGeometryHasBeenSet() const { return m_areaOfInterestGeometryHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAreaOfInterestGeometry(const AreaOfInterestGeometry& value) { m_areaOfInterestGeometryHasBeenSet = true; m_areaOfInterestGeometry = value; }

    /**
     * <p/>
     */
    inline void SetAreaOfInterestGeometry(AreaOfInterestGeometry&& value) { m_areaOfInterestGeometryHasBeenSet = true; m_areaOfInterestGeometry = std::move(value); }

    /**
     * <p/>
     */
    inline AreaOfInterest& WithAreaOfInterestGeometry(const AreaOfInterestGeometry& value) { SetAreaOfInterestGeometry(value); return *this;}

    /**
     * <p/>
     */
    inline AreaOfInterest& WithAreaOfInterestGeometry(AreaOfInterestGeometry&& value) { SetAreaOfInterestGeometry(std::move(value)); return *this;}

  private:

    AreaOfInterestGeometry m_areaOfInterestGeometry;
    bool m_areaOfInterestGeometryHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
