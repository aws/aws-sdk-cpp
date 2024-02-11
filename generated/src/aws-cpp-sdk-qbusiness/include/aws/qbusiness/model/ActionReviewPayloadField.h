/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/ActionPayloadFieldType.h>
#include <aws/core/utils/Document.h>
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


    /**
     * <p>Information about the field values that an end user can use to provide to
     * Amazon Q for Amazon Q to perform the requested plugin action.</p>
     */
    inline const Aws::Vector<ActionReviewPayloadFieldAllowedValue>& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>Information about the field values that an end user can use to provide to
     * Amazon Q for Amazon Q to perform the requested plugin action.</p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p>Information about the field values that an end user can use to provide to
     * Amazon Q for Amazon Q to perform the requested plugin action.</p>
     */
    inline void SetAllowedValues(const Aws::Vector<ActionReviewPayloadFieldAllowedValue>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>Information about the field values that an end user can use to provide to
     * Amazon Q for Amazon Q to perform the requested plugin action.</p>
     */
    inline void SetAllowedValues(Aws::Vector<ActionReviewPayloadFieldAllowedValue>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p>Information about the field values that an end user can use to provide to
     * Amazon Q for Amazon Q to perform the requested plugin action.</p>
     */
    inline ActionReviewPayloadField& WithAllowedValues(const Aws::Vector<ActionReviewPayloadFieldAllowedValue>& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>Information about the field values that an end user can use to provide to
     * Amazon Q for Amazon Q to perform the requested plugin action.</p>
     */
    inline ActionReviewPayloadField& WithAllowedValues(Aws::Vector<ActionReviewPayloadFieldAllowedValue>&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p>Information about the field values that an end user can use to provide to
     * Amazon Q for Amazon Q to perform the requested plugin action.</p>
     */
    inline ActionReviewPayloadField& AddAllowedValues(const ActionReviewPayloadFieldAllowedValue& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }

    /**
     * <p>Information about the field values that an end user can use to provide to
     * Amazon Q for Amazon Q to perform the requested plugin action.</p>
     */
    inline ActionReviewPayloadField& AddAllowedValues(ActionReviewPayloadFieldAllowedValue&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }


    /**
     * <p> The name of the field. </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p> The name of the field. </p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p> The name of the field. </p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p> The name of the field. </p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p> The name of the field. </p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p> The name of the field. </p>
     */
    inline ActionReviewPayloadField& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p> The name of the field. </p>
     */
    inline ActionReviewPayloadField& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p> The name of the field. </p>
     */
    inline ActionReviewPayloadField& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The display order of fields in a payload.</p>
     */
    inline int GetDisplayOrder() const{ return m_displayOrder; }

    /**
     * <p>The display order of fields in a payload.</p>
     */
    inline bool DisplayOrderHasBeenSet() const { return m_displayOrderHasBeenSet; }

    /**
     * <p>The display order of fields in a payload.</p>
     */
    inline void SetDisplayOrder(int value) { m_displayOrderHasBeenSet = true; m_displayOrder = value; }

    /**
     * <p>The display order of fields in a payload.</p>
     */
    inline ActionReviewPayloadField& WithDisplayOrder(int value) { SetDisplayOrder(value); return *this;}


    /**
     * <p>Information about whether the field is required.</p>
     */
    inline bool GetRequired() const{ return m_required; }

    /**
     * <p>Information about whether the field is required.</p>
     */
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }

    /**
     * <p>Information about whether the field is required.</p>
     */
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }

    /**
     * <p>Information about whether the field is required.</p>
     */
    inline ActionReviewPayloadField& WithRequired(bool value) { SetRequired(value); return *this;}


    /**
     * <p>The type of field. </p>
     */
    inline const ActionPayloadFieldType& GetType() const{ return m_type; }

    /**
     * <p>The type of field. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of field. </p>
     */
    inline void SetType(const ActionPayloadFieldType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of field. </p>
     */
    inline void SetType(ActionPayloadFieldType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of field. </p>
     */
    inline ActionReviewPayloadField& WithType(const ActionPayloadFieldType& value) { SetType(value); return *this;}

    /**
     * <p>The type of field. </p>
     */
    inline ActionReviewPayloadField& WithType(ActionPayloadFieldType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The field value.</p>
     */
    inline Aws::Utils::DocumentView GetValue() const{ return m_value; }

    /**
     * <p>The field value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The field value.</p>
     */
    inline void SetValue(const Aws::Utils::Document& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The field value.</p>
     */
    inline void SetValue(Aws::Utils::Document&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The field value.</p>
     */
    inline ActionReviewPayloadField& WithValue(const Aws::Utils::Document& value) { SetValue(value); return *this;}

    /**
     * <p>The field value.</p>
     */
    inline ActionReviewPayloadField& WithValue(Aws::Utils::Document&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::Vector<ActionReviewPayloadFieldAllowedValue> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    int m_displayOrder;
    bool m_displayOrderHasBeenSet = false;

    bool m_required;
    bool m_requiredHasBeenSet = false;

    ActionPayloadFieldType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::Document m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
