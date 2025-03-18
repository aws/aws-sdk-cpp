/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/FraudsterRegistrationJobSummary.h>
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
namespace VoiceID
{
namespace Model
{
  class ListFraudsterRegistrationJobsResult
  {
  public:
    AWS_VOICEID_API ListFraudsterRegistrationJobsResult() = default;
    AWS_VOICEID_API ListFraudsterRegistrationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API ListFraudsterRegistrationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing details about each specified fraudster registration
     * job.</p>
     */
    inline const Aws::Vector<FraudsterRegistrationJobSummary>& GetJobSummaries() const { return m_jobSummaries; }
    template<typename JobSummariesT = Aws::Vector<FraudsterRegistrationJobSummary>>
    void SetJobSummaries(JobSummariesT&& value) { m_jobSummariesHasBeenSet = true; m_jobSummaries = std::forward<JobSummariesT>(value); }
    template<typename JobSummariesT = Aws::Vector<FraudsterRegistrationJobSummary>>
    ListFraudsterRegistrationJobsResult& WithJobSummaries(JobSummariesT&& value) { SetJobSummaries(std::forward<JobSummariesT>(value)); return *this;}
    template<typename JobSummariesT = FraudsterRegistrationJobSummary>
    ListFraudsterRegistrationJobsResult& AddJobSummaries(JobSummariesT&& value) { m_jobSummariesHasBeenSet = true; m_jobSummaries.emplace_back(std::forward<JobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFraudsterRegistrationJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFraudsterRegistrationJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FraudsterRegistrationJobSummary> m_jobSummaries;
    bool m_jobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
