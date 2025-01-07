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
    AWS_QBUSINESS_API ActionReviewPayloadField();
    AWS_QBUSINESS_API ActionReviewPayloadField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ActionReviewPayloadField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the field. </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline ActionReviewPayloadField& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline ActionReviewPayloadField& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline ActionReviewPayloadField& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display order of fields in a payload.</p>
     */
    inline int GetDisplayOrder() const{ return m_displayOrder; }
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
    inline const Aws::String& GetDisplayDescription() const{ return m_displayDescription; }
    inline bool DisplayDescriptionHasBeenSet() const { return m_displayDescriptionHasBeenSet; }
    inline void SetDisplayDescription(const Aws::String& value) { m_displayDescriptionHasBeenSet = true; m_displayDescription = value; }
    inline void SetDisplayDescription(Aws::String&& value) { m_displayDescriptionHasBeenSet = true; m_displayDescription = std::move(value); }
    inline void SetDisplayDescription(const char* value) { m_displayDescriptionHasBeenSet = true; m_displayDescription.assign(value); }
    inline ActionReviewPayloadField& WithDisplayDescription(const Aws::String& value) { SetDisplayDescription(value); return *this;}
    inline ActionReviewPayloadField& WithDisplayDescription(Aws::String&& value) { SetDisplayDescription(std::move(value)); return *this;}
    inline ActionReviewPayloadField& WithDisplayDescription(const char* value) { SetDisplayDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of field. </p>
     */
    inline const ActionPayloadFieldType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ActionPayloadFieldType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ActionPayloadFieldType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ActionReviewPayloadField& WithType(const ActionPayloadFieldType& value) { SetType(value); return *this;}
    inline ActionReviewPayloadField& WithType(ActionPayloadFieldType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field value.</p>
     */
    inline Aws::Utils::DocumentView GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::Utils::Document& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::Utils::Document&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline ActionReviewPayloadField& WithValue(const Aws::Utils::Document& value) { SetValue(value); return *this;}
    inline ActionReviewPayloadField& WithValue(Aws::Utils::Document&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the field values that an end user can use to provide to
     * Amazon Q Business for Amazon Q Business to perform the requested plugin
     * action.</p>
     */
    inline const Aws::Vector<ActionReviewPayloadFieldAllowedValue>& GetAllowedValues() const{ return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    inline void SetAllowedValues(const Aws::Vector<ActionReviewPayloadFieldAllowedValue>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }
    inline void SetAllowedValues(Aws::Vector<ActionReviewPayloadFieldAllowedValue>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }
    inline ActionReviewPayloadField& WithAllowedValues(const Aws::Vector<ActionReviewPayloadFieldAllowedValue>& value) { SetAllowedValues(value); return *this;}
    inline ActionReviewPayloadField& WithAllowedValues(Aws::Vector<ActionReviewPayloadFieldAllowedValue>&& value) { SetAllowedValues(std::move(value)); return *this;}
    inline ActionReviewPayloadField& AddAllowedValues(const ActionReviewPayloadFieldAllowedValue& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }
    inline ActionReviewPayloadField& AddAllowedValues(ActionReviewPayloadFieldAllowedValue&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The expected data format for the action review input field value. For
     * example, in PTO request, <code>from</code> and <code>to</code> would be of
     * <code>datetime</code> allowed format. </p>
     */
    inline const Aws::String& GetAllowedFormat() const{ return m_allowedFormat; }
    inline bool AllowedFormatHasBeenSet() const { return m_allowedFormatHasBeenSet; }
    inline void SetAllowedFormat(const Aws::String& value) { m_allowedFormatHasBeenSet = true; m_allowedFormat = value; }
    inline void SetAllowedFormat(Aws::String&& value) { m_allowedFormatHasBeenSet = true; m_allowedFormat = std::move(value); }
    inline void SetAllowedFormat(const char* value) { m_allowedFormatHasBeenSet = true; m_allowedFormat.assign(value); }
    inline ActionReviewPayloadField& WithAllowedFormat(const Aws::String& value) { SetAllowedFormat(value); return *this;}
    inline ActionReviewPayloadField& WithAllowedFormat(Aws::String&& value) { SetAllowedFormat(std::move(value)); return *this;}
    inline ActionReviewPayloadField& WithAllowedFormat(const char* value) { SetAllowedFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to create a custom form with array fields (fields with nested objects
     * inside an array).</p>
     */
    inline Aws::Utils::DocumentView GetArrayItemJsonSchema() const{ return m_arrayItemJsonSchema; }
    inline bool ArrayItemJsonSchemaHasBeenSet() const { return m_arrayItemJsonSchemaHasBeenSet; }
    inline void SetArrayItemJsonSchema(const Aws::Utils::Document& value) { m_arrayItemJsonSchemaHasBeenSet = true; m_arrayItemJsonSchema = value; }
    inline void SetArrayItemJsonSchema(Aws::Utils::Document&& value) { m_arrayItemJsonSchemaHasBeenSet = true; m_arrayItemJsonSchema = std::move(value); }
    inline ActionReviewPayloadField& WithArrayItemJsonSchema(const Aws::Utils::Document& value) { SetArrayItemJsonSchema(value); return *this;}
    inline ActionReviewPayloadField& WithArrayItemJsonSchema(Aws::Utils::Document&& value) { SetArrayItemJsonSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about whether the field is required.</p>
     */
    inline bool GetRequired() const{ return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline ActionReviewPayloadField& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}
  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    int m_displayOrder;
    bool m_displayOrderHasBeenSet = false;

    Aws::String m_displayDescription;
    bool m_displayDescriptionHasBeenSet = false;

    ActionPayloadFieldType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::Document m_value;
    bool m_valueHasBeenSet = false;

    Aws::Vector<ActionReviewPayloadFieldAllowedValue> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    Aws::String m_allowedFormat;
    bool m_allowedFormatHasBeenSet = false;

    Aws::Utils::Document m_arrayItemJsonSchema;
    bool m_arrayItemJsonSchemaHasBeenSet = false;

    bool m_required;
    bool m_requiredHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
