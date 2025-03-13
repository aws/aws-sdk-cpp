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
    AWS_MEDIALIVE_API ListChannelPlacementGroupsSdkResult() = default;
    AWS_MEDIALIVE_API ListChannelPlacementGroupsSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListChannelPlacementGroupsSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * An array of ChannelPlacementGroups that exist in the Cluster.
     */
    inline const Aws::Vector<DescribeChannelPlacementGroupSummary>& GetChannelPlacementGroups() const { return m_channelPlacementGroups; }
    template<typename ChannelPlacementGroupsT = Aws::Vector<DescribeChannelPlacementGroupSummary>>
    void SetChannelPlacementGroups(ChannelPlacementGroupsT&& value) { m_channelPlacementGroupsHasBeenSet = true; m_channelPlacementGroups = std::forward<ChannelPlacementGroupsT>(value); }
    template<typename ChannelPlacementGroupsT = Aws::Vector<DescribeChannelPlacementGroupSummary>>
    ListChannelPlacementGroupsSdkResult& WithChannelPlacementGroups(ChannelPlacementGroupsT&& value) { SetChannelPlacementGroups(std::forward<ChannelPlacementGroupsT>(value)); return *this;}
    template<typename ChannelPlacementGroupsT = DescribeChannelPlacementGroupSummary>
    ListChannelPlacementGroupsSdkResult& AddChannelPlacementGroups(ChannelPlacementGroupsT&& value) { m_channelPlacementGroupsHasBeenSet = true; m_channelPlacementGroups.emplace_back(std::forward<ChannelPlacementGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Token for the next result.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListChannelPlacementGroupsSdkResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListChannelPlacementGroupsSdkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DescribeChannelPlacementGroupSummary> m_channelPlacementGroups;
    bool m_channelPlacementGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
