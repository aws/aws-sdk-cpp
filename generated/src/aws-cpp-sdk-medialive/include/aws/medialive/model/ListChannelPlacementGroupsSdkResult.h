/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/DescribeChannelPlacementGroupSummary.h>
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
   * Placeholder documentation for ListChannelPlacementGroupsResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListChannelPlacementGroupsResponse">AWS
   * API Reference</a></p>
   */
  class ListChannelPlacementGroupsSdkResult
  {
  public:
    AWS_MEDIALIVE_API ListChannelPlacementGroupsSdkResult();
    AWS_MEDIALIVE_API ListChannelPlacementGroupsSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListChannelPlacementGroupsSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * An array of ChannelPlacementGroups that exist in the Cluster.
     */
    inline const Aws::Vector<DescribeChannelPlacementGroupSummary>& GetChannelPlacementGroups() const{ return m_channelPlacementGroups; }
    inline void SetChannelPlacementGroups(const Aws::Vector<DescribeChannelPlacementGroupSummary>& value) { m_channelPlacementGroups = value; }
    inline void SetChannelPlacementGroups(Aws::Vector<DescribeChannelPlacementGroupSummary>&& value) { m_channelPlacementGroups = std::move(value); }
    inline ListChannelPlacementGroupsSdkResult& WithChannelPlacementGroups(const Aws::Vector<DescribeChannelPlacementGroupSummary>& value) { SetChannelPlacementGroups(value); return *this;}
    inline ListChannelPlacementGroupsSdkResult& WithChannelPlacementGroups(Aws::Vector<DescribeChannelPlacementGroupSummary>&& value) { SetChannelPlacementGroups(std::move(value)); return *this;}
    inline ListChannelPlacementGroupsSdkResult& AddChannelPlacementGroups(const DescribeChannelPlacementGroupSummary& value) { m_channelPlacementGroups.push_back(value); return *this; }
    inline ListChannelPlacementGroupsSdkResult& AddChannelPlacementGroups(DescribeChannelPlacementGroupSummary&& value) { m_channelPlacementGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Token for the next result.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListChannelPlacementGroupsSdkResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListChannelPlacementGroupsSdkResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListChannelPlacementGroupsSdkResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListChannelPlacementGroupsSdkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListChannelPlacementGroupsSdkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListChannelPlacementGroupsSdkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DescribeChannelPlacementGroupSummary> m_channelPlacementGroups;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
