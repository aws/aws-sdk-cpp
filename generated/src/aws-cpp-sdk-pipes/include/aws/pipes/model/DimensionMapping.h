/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/DimensionValueType.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>Maps source data to a dimension in the target Timestream for LiveAnalytics
   * table.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/timestream/latest/developerguide/concepts.html">Amazon
   * Timestream for LiveAnalytics concepts</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/DimensionMapping">AWS
   * API Reference</a></p>
   */
  class DimensionMapping
  {
  public:
    AWS_PIPES_API DimensionMapping() = default;
    AWS_PIPES_API DimensionMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API DimensionMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Dynamic path to the dimension value in the source event.</p>
     */
    inline const Aws::String& GetDimensionValue() const { return m_dimensionValue; }
    inline bool DimensionValueHasBeenSet() const { return m_dimensionValueHasBeenSet; }
    template<typename DimensionValueT = Aws::String>
    void SetDimensionValue(DimensionValueT&& value) { m_dimensionValueHasBeenSet = true; m_dimensionValue = std::forward<DimensionValueT>(value); }
    template<typename DimensionValueT = Aws::String>
    DimensionMapping& WithDimensionValue(DimensionValueT&& value) { SetDimensionValue(std::forward<DimensionValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the dimension for the time-series data.</p>
     */
    inline DimensionValueType GetDimensionValueType() const { return m_dimensionValueType; }
    inline bool DimensionValueTypeHasBeenSet() const { return m_dimensionValueTypeHasBeenSet; }
    inline void SetDimensionValueType(DimensionValueType value) { m_dimensionValueTypeHasBeenSet = true; m_dimensionValueType = value; }
    inline DimensionMapping& WithDimensionValueType(DimensionValueType value) { SetDimensionValueType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata attributes of the time series. For example, the name and
     * Availability Zone of an Amazon EC2 instance or the name of the manufacturer of a
     * wind turbine are dimensions.</p>
     */
    inline const Aws::String& GetDimensionName() const { return m_dimensionName; }
    inline bool DimensionNameHasBeenSet() const { return m_dimensionNameHasBeenSet; }
    template<typename DimensionNameT = Aws::String>
    void SetDimensionName(DimensionNameT&& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = std::forward<DimensionNameT>(value); }
    template<typename DimensionNameT = Aws::String>
    DimensionMapping& WithDimensionName(DimensionNameT&& value) { SetDimensionName(std::forward<DimensionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dimensionValue;
    bool m_dimensionValueHasBeenSet = false;

    DimensionValueType m_dimensionValueType{DimensionValueType::NOT_SET};
    bool m_dimensionValueTypeHasBeenSet = false;

    Aws::String m_dimensionName;
    bool m_dimensionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
