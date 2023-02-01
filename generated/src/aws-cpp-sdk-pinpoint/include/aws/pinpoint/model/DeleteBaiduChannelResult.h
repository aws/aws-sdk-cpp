/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/BaiduChannelResponse.h>
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
  class DeleteBaiduChannelResult
  {
  public:
    AWS_PINPOINT_API DeleteBaiduChannelResult();
    AWS_PINPOINT_API DeleteBaiduChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API DeleteBaiduChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const BaiduChannelResponse& GetBaiduChannelResponse() const{ return m_baiduChannelResponse; }

    
    inline void SetBaiduChannelResponse(const BaiduChannelResponse& value) { m_baiduChannelResponse = value; }

    
    inline void SetBaiduChannelResponse(BaiduChannelResponse&& value) { m_baiduChannelResponse = std::move(value); }

    
    inline DeleteBaiduChannelResult& WithBaiduChannelResponse(const BaiduChannelResponse& value) { SetBaiduChannelResponse(value); return *this;}

    
    inline DeleteBaiduChannelResult& WithBaiduChannelResponse(BaiduChannelResponse&& value) { SetBaiduChannelResponse(std::move(value)); return *this;}

  private:

    BaiduChannelResponse m_baiduChannelResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
