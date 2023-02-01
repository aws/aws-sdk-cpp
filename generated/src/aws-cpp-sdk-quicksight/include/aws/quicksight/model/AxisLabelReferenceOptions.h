/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
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
   * <p>The reference that specifies where the axis label is applied
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AxisLabelReferenceOptions">AWS
   * API Reference</a></p>
   */
  class AxisLabelReferenceOptions
  {
  public:
    AWS_QUICKSIGHT_API AxisLabelReferenceOptions();
    AWS_QUICKSIGHT_API AxisLabelReferenceOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisLabelReferenceOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field that the axis label is targeted to.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }

    /**
     * <p>The field that the axis label is targeted to.</p>
     */
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }

    /**
     * <p>The field that the axis label is targeted to.</p>
     */
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }

    /**
     * <p>The field that the axis label is targeted to.</p>
     */
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }

    /**
     * <p>The field that the axis label is targeted to.</p>
     */
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }

    /**
     * <p>The field that the axis label is targeted to.</p>
     */
    inline AxisLabelReferenceOptions& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}

    /**
     * <p>The field that the axis label is targeted to.</p>
     */
    inline AxisLabelReferenceOptions& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}

    /**
     * <p>The field that the axis label is targeted to.</p>
     */
    inline AxisLabelReferenceOptions& WithFieldId(const char* value) { SetFieldId(value); return *this;}


    /**
     * <p>The column that the axis label is targeted to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }

    /**
     * <p>The column that the axis label is targeted to.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The column that the axis label is targeted to.</p>
     */
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The column that the axis label is targeted to.</p>
     */
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }

    /**
     * <p>The column that the axis label is targeted to.</p>
     */
    inline AxisLabelReferenceOptions& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}

    /**
     * <p>The column that the axis label is targeted to.</p>
     */
    inline AxisLabelReferenceOptions& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}

  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
