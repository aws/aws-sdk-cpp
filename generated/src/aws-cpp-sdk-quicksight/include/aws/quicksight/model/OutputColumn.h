/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnDataType.h>
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
   * <p>Output column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/OutputColumn">AWS
   * API Reference</a></p>
   */
  class OutputColumn
  {
  public:
    AWS_QUICKSIGHT_API OutputColumn();
    AWS_QUICKSIGHT_API OutputColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API OutputColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display name of the column..</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline OutputColumn& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline OutputColumn& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline OutputColumn& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for a column.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline OutputColumn& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline OutputColumn& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline OutputColumn& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the column.</p>
     */
    inline const ColumnDataType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ColumnDataType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ColumnDataType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline OutputColumn& WithType(const ColumnDataType& value) { SetType(value); return *this;}
    inline OutputColumn& WithType(ColumnDataType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sub data type of the column.</p>
     */
    inline const ColumnDataSubType& GetSubType() const{ return m_subType; }
    inline bool SubTypeHasBeenSet() const { return m_subTypeHasBeenSet; }
    inline void SetSubType(const ColumnDataSubType& value) { m_subTypeHasBeenSet = true; m_subType = value; }
    inline void SetSubType(ColumnDataSubType&& value) { m_subTypeHasBeenSet = true; m_subType = std::move(value); }
    inline OutputColumn& WithSubType(const ColumnDataSubType& value) { SetSubType(value); return *this;}
    inline OutputColumn& WithSubType(ColumnDataSubType&& value) { SetSubType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ColumnDataType m_type;
    bool m_typeHasBeenSet = false;

    ColumnDataSubType m_subType;
    bool m_subTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
