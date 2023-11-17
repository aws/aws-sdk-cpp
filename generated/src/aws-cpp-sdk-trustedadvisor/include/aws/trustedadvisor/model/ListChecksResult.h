/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/trustedadvisor/model/CheckSummary.h>
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
namespace TrustedAdvisor
{
namespace Model
{
  class ListChecksResult
  {
  public:
    AWS_TRUSTEDADVISOR_API ListChecksResult();
    AWS_TRUSTEDADVISOR_API ListChecksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRUSTEDADVISOR_API ListChecksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of Checks</p>
     */
    inline const Aws::Vector<CheckSummary>& GetCheckSummaries() const{ return m_checkSummaries; }

    /**
     * <p>The list of Checks</p>
     */
    inline void SetCheckSummaries(const Aws::Vector<CheckSummary>& value) { m_checkSummaries = value; }

    /**
     * <p>The list of Checks</p>
     */
    inline void SetCheckSummaries(Aws::Vector<CheckSummary>&& value) { m_checkSummaries = std::move(value); }

    /**
     * <p>The list of Checks</p>
     */
    inline ListChecksResult& WithCheckSummaries(const Aws::Vector<CheckSummary>& value) { SetCheckSummaries(value); return *this;}

    /**
     * <p>The list of Checks</p>
     */
    inline ListChecksResult& WithCheckSummaries(Aws::Vector<CheckSummary>&& value) { SetCheckSummaries(std::move(value)); return *this;}

    /**
     * <p>The list of Checks</p>
     */
    inline ListChecksResult& AddCheckSummaries(const CheckSummary& value) { m_checkSummaries.push_back(value); return *this; }

    /**
     * <p>The list of Checks</p>
     */
    inline ListChecksResult& AddCheckSummaries(CheckSummary&& value) { m_checkSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListChecksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListChecksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListChecksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListChecksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListChecksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListChecksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CheckSummary> m_checkSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
