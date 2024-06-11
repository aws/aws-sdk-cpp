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
    AWS_QUICKSIGHT_API DataPathValue();
    AWS_QUICKSIGHT_API DataPathValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataPathValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field ID of the field that needs to be sorted.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }
    inline DataPathValue& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}
    inline DataPathValue& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}
    inline DataPathValue& WithFieldId(const char* value) { SetFieldId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual value of the field that needs to be sorted.</p>
     */
    inline const Aws::String& GetFieldValue() const{ return m_fieldValue; }
    inline bool FieldValueHasBeenSet() const { return m_fieldValueHasBeenSet; }
    inline void SetFieldValue(const Aws::String& value) { m_fieldValueHasBeenSet = true; m_fieldValue = value; }
    inline void SetFieldValue(Aws::String&& value) { m_fieldValueHasBeenSet = true; m_fieldValue = std::move(value); }
    inline void SetFieldValue(const char* value) { m_fieldValueHasBeenSet = true; m_fieldValue.assign(value); }
    inline DataPathValue& WithFieldValue(const Aws::String& value) { SetFieldValue(value); return *this;}
    inline DataPathValue& WithFieldValue(Aws::String&& value) { SetFieldValue(std::move(value)); return *this;}
    inline DataPathValue& WithFieldValue(const char* value) { SetFieldValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type configuration of the field.</p>
     */
    inline const DataPathType& GetDataPathType() const{ return m_dataPathType; }
    inline bool DataPathTypeHasBeenSet() const { return m_dataPathTypeHasBeenSet; }
    inline void SetDataPathType(const DataPathType& value) { m_dataPathTypeHasBeenSet = true; m_dataPathType = value; }
    inline void SetDataPathType(DataPathType&& value) { m_dataPathTypeHasBeenSet = true; m_dataPathType = std::move(value); }
    inline DataPathValue& WithDataPathType(const DataPathType& value) { SetDataPathType(value); return *this;}
    inline DataPathValue& WithDataPathType(DataPathType&& value) { SetDataPathType(std::move(value)); return *this;}
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
