/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/ValidationExceptionReason.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/ValidationExceptionField.h>
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
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>The input fails to satisfy the constraints specified by an Amazon Web
   * Services service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_SSMCONTACTS_API ValidationException();
    AWS_SSMCONTACTS_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * Reason the request failed validation
     */
    inline const ValidationExceptionReason& GetReason() const{ return m_reason; }

    /**
     * Reason the request failed validation
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * Reason the request failed validation
     */
    inline void SetReason(const ValidationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * Reason the request failed validation
     */
    inline void SetReason(ValidationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * Reason the request failed validation
     */
    inline ValidationException& WithReason(const ValidationExceptionReason& value) { SetReason(value); return *this;}

    /**
     * Reason the request failed validation
     */
    inline ValidationException& WithReason(ValidationExceptionReason&& value) { SetReason(std::move(value)); return *this;}


    /**
     * The fields that caused the error
     */
    inline const Aws::Vector<ValidationExceptionField>& GetFields() const{ return m_fields; }

    /**
     * The fields that caused the error
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * The fields that caused the error
     */
    inline void SetFields(const Aws::Vector<ValidationExceptionField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * The fields that caused the error
     */
    inline void SetFields(Aws::Vector<ValidationExceptionField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * The fields that caused the error
     */
    inline ValidationException& WithFields(const Aws::Vector<ValidationExceptionField>& value) { SetFields(value); return *this;}

    /**
     * The fields that caused the error
     */
    inline ValidationException& WithFields(Aws::Vector<ValidationExceptionField>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * The fields that caused the error
     */
    inline ValidationException& AddFields(const ValidationExceptionField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * The fields that caused the error
     */
    inline ValidationException& AddFields(ValidationExceptionField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Vector<ValidationExceptionField> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
