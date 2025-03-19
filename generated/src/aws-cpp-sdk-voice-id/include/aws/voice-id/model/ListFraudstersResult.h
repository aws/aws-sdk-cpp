/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/FraudsterSummary.h>
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
  class ListFraudstersResult
  {
  public:
    AWS_VOICEID_API ListFraudstersResult() = default;
    AWS_VOICEID_API ListFraudstersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API ListFraudstersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that contains details about each fraudster in the Amazon Web Services
     * account. </p>
     */
    inline const Aws::Vector<FraudsterSummary>& GetFraudsterSummaries() const { return m_fraudsterSummaries; }
    template<typename FraudsterSummariesT = Aws::Vector<FraudsterSummary>>
    void SetFraudsterSummaries(FraudsterSummariesT&& value) { m_fraudsterSummariesHasBeenSet = true; m_fraudsterSummaries = std::forward<FraudsterSummariesT>(value); }
    template<typename FraudsterSummariesT = Aws::Vector<FraudsterSummary>>
    ListFraudstersResult& WithFraudsterSummaries(FraudsterSummariesT&& value) { SetFraudsterSummaries(std::forward<FraudsterSummariesT>(value)); return *this;}
    template<typename FraudsterSummariesT = FraudsterSummary>
    ListFraudstersResult& AddFraudsterSummaries(FraudsterSummariesT&& value) { m_fraudsterSummariesHasBeenSet = true; m_fraudsterSummaries.emplace_back(std::forward<FraudsterSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFraudstersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFraudstersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FraudsterSummary> m_fraudsterSummaries;
    bool m_fraudsterSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
