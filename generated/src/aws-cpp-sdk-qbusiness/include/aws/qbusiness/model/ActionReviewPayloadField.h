/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/ActionPayloadFieldType.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/ActionReviewPayloadFieldAllowedValue.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>A user input field in an plugin action review payload.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ActionReviewPayloadField">AWS
   * API Reference</a></p>
   */
  class ActionReviewPayloadField
  {
  public:
    AWS_QBUSINESS_API ActionReviewPayloadField() = default;
    AWS_QBUSINESS_API ActionReviewPayloadField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ActionReviewPayloadField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the field. </p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    ActionReviewPayloadField& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display order of fields in a payload.</p>
     */
    inline int GetDisplayOrder() const { return m_displayOrder; }
    inline bool DisplayOrderHasBeenSet() const { return m_displayOrderHasBeenSet; }
    inline void SetDisplayOrder(int value) { m_displayOrderHasBeenSet = true; m_displayOrder = value; }
    inline ActionReviewPayloadField& WithDisplayOrder(int value) { SetDisplayOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field level description of each action review input field. This could be
     * an explanation of the field. In the Amazon Q Business web experience, these
     * descriptions could be used to display as tool tips to help users understand the
     * field. </p>
     */
    inline const Aws::String& GetDisplayDescription() const { return m_displayDescription; }
    inline bool DisplayDescriptionHasBeenSet() const { return m_displayDescriptionHasBeenSet; }
    template<typename DisplayDescriptionT = Aws::String>
    void SetDisplayDescription(DisplayDescriptionT&& value) { m_displayDescriptionHasBeenSet = true; m_displayDescription = std::forward<DisplayDescriptionT>(value); }
    template<typename DisplayDescriptionT = Aws::String>
    ActionReviewPayloadField& WithDisplayDescription(DisplayDescriptionT&& value) { SetDisplayDescription(std::forward<DisplayDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of field. </p>
     */
    inline ActionPayloadFieldType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ActionPayloadFieldType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ActionReviewPayloadField& WithType(ActionPayloadFieldType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field value.</p>
     */
    inline Aws::Utils::DocumentView GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Utils::Document>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Utils::Document>
    ActionReviewPayloadField& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the field values that an end user can use to provide to
     * Amazon Q Business for Amazon Q Business to perform the requested plugin
     * action.</p>
     */
    inline const Aws::Vector<ActionReviewPayloadFieldAllowedValue>& GetAllowedValues() const { return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    template<typename AllowedValuesT = Aws::Vector<ActionReviewPayloadFieldAllowedValue>>
    void SetAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::forward<AllowedValuesT>(value); }
    template<typename AllowedValuesT = Aws::Vector<ActionReviewPayloadFieldAllowedValue>>
    ActionReviewPayloadField& WithAllowedValues(AllowedValuesT&& value) { SetAllowedValues(std::forward<AllowedValuesT>(value)); return *this;}
    template<typename AllowedValuesT = ActionReviewPayloadFieldAllowedValue>
    ActionReviewPayloadField& AddAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.emplace_back(std::forward<AllowedValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The expected data format for the action review input field value. For
     * example, in PTO request, <code>from</code> and <code>to</code> would be of
     * <code>datetime</code> allowed format. </p>
     */
    inline const Aws::String& GetAllowedFormat() const { return m_allowedFormat; }
    inline bool AllowedFormatHasBeenSet() const { return m_allowedFormatHasBeenSet; }
    template<typename AllowedFormatT = Aws::String>
    void SetAllowedFormat(AllowedFormatT&& value) { m_allowedFormatHasBeenSet = true; m_allowedFormat = std::forward<AllowedFormatT>(value); }
    template<typename AllowedFormatT = Aws::String>
    ActionReviewPayloadField& WithAllowedFormat(AllowedFormatT&& value) { SetAllowedFormat(std::forward<AllowedFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to create a custom form with array fields (fields with nested objects
     * inside an array).</p>
     */
    inline Aws::Utils::DocumentView GetArrayItemJsonSchema() const { return m_arrayItemJsonSchema; }
    inline bool ArrayItemJsonSchemaHasBeenSet() const { return m_arrayItemJsonSchemaHasBeenSet; }
    template<typename ArrayItemJsonSchemaT = Aws::Utils::Document>
    void SetArrayItemJsonSchema(ArrayItemJsonSchemaT&& value) { m_arrayItemJsonSchemaHasBeenSet = true; m_arrayItemJsonSchema = std::forward<ArrayItemJsonSchemaT>(value); }
    template<typename ArrayItemJsonSchemaT = Aws::Utils::Document>
    ActionReviewPayloadField& WithArrayItemJsonSchema(ArrayItemJsonSchemaT&& value) { SetArrayItemJsonSchema(std::forward<ArrayItemJsonSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about whether the field is required.</p>
     */
    inline bool GetRequired() const { return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline ActionReviewPayloadField& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}
  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    int m_displayOrder{0};
    bool m_displayOrderHasBeenSet = false;

    Aws::String m_displayDescription;
    bool m_displayDescriptionHasBeenSet = false;

    ActionPayloadFieldType m_type{ActionPayloadFieldType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::Document m_value;
    bool m_valueHasBeenSet = false;

    Aws::Vector<ActionReviewPayloadFieldAllowedValue> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    Aws::String m_allowedFormat;
    bool m_allowedFormatHasBeenSet = false;

    Aws::Utils::Document m_arrayItemJsonSchema;
    bool m_arrayItemJsonSchemaHasBeenSet = false;

    bool m_required{false};
    bool m_requiredHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
