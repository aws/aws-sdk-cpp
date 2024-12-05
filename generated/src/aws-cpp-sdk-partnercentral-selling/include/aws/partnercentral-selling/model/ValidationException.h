/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ValidationExceptionReason.h>
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
    AWS_PARTNERCENTRALSELLING_API ValidationException();
    AWS_PARTNERCENTRALSELLING_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of issues that were discovered in the submitted request or the
     * resource state.</p>
     */
    inline const Aws::Vector<ValidationExceptionError>& GetErrorList() const{ return m_errorList; }
    inline bool ErrorListHasBeenSet() const { return m_errorListHasBeenSet; }
    inline void SetErrorList(const Aws::Vector<ValidationExceptionError>& value) { m_errorListHasBeenSet = true; m_errorList = value; }
    inline void SetErrorList(Aws::Vector<ValidationExceptionError>&& value) { m_errorListHasBeenSet = true; m_errorList = std::move(value); }
    inline ValidationException& WithErrorList(const Aws::Vector<ValidationExceptionError>& value) { SetErrorList(value); return *this;}
    inline ValidationException& WithErrorList(Aws::Vector<ValidationExceptionError>&& value) { SetErrorList(std::move(value)); return *this;}
    inline ValidationException& AddErrorList(const ValidationExceptionError& value) { m_errorListHasBeenSet = true; m_errorList.push_back(value); return *this; }
    inline ValidationException& AddErrorList(ValidationExceptionError&& value) { m_errorListHasBeenSet = true; m_errorList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}
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
    inline const ValidationExceptionReason& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const ValidationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(ValidationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline ValidationException& WithReason(const ValidationExceptionReason& value) { SetReason(value); return *this;}
    inline ValidationException& WithReason(ValidationExceptionReason&& value) { SetReason(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ValidationExceptionError> m_errorList;
    bool m_errorListHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
