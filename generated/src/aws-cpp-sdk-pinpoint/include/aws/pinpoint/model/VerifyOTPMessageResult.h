/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/VerificationResponse.h>
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
  class VerifyOTPMessageResult
  {
  public:
    AWS_PINPOINT_API VerifyOTPMessageResult() = default;
    AWS_PINPOINT_API VerifyOTPMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API VerifyOTPMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const VerificationResponse& GetVerificationResponse() const { return m_verificationResponse; }
    template<typename VerificationResponseT = VerificationResponse>
    void SetVerificationResponse(VerificationResponseT&& value) { m_verificationResponseHasBeenSet = true; m_verificationResponse = std::forward<VerificationResponseT>(value); }
    template<typename VerificationResponseT = VerificationResponse>
    VerifyOTPMessageResult& WithVerificationResponse(VerificationResponseT&& value) { SetVerificationResponse(std::forward<VerificationResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    VerifyOTPMessageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VerificationResponse m_verificationResponse;
    bool m_verificationResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
