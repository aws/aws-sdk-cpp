/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/TemplateSummary.h>
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
namespace RoboMaker
{
namespace Model
{
  class ListWorldTemplatesResult
  {
  public:
    AWS_ROBOMAKER_API ListWorldTemplatesResult();
    AWS_ROBOMAKER_API ListWorldTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API ListWorldTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information for templates.</p>
     */
    inline const Aws::Vector<TemplateSummary>& GetTemplateSummaries() const{ return m_templateSummaries; }

    /**
     * <p>Summary information for templates.</p>
     */
    inline void SetTemplateSummaries(const Aws::Vector<TemplateSummary>& value) { m_templateSummaries = value; }

    /**
     * <p>Summary information for templates.</p>
     */
    inline void SetTemplateSummaries(Aws::Vector<TemplateSummary>&& value) { m_templateSummaries = std::move(value); }

    /**
     * <p>Summary information for templates.</p>
     */
    inline ListWorldTemplatesResult& WithTemplateSummaries(const Aws::Vector<TemplateSummary>& value) { SetTemplateSummaries(value); return *this;}

    /**
     * <p>Summary information for templates.</p>
     */
    inline ListWorldTemplatesResult& WithTemplateSummaries(Aws::Vector<TemplateSummary>&& value) { SetTemplateSummaries(std::move(value)); return *this;}

    /**
     * <p>Summary information for templates.</p>
     */
    inline ListWorldTemplatesResult& AddTemplateSummaries(const TemplateSummary& value) { m_templateSummaries.push_back(value); return *this; }

    /**
     * <p>Summary information for templates.</p>
     */
    inline ListWorldTemplatesResult& AddTemplateSummaries(TemplateSummary&& value) { m_templateSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListWorldTemplates</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListWorldTemplates</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListWorldTemplates</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListWorldTemplates</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListWorldTemplates</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListWorldTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListWorldTemplates</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListWorldTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListWorldTemplates</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListWorldTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TemplateSummary> m_templateSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
