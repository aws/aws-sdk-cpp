/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
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
namespace repostspace
{
namespace Model
{
  class CreateChannelResult
  {
  public:
    AWS_REPOSTSPACE_API CreateChannelResult() = default;
    AWS_REPOSTSPACE_API CreateChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REPOSTSPACE_API CreateChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the private re:Post channel.</p>
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    CreateChannelResult& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
