/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataPathType.h>
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
   * <p>The data path that needs to be sorted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataPathValue">AWS
   * API Reference</a></p>
   */
  class DataPathValue
  {
  public:
    AWS_QUICKSIGHT_API DataPathValue() = default;
    AWS_QUICKSIGHT_API DataPathValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataPathValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field ID of the field that needs to be sorted.</p>
     */
    inline const Aws::String& GetFieldId() const { return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    template<typename FieldIdT = Aws::String>
    void SetFieldId(FieldIdT&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::forward<FieldIdT>(value); }
    template<typename FieldIdT = Aws::String>
    DataPathValue& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual value of the field that needs to be sorted.</p>
     */
    inline const Aws::String& GetFieldValue() const { return m_fieldValue; }
    inline bool FieldValueHasBeenSet() const { return m_fieldValueHasBeenSet; }
    template<typename FieldValueT = Aws::String>
    void SetFieldValue(FieldValueT&& value) { m_fieldValueHasBeenSet = true; m_fieldValue = std::forward<FieldValueT>(value); }
    template<typename FieldValueT = Aws::String>
    DataPathValue& WithFieldValue(FieldValueT&& value) { SetFieldValue(std::forward<FieldValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type configuration of the field.</p>
     */
    inline const DataPathType& GetDataPathType() const { return m_dataPathType; }
    inline bool DataPathTypeHasBeenSet() const { return m_dataPathTypeHasBeenSet; }
    template<typename DataPathTypeT = DataPathType>
    void SetDataPathType(DataPathTypeT&& value) { m_dataPathTypeHasBeenSet = true; m_dataPathType = std::forward<DataPathTypeT>(value); }
    template<typename DataPathTypeT = DataPathType>
    DataPathValue& WithDataPathType(DataPathTypeT&& value) { SetDataPathType(std::forward<DataPathTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::String m_fieldValue;
    bool m_fieldValueHasBeenSet = false;

    DataPathType m_dataPathType;
    bool m_dataPathTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
