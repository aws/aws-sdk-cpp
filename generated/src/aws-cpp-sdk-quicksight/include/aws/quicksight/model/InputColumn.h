/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/InputColumnDataType.h>
#include <aws/quicksight/model/ColumnDataSubType.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Metadata for a column that is used as the input of a transform
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/InputColumn">AWS
   * API Reference</a></p>
   */
  class InputColumn
  {
  public:
    AWS_QUICKSIGHT_API InputColumn();
    AWS_QUICKSIGHT_API InputColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API InputColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of this column in the underlying data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InputColumn& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InputColumn& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InputColumn& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the column.</p>
     */
    inline const InputColumnDataType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const InputColumnDataType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(InputColumnDataType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline InputColumn& WithType(const InputColumnDataType& value) { SetType(value); return *this;}
    inline InputColumn& WithType(InputColumnDataType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sub data type of the column. Sub types are only available for decimal
     * columns that are part of a SPICE dataset.</p>
     */
    inline const ColumnDataSubType& GetSubType() const{ return m_subType; }
    inline bool SubTypeHasBeenSet() const { return m_subTypeHasBeenSet; }
    inline void SetSubType(const ColumnDataSubType& value) { m_subTypeHasBeenSet = true; m_subType = value; }
    inline void SetSubType(ColumnDataSubType&& value) { m_subTypeHasBeenSet = true; m_subType = std::move(value); }
    inline InputColumn& WithSubType(const ColumnDataSubType& value) { SetSubType(value); return *this;}
    inline InputColumn& WithSubType(ColumnDataSubType&& value) { SetSubType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InputColumnDataType m_type;
    bool m_typeHasBeenSet = false;

    ColumnDataSubType m_subType;
    bool m_subTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
