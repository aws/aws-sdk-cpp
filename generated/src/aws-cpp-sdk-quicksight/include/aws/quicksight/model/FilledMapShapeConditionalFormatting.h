/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ShapeConditionalFormat.h>
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
   * <p>The conditional formatting that determines the shape of the filled
   * map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilledMapShapeConditionalFormatting">AWS
   * API Reference</a></p>
   */
  class FilledMapShapeConditionalFormatting
  {
  public:
    AWS_QUICKSIGHT_API FilledMapShapeConditionalFormatting();
    AWS_QUICKSIGHT_API FilledMapShapeConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilledMapShapeConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field ID of the filled map shape.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }
    inline FilledMapShapeConditionalFormatting& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}
    inline FilledMapShapeConditionalFormatting& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}
    inline FilledMapShapeConditionalFormatting& WithFieldId(const char* value) { SetFieldId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditional formatting that determines the background color of a filled
     * map's shape.</p>
     */
    inline const ShapeConditionalFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const ShapeConditionalFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(ShapeConditionalFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline FilledMapShapeConditionalFormatting& WithFormat(const ShapeConditionalFormat& value) { SetFormat(value); return *this;}
    inline FilledMapShapeConditionalFormatting& WithFormat(ShapeConditionalFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    ShapeConditionalFormat m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
