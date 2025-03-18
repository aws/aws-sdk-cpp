/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/CloudWatchAlarmTemplateSummary.h>
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
   * Placeholder documentation for ListCloudWatchAlarmTemplatesResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListCloudWatchAlarmTemplatesResponse">AWS
   * API Reference</a></p>
   */
  class ListCloudWatchAlarmTemplatesResult
  {
  public:
    AWS_MEDIALIVE_API ListCloudWatchAlarmTemplatesResult() = default;
    AWS_MEDIALIVE_API ListCloudWatchAlarmTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListCloudWatchAlarmTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<CloudWatchAlarmTemplateSummary>& GetCloudWatchAlarmTemplates() const { return m_cloudWatchAlarmTemplates; }
    template<typename CloudWatchAlarmTemplatesT = Aws::Vector<CloudWatchAlarmTemplateSummary>>
    void SetCloudWatchAlarmTemplates(CloudWatchAlarmTemplatesT&& value) { m_cloudWatchAlarmTemplatesHasBeenSet = true; m_cloudWatchAlarmTemplates = std::forward<CloudWatchAlarmTemplatesT>(value); }
    template<typename CloudWatchAlarmTemplatesT = Aws::Vector<CloudWatchAlarmTemplateSummary>>
    ListCloudWatchAlarmTemplatesResult& WithCloudWatchAlarmTemplates(CloudWatchAlarmTemplatesT&& value) { SetCloudWatchAlarmTemplates(std::forward<CloudWatchAlarmTemplatesT>(value)); return *this;}
    template<typename CloudWatchAlarmTemplatesT = CloudWatchAlarmTemplateSummary>
    ListCloudWatchAlarmTemplatesResult& AddCloudWatchAlarmTemplates(CloudWatchAlarmTemplatesT&& value) { m_cloudWatchAlarmTemplatesHasBeenSet = true; m_cloudWatchAlarmTemplates.emplace_back(std::forward<CloudWatchAlarmTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCloudWatchAlarmTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCloudWatchAlarmTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CloudWatchAlarmTemplateSummary> m_cloudWatchAlarmTemplates;
    bool m_cloudWatchAlarmTemplatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
