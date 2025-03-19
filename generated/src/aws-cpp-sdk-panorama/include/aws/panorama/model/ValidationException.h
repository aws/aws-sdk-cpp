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
    AWS_PANORAMA_API ValidationException() = default;
    AWS_PANORAMA_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline const Aws::Vector<ValidationExceptionErrorArgument>& GetErrorArguments() const { return m_errorArguments; }
    inline bool ErrorArgumentsHasBeenSet() const { return m_errorArgumentsHasBeenSet; }
    template<typename ErrorArgumentsT = Aws::Vector<ValidationExceptionErrorArgument>>
    void SetErrorArguments(ErrorArgumentsT&& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments = std::forward<ErrorArgumentsT>(value); }
    template<typename ErrorArgumentsT = Aws::Vector<ValidationExceptionErrorArgument>>
    ValidationException& WithErrorArguments(ErrorArgumentsT&& value) { SetErrorArguments(std::forward<ErrorArgumentsT>(value)); return *this;}
    template<typename ErrorArgumentsT = ValidationExceptionErrorArgument>
    ValidationException& AddErrorArguments(ErrorArgumentsT&& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments.emplace_back(std::forward<ErrorArgumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique ID for the error.</p>
     */
    inline const Aws::String& GetErrorId() const { return m_errorId; }
    inline bool ErrorIdHasBeenSet() const { return m_errorIdHasBeenSet; }
    template<typename ErrorIdT = Aws::String>
    void SetErrorId(ErrorIdT&& value) { m_errorIdHasBeenSet = true; m_errorId = std::forward<ErrorIdT>(value); }
    template<typename ErrorIdT = Aws::String>
    ValidationException& WithErrorId(ErrorIdT&& value) { SetErrorId(std::forward<ErrorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of request parameters that failed validation.</p>
     */
    inline const Aws::Vector<ValidationExceptionField>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<ValidationExceptionField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<ValidationExceptionField>>
    ValidationException& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = ValidationExceptionField>
    ValidationException& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ValidationException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that validation failed.</p>
     */
    inline ValidationExceptionReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(ValidationExceptionReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline ValidationException& WithReason(ValidationExceptionReason value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::Vector<ValidationExceptionErrorArgument> m_errorArguments;
    bool m_errorArgumentsHasBeenSet = false;

    Aws::String m_errorId;
    bool m_errorIdHasBeenSet = false;

    Aws::Vector<ValidationExceptionField> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionReason m_reason{ValidationExceptionReason::NOT_SET};
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
