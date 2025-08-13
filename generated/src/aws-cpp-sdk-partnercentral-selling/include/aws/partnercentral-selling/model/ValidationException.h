/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ValidationExceptionReason.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/ValidationExceptionError.h>
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
   * <p>The input fails to satisfy the constraints specified by the service or
   * business validation rules.</p> <p>Suggested action: Review the error message,
   * including the failed fields and reasons, to correct the request
   * payload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ValidationException() = default;
    AWS_PARTNERCENTRALSELLING_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The primary reason for this validation exception to occur.</p> <ul> <li> <p>
     * <i>REQUEST_VALIDATION_FAILED:</i> The request format is not valid.</p> <p>Fix:
     * Verify your request payload includes all required fields, uses correct data
     * types and string formats.</p> </li> <li> <p> <i>BUSINESS_VALIDATION_FAILED:</i>
     * The requested change doesn't pass the business validation rules.</p> <p>Fix:
     * Check that your change aligns with the business rules defined by AWS Partner
     * Central.</p> </li> </ul>
     */
    inline ValidationExceptionReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(ValidationExceptionReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline ValidationException& WithReason(ValidationExceptionReason value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of issues that were discovered in the submitted request or the
     * resource state.</p>
     */
    inline const Aws::Vector<ValidationExceptionError>& GetErrorList() const { return m_errorList; }
    inline bool ErrorListHasBeenSet() const { return m_errorListHasBeenSet; }
    template<typename ErrorListT = Aws::Vector<ValidationExceptionError>>
    void SetErrorList(ErrorListT&& value) { m_errorListHasBeenSet = true; m_errorList = std::forward<ErrorListT>(value); }
    template<typename ErrorListT = Aws::Vector<ValidationExceptionError>>
    ValidationException& WithErrorList(ErrorListT&& value) { SetErrorList(std::forward<ErrorListT>(value)); return *this;}
    template<typename ErrorListT = ValidationExceptionError>
    ValidationException& AddErrorList(ErrorListT&& value) { m_errorListHasBeenSet = true; m_errorList.emplace_back(std::forward<ErrorListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionReason m_reason{ValidationExceptionReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    Aws::Vector<ValidationExceptionError> m_errorList;
    bool m_errorListHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
