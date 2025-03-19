/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ADMChannelResponse.h>
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
  class GetAdmChannelResult
  {
  public:
    AWS_PINPOINT_API GetAdmChannelResult() = default;
    AWS_PINPOINT_API GetAdmChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetAdmChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ADMChannelResponse& GetADMChannelResponse() const { return m_aDMChannelResponse; }
    template<typename ADMChannelResponseT = ADMChannelResponse>
    void SetADMChannelResponse(ADMChannelResponseT&& value) { m_aDMChannelResponseHasBeenSet = true; m_aDMChannelResponse = std::forward<ADMChannelResponseT>(value); }
    template<typename ADMChannelResponseT = ADMChannelResponse>
    GetAdmChannelResult& WithADMChannelResponse(ADMChannelResponseT&& value) { SetADMChannelResponse(std::forward<ADMChannelResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAdmChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ADMChannelResponse m_aDMChannelResponse;
    bool m_aDMChannelResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
