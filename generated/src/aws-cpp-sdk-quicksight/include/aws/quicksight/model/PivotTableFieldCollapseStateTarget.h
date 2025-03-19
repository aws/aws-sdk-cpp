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
    AWS_QUICKSIGHT_API PivotTableFieldCollapseStateTarget() = default;
    AWS_QUICKSIGHT_API PivotTableFieldCollapseStateTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableFieldCollapseStateTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field ID of the pivot table that the collapse state needs to be set
     * to.</p>
     */
    inline const Aws::String& GetFieldId() const { return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    template<typename FieldIdT = Aws::String>
    void SetFieldId(FieldIdT&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::forward<FieldIdT>(value); }
    template<typename FieldIdT = Aws::String>
    PivotTableFieldCollapseStateTarget& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data path of the pivot table's header. Used to set the collapse
     * state.</p>
     */
    inline const Aws::Vector<DataPathValue>& GetFieldDataPathValues() const { return m_fieldDataPathValues; }
    inline bool FieldDataPathValuesHasBeenSet() const { return m_fieldDataPathValuesHasBeenSet; }
    template<typename FieldDataPathValuesT = Aws::Vector<DataPathValue>>
    void SetFieldDataPathValues(FieldDataPathValuesT&& value) { m_fieldDataPathValuesHasBeenSet = true; m_fieldDataPathValues = std::forward<FieldDataPathValuesT>(value); }
    template<typename FieldDataPathValuesT = Aws::Vector<DataPathValue>>
    PivotTableFieldCollapseStateTarget& WithFieldDataPathValues(FieldDataPathValuesT&& value) { SetFieldDataPathValues(std::forward<FieldDataPathValuesT>(value)); return *this;}
    template<typename FieldDataPathValuesT = DataPathValue>
    PivotTableFieldCollapseStateTarget& AddFieldDataPathValues(FieldDataPathValuesT&& value) { m_fieldDataPathValuesHasBeenSet = true; m_fieldDataPathValues.emplace_back(std::forward<FieldDataPathValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::Vector<DataPathValue> m_fieldDataPathValues;
    bool m_fieldDataPathValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
