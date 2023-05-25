/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/ValidationExceptionReason.h>
#include <aws/panorama/model/ValidationExceptionErrorArgument.h>
#include <aws/panorama/model/ValidationExceptionField.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>The request contains an invalid parameter value.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_PANORAMA_API ValidationException();
    AWS_PANORAMA_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline const Aws::Vector<ValidationExceptionErrorArgument>& GetErrorArguments() const{ return m_errorArguments; }

    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline bool ErrorArgumentsHasBeenSet() const { return m_errorArgumentsHasBeenSet; }

    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline void SetErrorArguments(const Aws::Vector<ValidationExceptionErrorArgument>& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments = value; }

    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline void SetErrorArguments(Aws::Vector<ValidationExceptionErrorArgument>&& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments = std::move(value); }

    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline ValidationException& WithErrorArguments(const Aws::Vector<ValidationExceptionErrorArgument>& value) { SetErrorArguments(value); return *this;}

    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline ValidationException& WithErrorArguments(Aws::Vector<ValidationExceptionErrorArgument>&& value) { SetErrorArguments(std::move(value)); return *this;}

    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline ValidationException& AddErrorArguments(const ValidationExceptionErrorArgument& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments.push_back(value); return *this; }

    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline ValidationException& AddErrorArguments(ValidationExceptionErrorArgument&& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique ID for the error.</p>
     */
    inline const Aws::String& GetErrorId() const{ return m_errorId; }

    /**
     * <p>A unique ID for the error.</p>
     */
    inline bool ErrorIdHasBeenSet() const { return m_errorIdHasBeenSet; }

    /**
     * <p>A unique ID for the error.</p>
     */
    inline void SetErrorId(const Aws::String& value) { m_errorIdHasBeenSet = true; m_errorId = value; }

    /**
     * <p>A unique ID for the error.</p>
     */
    inline void SetErrorId(Aws::String&& value) { m_errorIdHasBeenSet = true; m_errorId = std::move(value); }

    /**
     * <p>A unique ID for the error.</p>
     */
    inline void SetErrorId(const char* value) { m_errorIdHasBeenSet = true; m_errorId.assign(value); }

    /**
     * <p>A unique ID for the error.</p>
     */
    inline ValidationException& WithErrorId(const Aws::String& value) { SetErrorId(value); return *this;}

    /**
     * <p>A unique ID for the error.</p>
     */
    inline ValidationException& WithErrorId(Aws::String&& value) { SetErrorId(std::move(value)); return *this;}

    /**
     * <p>A unique ID for the error.</p>
     */
    inline ValidationException& WithErrorId(const char* value) { SetErrorId(value); return *this;}


    /**
     * <p>A list of request parameters that failed validation.</p>
     */
    inline const Aws::Vector<ValidationExceptionField>& GetFields() const{ return m_fields; }

    /**
     * <p>A list of request parameters that failed validation.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>A list of request parameters that failed validation.</p>
     */
    inline void SetFields(const Aws::Vector<ValidationExceptionField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>A list of request parameters that failed validation.</p>
     */
    inline void SetFields(Aws::Vector<ValidationExceptionField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>A list of request parameters that failed validation.</p>
     */
    inline ValidationException& WithFields(const Aws::Vector<ValidationExceptionField>& value) { SetFields(value); return *this;}

    /**
     * <p>A list of request parameters that failed validation.</p>
     */
    inline ValidationException& WithFields(Aws::Vector<ValidationExceptionField>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>A list of request parameters that failed validation.</p>
     */
    inline ValidationException& AddFields(const ValidationExceptionField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>A list of request parameters that failed validation.</p>
     */
    inline ValidationException& AddFields(ValidationExceptionField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The reason that validation failed.</p>
     */
    inline const ValidationExceptionReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason that validation failed.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason that validation failed.</p>
     */
    inline void SetReason(const ValidationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason that validation failed.</p>
     */
    inline void SetReason(ValidationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason that validation failed.</p>
     */
    inline ValidationException& WithReason(const ValidationExceptionReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason that validation failed.</p>
     */
    inline ValidationException& WithReason(ValidationExceptionReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::Vector<ValidationExceptionErrorArgument> m_errorArguments;
    bool m_errorArgumentsHasBeenSet = false;

    Aws::String m_errorId;
    bool m_errorIdHasBeenSet = false;

    Aws::Vector<ValidationExceptionField> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
