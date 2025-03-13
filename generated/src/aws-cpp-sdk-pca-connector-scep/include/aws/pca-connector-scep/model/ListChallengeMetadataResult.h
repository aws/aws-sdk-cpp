/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pca-connector-scep/model/ChallengeMetadataSummary.h>
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
namespace PcaConnectorScep
{
namespace Model
{
  class ListChallengeMetadataResult
  {
  public:
    AWS_PCACONNECTORSCEP_API ListChallengeMetadataResult() = default;
    AWS_PCACONNECTORSCEP_API ListChallengeMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORSCEP_API ListChallengeMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The challenge metadata for the challenges belonging to your Amazon Web
     * Services account.</p>
     */
    inline const Aws::Vector<ChallengeMetadataSummary>& GetChallenges() const { return m_challenges; }
    template<typename ChallengesT = Aws::Vector<ChallengeMetadataSummary>>
    void SetChallenges(ChallengesT&& value) { m_challengesHasBeenSet = true; m_challenges = std::forward<ChallengesT>(value); }
    template<typename ChallengesT = Aws::Vector<ChallengeMetadataSummary>>
    ListChallengeMetadataResult& WithChallenges(ChallengesT&& value) { SetChallenges(std::forward<ChallengesT>(value)); return *this;}
    template<typename ChallengesT = ChallengeMetadataSummary>
    ListChallengeMetadataResult& AddChallenges(ChallengesT&& value) { m_challengesHasBeenSet = true; m_challenges.emplace_back(std::forward<ChallengesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Connector for SCEP returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListChallengeMetadataResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListChallengeMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ChallengeMetadataSummary> m_challenges;
    bool m_challengesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
