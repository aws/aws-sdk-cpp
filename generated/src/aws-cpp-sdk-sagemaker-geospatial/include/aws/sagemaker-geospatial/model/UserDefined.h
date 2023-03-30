/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/Unit.h>
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
   * <p>The output resolution (in target georeferenced units) of the result of the
   * operation</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/UserDefined">AWS
   * API Reference</a></p>
   */
  class UserDefined
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API UserDefined();
    AWS_SAGEMAKERGEOSPATIAL_API UserDefined(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API UserDefined& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The units for output resolution of the result.</p>
     */
    inline const Unit& GetUnit() const{ return m_unit; }

    /**
     * <p>The units for output resolution of the result.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The units for output resolution of the result.</p>
     */
    inline void SetUnit(const Unit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The units for output resolution of the result.</p>
     */
    inline void SetUnit(Unit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The units for output resolution of the result.</p>
     */
    inline UserDefined& WithUnit(const Unit& value) { SetUnit(value); return *this;}

    /**
     * <p>The units for output resolution of the result.</p>
     */
    inline UserDefined& WithUnit(Unit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>The value for output resolution of the result.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value for output resolution of the result.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for output resolution of the result.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for output resolution of the result.</p>
     */
    inline UserDefined& WithValue(double value) { SetValue(value); return *this;}

  private:

    Unit m_unit;
    bool m_unitHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
