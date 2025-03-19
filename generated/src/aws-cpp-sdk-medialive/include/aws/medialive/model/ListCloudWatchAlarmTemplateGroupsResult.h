/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/CloudWatchAlarmTemplateGroupSummary.h>
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
   * Placeholder documentation for
   * ListCloudWatchAlarmTemplateGroupsResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListCloudWatchAlarmTemplateGroupsResponse">AWS
   * API Reference</a></p>
   */
  class ListCloudWatchAlarmTemplateGroupsResult
  {
  public:
    AWS_MEDIALIVE_API ListCloudWatchAlarmTemplateGroupsResult() = default;
    AWS_MEDIALIVE_API ListCloudWatchAlarmTemplateGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListCloudWatchAlarmTemplateGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<CloudWatchAlarmTemplateGroupSummary>& GetCloudWatchAlarmTemplateGroups() const { return m_cloudWatchAlarmTemplateGroups; }
    template<typename CloudWatchAlarmTemplateGroupsT = Aws::Vector<CloudWatchAlarmTemplateGroupSummary>>
    void SetCloudWatchAlarmTemplateGroups(CloudWatchAlarmTemplateGroupsT&& value) { m_cloudWatchAlarmTemplateGroupsHasBeenSet = true; m_cloudWatchAlarmTemplateGroups = std::forward<CloudWatchAlarmTemplateGroupsT>(value); }
    template<typename CloudWatchAlarmTemplateGroupsT = Aws::Vector<CloudWatchAlarmTemplateGroupSummary>>
    ListCloudWatchAlarmTemplateGroupsResult& WithCloudWatchAlarmTemplateGroups(CloudWatchAlarmTemplateGroupsT&& value) { SetCloudWatchAlarmTemplateGroups(std::forward<CloudWatchAlarmTemplateGroupsT>(value)); return *this;}
    template<typename CloudWatchAlarmTemplateGroupsT = CloudWatchAlarmTemplateGroupSummary>
    ListCloudWatchAlarmTemplateGroupsResult& AddCloudWatchAlarmTemplateGroups(CloudWatchAlarmTemplateGroupsT&& value) { m_cloudWatchAlarmTemplateGroupsHasBeenSet = true; m_cloudWatchAlarmTemplateGroups.emplace_back(std::forward<CloudWatchAlarmTemplateGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCloudWatchAlarmTemplateGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCloudWatchAlarmTemplateGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CloudWatchAlarmTemplateGroupSummary> m_cloudWatchAlarmTemplateGroups;
    bool m_cloudWatchAlarmTemplateGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
