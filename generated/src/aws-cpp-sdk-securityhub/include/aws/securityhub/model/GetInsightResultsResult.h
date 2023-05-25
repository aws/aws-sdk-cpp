/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/InsightResults.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{
  class GetInsightResultsResult
  {
  public:
    AWS_SECURITYHUB_API GetInsightResultsResult();
    AWS_SECURITYHUB_API GetInsightResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetInsightResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The insight results returned by the operation.</p>
     */
    inline const InsightResults& GetInsightResults() const{ return m_insightResults; }

    /**
     * <p>The insight results returned by the operation.</p>
     */
    inline void SetInsightResults(const InsightResults& value) { m_insightResults = value; }

    /**
     * <p>The insight results returned by the operation.</p>
     */
    inline void SetInsightResults(InsightResults&& value) { m_insightResults = std::move(value); }

    /**
     * <p>The insight results returned by the operation.</p>
     */
    inline GetInsightResultsResult& WithInsightResults(const InsightResults& value) { SetInsightResults(value); return *this;}

    /**
     * <p>The insight results returned by the operation.</p>
     */
    inline GetInsightResultsResult& WithInsightResults(InsightResults&& value) { SetInsightResults(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetInsightResultsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetInsightResultsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetInsightResultsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    InsightResults m_insightResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
