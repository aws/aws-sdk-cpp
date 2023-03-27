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
    AWS_VOICEID_API ListFraudstersResult();
    AWS_VOICEID_API ListFraudstersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API ListFraudstersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that contains details about each fraudster in the Amazon Web Services
     * account. </p>
     */
    inline const Aws::Vector<FraudsterSummary>& GetFraudsterSummaries() const{ return m_fraudsterSummaries; }

    /**
     * <p>A list that contains details about each fraudster in the Amazon Web Services
     * account. </p>
     */
    inline void SetFraudsterSummaries(const Aws::Vector<FraudsterSummary>& value) { m_fraudsterSummaries = value; }

    /**
     * <p>A list that contains details about each fraudster in the Amazon Web Services
     * account. </p>
     */
    inline void SetFraudsterSummaries(Aws::Vector<FraudsterSummary>&& value) { m_fraudsterSummaries = std::move(value); }

    /**
     * <p>A list that contains details about each fraudster in the Amazon Web Services
     * account. </p>
     */
    inline ListFraudstersResult& WithFraudsterSummaries(const Aws::Vector<FraudsterSummary>& value) { SetFraudsterSummaries(value); return *this;}

    /**
     * <p>A list that contains details about each fraudster in the Amazon Web Services
     * account. </p>
     */
    inline ListFraudstersResult& WithFraudsterSummaries(Aws::Vector<FraudsterSummary>&& value) { SetFraudsterSummaries(std::move(value)); return *this;}

    /**
     * <p>A list that contains details about each fraudster in the Amazon Web Services
     * account. </p>
     */
    inline ListFraudstersResult& AddFraudsterSummaries(const FraudsterSummary& value) { m_fraudsterSummaries.push_back(value); return *this; }

    /**
     * <p>A list that contains details about each fraudster in the Amazon Web Services
     * account. </p>
     */
    inline ListFraudstersResult& AddFraudsterSummaries(FraudsterSummary&& value) { m_fraudsterSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline ListFraudstersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline ListFraudstersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline ListFraudstersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListFraudstersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListFraudstersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListFraudstersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FraudsterSummary> m_fraudsterSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
