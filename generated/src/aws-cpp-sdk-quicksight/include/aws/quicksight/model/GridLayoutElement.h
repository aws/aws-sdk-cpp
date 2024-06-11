﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/LayoutElementType.h>
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
   * <p>An element within a grid layout.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GridLayoutElement">AWS
   * API Reference</a></p>
   */
  class GridLayoutElement
  {
  public:
    AWS_QUICKSIGHT_API GridLayoutElement();
    AWS_QUICKSIGHT_API GridLayoutElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GridLayoutElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for an element within a grid layout.</p>
     */
    inline const Aws::String& GetElementId() const{ return m_elementId; }
    inline bool ElementIdHasBeenSet() const { return m_elementIdHasBeenSet; }
    inline void SetElementId(const Aws::String& value) { m_elementIdHasBeenSet = true; m_elementId = value; }
    inline void SetElementId(Aws::String&& value) { m_elementIdHasBeenSet = true; m_elementId = std::move(value); }
    inline void SetElementId(const char* value) { m_elementIdHasBeenSet = true; m_elementId.assign(value); }
    inline GridLayoutElement& WithElementId(const Aws::String& value) { SetElementId(value); return *this;}
    inline GridLayoutElement& WithElementId(Aws::String&& value) { SetElementId(std::move(value)); return *this;}
    inline GridLayoutElement& WithElementId(const char* value) { SetElementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of element.</p>
     */
    inline const LayoutElementType& GetElementType() const{ return m_elementType; }
    inline bool ElementTypeHasBeenSet() const { return m_elementTypeHasBeenSet; }
    inline void SetElementType(const LayoutElementType& value) { m_elementTypeHasBeenSet = true; m_elementType = value; }
    inline void SetElementType(LayoutElementType&& value) { m_elementTypeHasBeenSet = true; m_elementType = std::move(value); }
    inline GridLayoutElement& WithElementType(const LayoutElementType& value) { SetElementType(value); return *this;}
    inline GridLayoutElement& WithElementType(LayoutElementType&& value) { SetElementType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column index for the upper left corner of an element.</p>
     */
    inline int GetColumnIndex() const{ return m_columnIndex; }
    inline bool ColumnIndexHasBeenSet() const { return m_columnIndexHasBeenSet; }
    inline void SetColumnIndex(int value) { m_columnIndexHasBeenSet = true; m_columnIndex = value; }
    inline GridLayoutElement& WithColumnIndex(int value) { SetColumnIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The width of a grid element expressed as a number of grid columns.</p>
     */
    inline int GetColumnSpan() const{ return m_columnSpan; }
    inline bool ColumnSpanHasBeenSet() const { return m_columnSpanHasBeenSet; }
    inline void SetColumnSpan(int value) { m_columnSpanHasBeenSet = true; m_columnSpan = value; }
    inline GridLayoutElement& WithColumnSpan(int value) { SetColumnSpan(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The row index for the upper left corner of an element.</p>
     */
    inline int GetRowIndex() const{ return m_rowIndex; }
    inline bool RowIndexHasBeenSet() const { return m_rowIndexHasBeenSet; }
    inline void SetRowIndex(int value) { m_rowIndexHasBeenSet = true; m_rowIndex = value; }
    inline GridLayoutElement& WithRowIndex(int value) { SetRowIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The height of a grid element expressed as a number of grid rows.</p>
     */
    inline int GetRowSpan() const{ return m_rowSpan; }
    inline bool RowSpanHasBeenSet() const { return m_rowSpanHasBeenSet; }
    inline void SetRowSpan(int value) { m_rowSpanHasBeenSet = true; m_rowSpan = value; }
    inline GridLayoutElement& WithRowSpan(int value) { SetRowSpan(value); return *this;}
    ///@}
  private:

    Aws::String m_elementId;
    bool m_elementIdHasBeenSet = false;

    LayoutElementType m_elementType;
    bool m_elementTypeHasBeenSet = false;

    int m_columnIndex;
    bool m_columnIndexHasBeenSet = false;

    int m_columnSpan;
    bool m_columnSpanHasBeenSet = false;

    int m_rowIndex;
    bool m_rowIndexHasBeenSet = false;

    int m_rowSpan;
    bool m_rowSpanHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
