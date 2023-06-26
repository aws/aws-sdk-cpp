/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/StringFormatConfiguration.h>
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
   * <p>The dimension type field with categorical type columns..</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CategoricalDimensionField">AWS
   * API Reference</a></p>
   */
  class CategoricalDimensionField
  {
  public:
    AWS_QUICKSIGHT_API CategoricalDimensionField();
    AWS_QUICKSIGHT_API CategoricalDimensionField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CategoricalDimensionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The custom field ID.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }

    /**
     * <p>The custom field ID.</p>
     */
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }

    /**
     * <p>The custom field ID.</p>
     */
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }

    /**
     * <p>The custom field ID.</p>
     */
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }

    /**
     * <p>The custom field ID.</p>
     */
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }

    /**
     * <p>The custom field ID.</p>
     */
    inline CategoricalDimensionField& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}

    /**
     * <p>The custom field ID.</p>
     */
    inline CategoricalDimensionField& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}

    /**
     * <p>The custom field ID.</p>
     */
    inline CategoricalDimensionField& WithFieldId(const char* value) { SetFieldId(value); return *this;}


    /**
     * <p>The column that is used in the <code>CategoricalDimensionField</code>.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }

    /**
     * <p>The column that is used in the <code>CategoricalDimensionField</code>.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The column that is used in the <code>CategoricalDimensionField</code>.</p>
     */
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The column that is used in the <code>CategoricalDimensionField</code>.</p>
     */
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }

    /**
     * <p>The column that is used in the <code>CategoricalDimensionField</code>.</p>
     */
    inline CategoricalDimensionField& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}

    /**
     * <p>The column that is used in the <code>CategoricalDimensionField</code>.</p>
     */
    inline CategoricalDimensionField& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}


    /**
     * <p>The custom hierarchy ID.</p>
     */
    inline const Aws::String& GetHierarchyId() const{ return m_hierarchyId; }

    /**
     * <p>The custom hierarchy ID.</p>
     */
    inline bool HierarchyIdHasBeenSet() const { return m_hierarchyIdHasBeenSet; }

    /**
     * <p>The custom hierarchy ID.</p>
     */
    inline void SetHierarchyId(const Aws::String& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = value; }

    /**
     * <p>The custom hierarchy ID.</p>
     */
    inline void SetHierarchyId(Aws::String&& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = std::move(value); }

    /**
     * <p>The custom hierarchy ID.</p>
     */
    inline void SetHierarchyId(const char* value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId.assign(value); }

    /**
     * <p>The custom hierarchy ID.</p>
     */
    inline CategoricalDimensionField& WithHierarchyId(const Aws::String& value) { SetHierarchyId(value); return *this;}

    /**
     * <p>The custom hierarchy ID.</p>
     */
    inline CategoricalDimensionField& WithHierarchyId(Aws::String&& value) { SetHierarchyId(std::move(value)); return *this;}

    /**
     * <p>The custom hierarchy ID.</p>
     */
    inline CategoricalDimensionField& WithHierarchyId(const char* value) { SetHierarchyId(value); return *this;}


    /**
     * <p>The format configuration of the field.</p>
     */
    inline const StringFormatConfiguration& GetFormatConfiguration() const{ return m_formatConfiguration; }

    /**
     * <p>The format configuration of the field.</p>
     */
    inline bool FormatConfigurationHasBeenSet() const { return m_formatConfigurationHasBeenSet; }

    /**
     * <p>The format configuration of the field.</p>
     */
    inline void SetFormatConfiguration(const StringFormatConfiguration& value) { m_formatConfigurationHasBeenSet = true; m_formatConfiguration = value; }

    /**
     * <p>The format configuration of the field.</p>
     */
    inline void SetFormatConfiguration(StringFormatConfiguration&& value) { m_formatConfigurationHasBeenSet = true; m_formatConfiguration = std::move(value); }

    /**
     * <p>The format configuration of the field.</p>
     */
    inline CategoricalDimensionField& WithFormatConfiguration(const StringFormatConfiguration& value) { SetFormatConfiguration(value); return *this;}

    /**
     * <p>The format configuration of the field.</p>
     */
    inline CategoricalDimensionField& WithFormatConfiguration(StringFormatConfiguration&& value) { SetFormatConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    Aws::String m_hierarchyId;
    bool m_hierarchyIdHasBeenSet = false;

    StringFormatConfiguration m_formatConfiguration;
    bool m_formatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
