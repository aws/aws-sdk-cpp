/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/ImportJobSummary.h>
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
  class ListImportJobsResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API ListImportJobsResult();
    AWS_CONNECTWISDOMSERVICE_API ListImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API ListImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information about the import jobs.</p>
     */
    inline const Aws::Vector<ImportJobSummary>& GetImportJobSummaries() const{ return m_importJobSummaries; }

    /**
     * <p>Summary information about the import jobs.</p>
     */
    inline void SetImportJobSummaries(const Aws::Vector<ImportJobSummary>& value) { m_importJobSummaries = value; }

    /**
     * <p>Summary information about the import jobs.</p>
     */
    inline void SetImportJobSummaries(Aws::Vector<ImportJobSummary>&& value) { m_importJobSummaries = std::move(value); }

    /**
     * <p>Summary information about the import jobs.</p>
     */
    inline ListImportJobsResult& WithImportJobSummaries(const Aws::Vector<ImportJobSummary>& value) { SetImportJobSummaries(value); return *this;}

    /**
     * <p>Summary information about the import jobs.</p>
     */
    inline ListImportJobsResult& WithImportJobSummaries(Aws::Vector<ImportJobSummary>&& value) { SetImportJobSummaries(std::move(value)); return *this;}

    /**
     * <p>Summary information about the import jobs.</p>
     */
    inline ListImportJobsResult& AddImportJobSummaries(const ImportJobSummary& value) { m_importJobSummaries.push_back(value); return *this; }

    /**
     * <p>Summary information about the import jobs.</p>
     */
    inline ListImportJobsResult& AddImportJobSummaries(ImportJobSummary&& value) { m_importJobSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListImportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListImportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListImportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ImportJobSummary> m_importJobSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
