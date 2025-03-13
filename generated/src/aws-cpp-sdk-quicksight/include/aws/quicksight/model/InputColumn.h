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
    AWS_QUICKSIGHT_API InputColumn() = default;
    AWS_QUICKSIGHT_API InputColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API InputColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of this column in the underlying data source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InputColumn& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the column.</p>
     */
    inline InputColumnDataType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(InputColumnDataType value) { m_typeHasBeenSet = true; m_type = value; }
    inline InputColumn& WithType(InputColumnDataType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sub data type of the column. Sub types are only available for decimal
     * columns that are part of a SPICE dataset.</p>
     */
    inline ColumnDataSubType GetSubType() const { return m_subType; }
    inline bool SubTypeHasBeenSet() const { return m_subTypeHasBeenSet; }
    inline void SetSubType(ColumnDataSubType value) { m_subTypeHasBeenSet = true; m_subType = value; }
    inline InputColumn& WithSubType(ColumnDataSubType value) { SetSubType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InputColumnDataType m_type{InputColumnDataType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ColumnDataSubType m_subType{ColumnDataSubType::NOT_SET};
    bool m_subTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
