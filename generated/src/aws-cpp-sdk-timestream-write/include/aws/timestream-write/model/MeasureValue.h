/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/MeasureValueType.h>
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
   * <p> Represents the data attribute of the time series. For example, the CPU
   * utilization of an EC2 instance or the RPM of a wind turbine are measures.
   * MeasureValue has both name and value. </p> <p> MeasureValue is only allowed for
   * type <code>MULTI</code>. Using <code>MULTI</code> type, you can pass multiple
   * data attributes associated with the same time series in a single record
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/MeasureValue">AWS
   * API Reference</a></p>
   */
  class MeasureValue
  {
  public:
    AWS_TIMESTREAMWRITE_API MeasureValue() = default;
    AWS_TIMESTREAMWRITE_API MeasureValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API MeasureValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the MeasureValue. </p> <p> For constraints on MeasureValue
     * names, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html#limits.naming">
     * Naming Constraints</a> in the Amazon Timestream Developer Guide.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MeasureValue& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value for the MeasureValue. For information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/writes.html#writes.data-types">Data
     * types</a>.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    MeasureValue& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the data type of the MeasureValue for the time-series data
     * point.</p>
     */
    inline MeasureValueType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MeasureValueType value) { m_typeHasBeenSet = true; m_type = value; }
    inline MeasureValue& WithType(MeasureValueType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    MeasureValueType m_type{MeasureValueType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
