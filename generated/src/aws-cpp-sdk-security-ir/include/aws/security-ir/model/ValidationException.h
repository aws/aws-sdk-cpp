﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/model/ValidationExceptionReason.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/security-ir/model/ValidationExceptionField.h>
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
namespace SecurityIR
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_SECURITYIR_API ValidationException() = default;
    AWS_SECURITYIR_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>Element that provides the reason the request failed validation.</p>
     */
    inline ValidationExceptionReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(ValidationExceptionReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline ValidationException& WithReason(ValidationExceptionReason value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Element that provides the list of field(s) that caused the error, if
     * applicable.</p>
     */
    inline const Aws::Vector<ValidationExceptionField>& GetFieldList() const { return m_fieldList; }
    inline bool FieldListHasBeenSet() const { return m_fieldListHasBeenSet; }
    template<typename FieldListT = Aws::Vector<ValidationExceptionField>>
    void SetFieldList(FieldListT&& value) { m_fieldListHasBeenSet = true; m_fieldList = std::forward<FieldListT>(value); }
    template<typename FieldListT = Aws::Vector<ValidationExceptionField>>
    ValidationException& WithFieldList(FieldListT&& value) { SetFieldList(std::forward<FieldListT>(value)); return *this;}
    template<typename FieldListT = ValidationExceptionField>
    ValidationException& AddFieldList(FieldListT&& value) { m_fieldListHasBeenSet = true; m_fieldList.emplace_back(std::forward<FieldListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionReason m_reason{ValidationExceptionReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    Aws::Vector<ValidationExceptionField> m_fieldList;
    bool m_fieldListHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
