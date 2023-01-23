/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/ChannelSummary.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListChannelsResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListChannelsResponse">AWS
   * API Reference</a></p>
   */
  class ListChannelsResult
  {
  public:
    AWS_MEDIALIVE_API ListChannelsResult();
    AWS_MEDIALIVE_API ListChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<ChannelSummary>& GetChannels() const{ return m_channels; }

    
    inline void SetChannels(const Aws::Vector<ChannelSummary>& value) { m_channels = value; }

    
    inline void SetChannels(Aws::Vector<ChannelSummary>&& value) { m_channels = std::move(value); }

    
    inline ListChannelsResult& WithChannels(const Aws::Vector<ChannelSummary>& value) { SetChannels(value); return *this;}

    
    inline ListChannelsResult& WithChannels(Aws::Vector<ChannelSummary>&& value) { SetChannels(std::move(value)); return *this;}

    
    inline ListChannelsResult& AddChannels(const ChannelSummary& value) { m_channels.push_back(value); return *this; }

    
    inline ListChannelsResult& AddChannels(ChannelSummary&& value) { m_channels.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListChannelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListChannelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListChannelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ChannelSummary> m_channels;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
