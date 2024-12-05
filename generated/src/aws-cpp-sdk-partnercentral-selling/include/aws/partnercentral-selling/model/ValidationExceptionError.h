/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ValidationExceptionErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Indicates an invalid value for a field.</p> <ul> <li> <p>
   * <i>REQUIRED_FIELD_MISSING:</i> The request is missing a required field.</p>
   * <p>Fix: Verify your request payload includes all required fields.</p> </li> <li>
   * <p> <i>INVALID_ENUM_VALUE:</i> The enum field value isn't an accepted
   * values.</p> <p>Fix: Check the documentation for the list of valid enum values,
   * and update your request with a valid value.</p> </li> <li> <p>
   * <i>INVALID_STRING_FORMAT:</i> The string format is invalid.</p> <p>Fix: Confirm
   * that the string is in the expected format (For example: email address,
   * date).</p> </li> <li> <p> <i>INVALID_VALUE:</i> The value isn't valid.</p>
   * <p>Fix: Confirm that the value meets the expected criteria and is within the
   * allowable range or set.</p> </li> <li> <p> <i>TOO_MANY_VALUES:</i> There are too
   * many values in a field that expects fewer entries.</p> <p>Fix: Reduce the number
   * of values to match the expected limit.</p> </li> <li> <p>
   * <i>ACTION_NOT_PERMITTED:</i> The action isn't permitted due to current state or
   * permissions.</p> <p>Fix: Verify that the action is appropriate for the current
   * state, and that you have the necessary permissions to perform it.</p> </li> <li>
   * <p> <i>DUPLICATE_KEY_VALUE:</i> The value in a field duplicates a value that
   * must be unique.</p> <p>Fix: Verify that the value is unique and doesn't
   * duplicate an existing value in the system.</p> </li> </ul><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ValidationExceptionError">AWS
   * API Reference</a></p>
   */
  class ValidationExceptionError
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ValidationExceptionError();
    AWS_PARTNERCENTRALSELLING_API ValidationExceptionError(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ValidationExceptionError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the error code for the invalid field value.</p>
     */
    inline const ValidationExceptionErrorCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const ValidationExceptionErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(ValidationExceptionErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline ValidationExceptionError& WithCode(const ValidationExceptionErrorCode& value) { SetCode(value); return *this;}
    inline ValidationExceptionError& WithCode(ValidationExceptionErrorCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the field name with the invalid value.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }
    inline ValidationExceptionError& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}
    inline ValidationExceptionError& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}
    inline ValidationExceptionError& WithFieldName(const char* value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the detailed error message for the invalid field value.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ValidationExceptionError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ValidationExceptionError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ValidationExceptionError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    ValidationExceptionErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
