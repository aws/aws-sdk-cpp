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
    AWS_PCACONNECTORSCEP_API ListChallengeMetadataResult();
    AWS_PCACONNECTORSCEP_API ListChallengeMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORSCEP_API ListChallengeMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The challenge metadata for the challenges belonging to your Amazon Web
     * Services account.</p>
     */
    inline const Aws::Vector<ChallengeMetadataSummary>& GetChallenges() const{ return m_challenges; }
    inline void SetChallenges(const Aws::Vector<ChallengeMetadataSummary>& value) { m_challenges = value; }
    inline void SetChallenges(Aws::Vector<ChallengeMetadataSummary>&& value) { m_challenges = std::move(value); }
    inline ListChallengeMetadataResult& WithChallenges(const Aws::Vector<ChallengeMetadataSummary>& value) { SetChallenges(value); return *this;}
    inline ListChallengeMetadataResult& WithChallenges(Aws::Vector<ChallengeMetadataSummary>&& value) { SetChallenges(std::move(value)); return *this;}
    inline ListChallengeMetadataResult& AddChallenges(const ChallengeMetadataSummary& value) { m_challenges.push_back(value); return *this; }
    inline ListChallengeMetadataResult& AddChallenges(ChallengeMetadataSummary&& value) { m_challenges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Connector for SCEP returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListChallengeMetadataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListChallengeMetadataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListChallengeMetadataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListChallengeMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListChallengeMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListChallengeMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ChallengeMetadataSummary> m_challenges;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
