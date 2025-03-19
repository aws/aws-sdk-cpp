/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AlarmRecommendation.h>
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
namespace ResilienceHub
{
namespace Model
{
  class ListAlarmRecommendationsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAlarmRecommendationsResult() = default;
    AWS_RESILIENCEHUB_API ListAlarmRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAlarmRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The alarm recommendations for an Resilience Hub application, returned as an
     * object. This object includes Application Component names, descriptions,
     * information about whether a recommendation has already been implemented or not,
     * prerequisites, and more.</p>
     */
    inline const Aws::Vector<AlarmRecommendation>& GetAlarmRecommendations() const { return m_alarmRecommendations; }
    template<typename AlarmRecommendationsT = Aws::Vector<AlarmRecommendation>>
    void SetAlarmRecommendations(AlarmRecommendationsT&& value) { m_alarmRecommendationsHasBeenSet = true; m_alarmRecommendations = std::forward<AlarmRecommendationsT>(value); }
    template<typename AlarmRecommendationsT = Aws::Vector<AlarmRecommendation>>
    ListAlarmRecommendationsResult& WithAlarmRecommendations(AlarmRecommendationsT&& value) { SetAlarmRecommendations(std::forward<AlarmRecommendationsT>(value)); return *this;}
    template<typename AlarmRecommendationsT = AlarmRecommendation>
    ListAlarmRecommendationsResult& AddAlarmRecommendations(AlarmRecommendationsT&& value) { m_alarmRecommendationsHasBeenSet = true; m_alarmRecommendations.emplace_back(std::forward<AlarmRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAlarmRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAlarmRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AlarmRecommendation> m_alarmRecommendations;
    bool m_alarmRecommendationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
