/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/ValidationExceptionReason.h>
#include <aws/qbusiness/model/ValidationExceptionField.h>
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
   * <p>The input doesn't meet the constraints set by the Amazon Q service. Provide
   * the correct input and try again.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_QBUSINESS_API ValidationException();
    AWS_QBUSINESS_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The input field(s) that failed validation.</p>
     */
    inline const Aws::Vector<ValidationExceptionField>& GetFields() const{ return m_fields; }

    /**
     * <p>The input field(s) that failed validation.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>The input field(s) that failed validation.</p>
     */
    inline void SetFields(const Aws::Vector<ValidationExceptionField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>The input field(s) that failed validation.</p>
     */
    inline void SetFields(Aws::Vector<ValidationExceptionField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>The input field(s) that failed validation.</p>
     */
    inline ValidationException& WithFields(const Aws::Vector<ValidationExceptionField>& value) { SetFields(value); return *this;}

    /**
     * <p>The input field(s) that failed validation.</p>
     */
    inline ValidationException& WithFields(Aws::Vector<ValidationExceptionField>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>The input field(s) that failed validation.</p>
     */
    inline ValidationException& AddFields(const ValidationExceptionField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>The input field(s) that failed validation.</p>
     */
    inline ValidationException& AddFields(ValidationExceptionField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }


    /**
     * <p>The message describing the <code>ValidationException</code>.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message describing the <code>ValidationException</code>.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message describing the <code>ValidationException</code>.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message describing the <code>ValidationException</code>.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message describing the <code>ValidationException</code>.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message describing the <code>ValidationException</code>.</p>
     */
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message describing the <code>ValidationException</code>.</p>
     */
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message describing the <code>ValidationException</code>.</p>
     */
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The reason for the <code>ValidationException</code>.</p>
     */
    inline const ValidationExceptionReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the <code>ValidationException</code>.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the <code>ValidationException</code>.</p>
     */
    inline void SetReason(const ValidationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the <code>ValidationException</code>.</p>
     */
    inline void SetReason(ValidationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the <code>ValidationException</code>.</p>
     */
    inline ValidationException& WithReason(const ValidationExceptionReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the <code>ValidationException</code>.</p>
     */
    inline ValidationException& WithReason(ValidationExceptionReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::Vector<ValidationExceptionField> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
