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
    AWS_PIPES_API DimensionMapping();
    AWS_PIPES_API DimensionMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API DimensionMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Dynamic path to the dimension value in the source event.</p>
     */
    inline const Aws::String& GetDimensionValue() const{ return m_dimensionValue; }
    inline bool DimensionValueHasBeenSet() const { return m_dimensionValueHasBeenSet; }
    inline void SetDimensionValue(const Aws::String& value) { m_dimensionValueHasBeenSet = true; m_dimensionValue = value; }
    inline void SetDimensionValue(Aws::String&& value) { m_dimensionValueHasBeenSet = true; m_dimensionValue = std::move(value); }
    inline void SetDimensionValue(const char* value) { m_dimensionValueHasBeenSet = true; m_dimensionValue.assign(value); }
    inline DimensionMapping& WithDimensionValue(const Aws::String& value) { SetDimensionValue(value); return *this;}
    inline DimensionMapping& WithDimensionValue(Aws::String&& value) { SetDimensionValue(std::move(value)); return *this;}
    inline DimensionMapping& WithDimensionValue(const char* value) { SetDimensionValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the dimension for the time-series data.</p>
     */
    inline const DimensionValueType& GetDimensionValueType() const{ return m_dimensionValueType; }
    inline bool DimensionValueTypeHasBeenSet() const { return m_dimensionValueTypeHasBeenSet; }
    inline void SetDimensionValueType(const DimensionValueType& value) { m_dimensionValueTypeHasBeenSet = true; m_dimensionValueType = value; }
    inline void SetDimensionValueType(DimensionValueType&& value) { m_dimensionValueTypeHasBeenSet = true; m_dimensionValueType = std::move(value); }
    inline DimensionMapping& WithDimensionValueType(const DimensionValueType& value) { SetDimensionValueType(value); return *this;}
    inline DimensionMapping& WithDimensionValueType(DimensionValueType&& value) { SetDimensionValueType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata attributes of the time series. For example, the name and
     * Availability Zone of an Amazon EC2 instance or the name of the manufacturer of a
     * wind turbine are dimensions.</p>
     */
    inline const Aws::String& GetDimensionName() const{ return m_dimensionName; }
    inline bool DimensionNameHasBeenSet() const { return m_dimensionNameHasBeenSet; }
    inline void SetDimensionName(const Aws::String& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = value; }
    inline void SetDimensionName(Aws::String&& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = std::move(value); }
    inline void SetDimensionName(const char* value) { m_dimensionNameHasBeenSet = true; m_dimensionName.assign(value); }
    inline DimensionMapping& WithDimensionName(const Aws::String& value) { SetDimensionName(value); return *this;}
    inline DimensionMapping& WithDimensionName(Aws::String&& value) { SetDimensionName(std::move(value)); return *this;}
    inline DimensionMapping& WithDimensionName(const char* value) { SetDimensionName(value); return *this;}
    ///@}
  private:

    Aws::String m_dimensionValue;
    bool m_dimensionValueHasBeenSet = false;

    DimensionValueType m_dimensionValueType;
    bool m_dimensionValueTypeHasBeenSet = false;

    Aws::String m_dimensionName;
    bool m_dimensionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
