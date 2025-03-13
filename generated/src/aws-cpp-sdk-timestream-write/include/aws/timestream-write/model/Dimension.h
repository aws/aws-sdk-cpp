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
    AWS_TIMESTREAMWRITE_API Dimension() = default;
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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Dimension& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the dimension.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Dimension& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the dimension for the time-series data point.</p>
     */
    inline DimensionValueType GetDimensionValueType() const { return m_dimensionValueType; }
    inline bool DimensionValueTypeHasBeenSet() const { return m_dimensionValueTypeHasBeenSet; }
    inline void SetDimensionValueType(DimensionValueType value) { m_dimensionValueTypeHasBeenSet = true; m_dimensionValueType = value; }
    inline Dimension& WithDimensionValueType(DimensionValueType value) { SetDimensionValueType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    DimensionValueType m_dimensionValueType{DimensionValueType::NOT_SET};
    bool m_dimensionValueTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
