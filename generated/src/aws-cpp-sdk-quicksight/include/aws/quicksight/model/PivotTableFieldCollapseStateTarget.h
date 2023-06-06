/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DataPathValue.h>
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
   * <p>The target of a pivot table field collapse state.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableFieldCollapseStateTarget">AWS
   * API Reference</a></p>
   */
  class PivotTableFieldCollapseStateTarget
  {
  public:
    AWS_QUICKSIGHT_API PivotTableFieldCollapseStateTarget();
    AWS_QUICKSIGHT_API PivotTableFieldCollapseStateTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableFieldCollapseStateTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field ID of the pivot table that the collapse state needs to be set
     * to.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }

    /**
     * <p>The field ID of the pivot table that the collapse state needs to be set
     * to.</p>
     */
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }

    /**
     * <p>The field ID of the pivot table that the collapse state needs to be set
     * to.</p>
     */
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }

    /**
     * <p>The field ID of the pivot table that the collapse state needs to be set
     * to.</p>
     */
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }

    /**
     * <p>The field ID of the pivot table that the collapse state needs to be set
     * to.</p>
     */
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }

    /**
     * <p>The field ID of the pivot table that the collapse state needs to be set
     * to.</p>
     */
    inline PivotTableFieldCollapseStateTarget& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}

    /**
     * <p>The field ID of the pivot table that the collapse state needs to be set
     * to.</p>
     */
    inline PivotTableFieldCollapseStateTarget& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}

    /**
     * <p>The field ID of the pivot table that the collapse state needs to be set
     * to.</p>
     */
    inline PivotTableFieldCollapseStateTarget& WithFieldId(const char* value) { SetFieldId(value); return *this;}


    /**
     * <p>The data path of the pivot table's header. Used to set the collapse
     * state.</p>
     */
    inline const Aws::Vector<DataPathValue>& GetFieldDataPathValues() const{ return m_fieldDataPathValues; }

    /**
     * <p>The data path of the pivot table's header. Used to set the collapse
     * state.</p>
     */
    inline bool FieldDataPathValuesHasBeenSet() const { return m_fieldDataPathValuesHasBeenSet; }

    /**
     * <p>The data path of the pivot table's header. Used to set the collapse
     * state.</p>
     */
    inline void SetFieldDataPathValues(const Aws::Vector<DataPathValue>& value) { m_fieldDataPathValuesHasBeenSet = true; m_fieldDataPathValues = value; }

    /**
     * <p>The data path of the pivot table's header. Used to set the collapse
     * state.</p>
     */
    inline void SetFieldDataPathValues(Aws::Vector<DataPathValue>&& value) { m_fieldDataPathValuesHasBeenSet = true; m_fieldDataPathValues = std::move(value); }

    /**
     * <p>The data path of the pivot table's header. Used to set the collapse
     * state.</p>
     */
    inline PivotTableFieldCollapseStateTarget& WithFieldDataPathValues(const Aws::Vector<DataPathValue>& value) { SetFieldDataPathValues(value); return *this;}

    /**
     * <p>The data path of the pivot table's header. Used to set the collapse
     * state.</p>
     */
    inline PivotTableFieldCollapseStateTarget& WithFieldDataPathValues(Aws::Vector<DataPathValue>&& value) { SetFieldDataPathValues(std::move(value)); return *this;}

    /**
     * <p>The data path of the pivot table's header. Used to set the collapse
     * state.</p>
     */
    inline PivotTableFieldCollapseStateTarget& AddFieldDataPathValues(const DataPathValue& value) { m_fieldDataPathValuesHasBeenSet = true; m_fieldDataPathValues.push_back(value); return *this; }

    /**
     * <p>The data path of the pivot table's header. Used to set the collapse
     * state.</p>
     */
    inline PivotTableFieldCollapseStateTarget& AddFieldDataPathValues(DataPathValue&& value) { m_fieldDataPathValuesHasBeenSet = true; m_fieldDataPathValues.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::Vector<DataPathValue> m_fieldDataPathValues;
    bool m_fieldDataPathValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
