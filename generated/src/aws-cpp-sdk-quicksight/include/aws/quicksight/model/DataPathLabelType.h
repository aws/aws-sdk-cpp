/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Visibility.h>
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
   * <p>The option that specifies individual data values for labels.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataPathLabelType">AWS
   * API Reference</a></p>
   */
  class DataPathLabelType
  {
  public:
    AWS_QUICKSIGHT_API DataPathLabelType();
    AWS_QUICKSIGHT_API DataPathLabelType(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataPathLabelType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field ID of the field that the data label needs to be applied to.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }
    inline DataPathLabelType& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}
    inline DataPathLabelType& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}
    inline DataPathLabelType& WithFieldId(const char* value) { SetFieldId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual value of the field that is labeled.</p>
     */
    inline const Aws::String& GetFieldValue() const{ return m_fieldValue; }
    inline bool FieldValueHasBeenSet() const { return m_fieldValueHasBeenSet; }
    inline void SetFieldValue(const Aws::String& value) { m_fieldValueHasBeenSet = true; m_fieldValue = value; }
    inline void SetFieldValue(Aws::String&& value) { m_fieldValueHasBeenSet = true; m_fieldValue = std::move(value); }
    inline void SetFieldValue(const char* value) { m_fieldValueHasBeenSet = true; m_fieldValue.assign(value); }
    inline DataPathLabelType& WithFieldValue(const Aws::String& value) { SetFieldValue(value); return *this;}
    inline DataPathLabelType& WithFieldValue(Aws::String&& value) { SetFieldValue(std::move(value)); return *this;}
    inline DataPathLabelType& WithFieldValue(const char* value) { SetFieldValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the data label.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline DataPathLabelType& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}
    inline DataPathLabelType& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::String m_fieldValue;
    bool m_fieldValueHasBeenSet = false;

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
