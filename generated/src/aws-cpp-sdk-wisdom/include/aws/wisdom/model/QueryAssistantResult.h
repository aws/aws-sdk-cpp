/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wisdom/model/ResultData.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class QueryAssistantResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API QueryAssistantResult();
    AWS_CONNECTWISDOMSERVICE_API QueryAssistantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API QueryAssistantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline QueryAssistantResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline QueryAssistantResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline QueryAssistantResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The results of the query.</p>
     */
    inline const Aws::Vector<ResultData>& GetResults() const{ return m_results; }

    /**
     * <p>The results of the query.</p>
     */
    inline void SetResults(const Aws::Vector<ResultData>& value) { m_results = value; }

    /**
     * <p>The results of the query.</p>
     */
    inline void SetResults(Aws::Vector<ResultData>&& value) { m_results = std::move(value); }

    /**
     * <p>The results of the query.</p>
     */
    inline QueryAssistantResult& WithResults(const Aws::Vector<ResultData>& value) { SetResults(value); return *this;}

    /**
     * <p>The results of the query.</p>
     */
    inline QueryAssistantResult& WithResults(Aws::Vector<ResultData>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>The results of the query.</p>
     */
    inline QueryAssistantResult& AddResults(const ResultData& value) { m_results.push_back(value); return *this; }

    /**
     * <p>The results of the query.</p>
     */
    inline QueryAssistantResult& AddResults(ResultData&& value) { m_results.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ResultData> m_results;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
