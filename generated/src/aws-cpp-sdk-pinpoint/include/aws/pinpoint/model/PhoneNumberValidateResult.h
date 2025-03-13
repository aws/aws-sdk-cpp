/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/NumberValidateResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{
  class PhoneNumberValidateResult
  {
  public:
    AWS_PINPOINT_API PhoneNumberValidateResult() = default;
    AWS_PINPOINT_API PhoneNumberValidateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API PhoneNumberValidateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const NumberValidateResponse& GetNumberValidateResponse() const { return m_numberValidateResponse; }
    template<typename NumberValidateResponseT = NumberValidateResponse>
    void SetNumberValidateResponse(NumberValidateResponseT&& value) { m_numberValidateResponseHasBeenSet = true; m_numberValidateResponse = std::forward<NumberValidateResponseT>(value); }
    template<typename NumberValidateResponseT = NumberValidateResponse>
    PhoneNumberValidateResult& WithNumberValidateResponse(NumberValidateResponseT&& value) { SetNumberValidateResponse(std::forward<NumberValidateResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PhoneNumberValidateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    NumberValidateResponse m_numberValidateResponse;
    bool m_numberValidateResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
