/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/DimensionValueType.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p>Represents the metadata attributes of the time series. For example, the name
   * and Availability Zone of an EC2 instance or the name of the manufacturer of a
   * wind turbine are dimensions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/Dimension">AWS
   * API Reference</a></p>
   */
  class Dimension
  {
  public:
    AWS_TIMESTREAMWRITE_API Dimension();
    AWS_TIMESTREAMWRITE_API Dimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Dimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Dimension represents the metadata attributes of the time series. For
     * example, the name and Availability Zone of an EC2 instance or the name of the
     * manufacturer of a wind turbine are dimensions. </p> <p>For constraints on
     * dimension names, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html#limits.naming">Naming
     * Constraints</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Dimension& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Dimension& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Dimension& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the dimension.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline Dimension& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline Dimension& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline Dimension& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the dimension for the time-series data point.</p>
     */
    inline const DimensionValueType& GetDimensionValueType() const{ return m_dimensionValueType; }
    inline bool DimensionValueTypeHasBeenSet() const { return m_dimensionValueTypeHasBeenSet; }
    inline void SetDimensionValueType(const DimensionValueType& value) { m_dimensionValueTypeHasBeenSet = true; m_dimensionValueType = value; }
    inline void SetDimensionValueType(DimensionValueType&& value) { m_dimensionValueTypeHasBeenSet = true; m_dimensionValueType = std::move(value); }
    inline Dimension& WithDimensionValueType(const DimensionValueType& value) { SetDimensionValueType(value); return *this;}
    inline Dimension& WithDimensionValueType(DimensionValueType&& value) { SetDimensionValueType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    DimensionValueType m_dimensionValueType;
    bool m_dimensionValueTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
