/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-query/model/DimensionValueType.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>This type is used to map column(s) from the query result to a dimension in
   * the destination table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DimensionMapping">AWS
   * API Reference</a></p>
   */
  class DimensionMapping
  {
  public:
    AWS_TIMESTREAMQUERY_API DimensionMapping();
    AWS_TIMESTREAMQUERY_API DimensionMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API DimensionMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Column name from query result.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DimensionMapping& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DimensionMapping& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DimensionMapping& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type for the dimension. </p>
     */
    inline const DimensionValueType& GetDimensionValueType() const{ return m_dimensionValueType; }
    inline bool DimensionValueTypeHasBeenSet() const { return m_dimensionValueTypeHasBeenSet; }
    inline void SetDimensionValueType(const DimensionValueType& value) { m_dimensionValueTypeHasBeenSet = true; m_dimensionValueType = value; }
    inline void SetDimensionValueType(DimensionValueType&& value) { m_dimensionValueTypeHasBeenSet = true; m_dimensionValueType = std::move(value); }
    inline DimensionMapping& WithDimensionValueType(const DimensionValueType& value) { SetDimensionValueType(value); return *this;}
    inline DimensionMapping& WithDimensionValueType(DimensionValueType&& value) { SetDimensionValueType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DimensionValueType m_dimensionValueType;
    bool m_dimensionValueTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
