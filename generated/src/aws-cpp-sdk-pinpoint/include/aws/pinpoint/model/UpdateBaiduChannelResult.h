/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/BaiduChannelResponse.h>
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
  class UpdateBaiduChannelResult
  {
  public:
    AWS_PINPOINT_API UpdateBaiduChannelResult() = default;
    AWS_PINPOINT_API UpdateBaiduChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API UpdateBaiduChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const BaiduChannelResponse& GetBaiduChannelResponse() const { return m_baiduChannelResponse; }
    template<typename BaiduChannelResponseT = BaiduChannelResponse>
    void SetBaiduChannelResponse(BaiduChannelResponseT&& value) { m_baiduChannelResponseHasBeenSet = true; m_baiduChannelResponse = std::forward<BaiduChannelResponseT>(value); }
    template<typename BaiduChannelResponseT = BaiduChannelResponse>
    UpdateBaiduChannelResult& WithBaiduChannelResponse(BaiduChannelResponseT&& value) { SetBaiduChannelResponse(std::forward<BaiduChannelResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateBaiduChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BaiduChannelResponse m_baiduChannelResponse;
    bool m_baiduChannelResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
