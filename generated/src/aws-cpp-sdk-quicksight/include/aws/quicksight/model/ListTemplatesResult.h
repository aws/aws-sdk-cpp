/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TemplateSummary.h>
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
namespace QuickSight
{
namespace Model
{
  class ListTemplatesResult
  {
  public:
    AWS_QUICKSIGHT_API ListTemplatesResult();
    AWS_QUICKSIGHT_API ListTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing information about the templates in the list.</p>
     */
    inline const Aws::Vector<TemplateSummary>& GetTemplateSummaryList() const{ return m_templateSummaryList; }

    /**
     * <p>A structure containing information about the templates in the list.</p>
     */
    inline void SetTemplateSummaryList(const Aws::Vector<TemplateSummary>& value) { m_templateSummaryList = value; }

    /**
     * <p>A structure containing information about the templates in the list.</p>
     */
    inline void SetTemplateSummaryList(Aws::Vector<TemplateSummary>&& value) { m_templateSummaryList = std::move(value); }

    /**
     * <p>A structure containing information about the templates in the list.</p>
     */
    inline ListTemplatesResult& WithTemplateSummaryList(const Aws::Vector<TemplateSummary>& value) { SetTemplateSummaryList(value); return *this;}

    /**
     * <p>A structure containing information about the templates in the list.</p>
     */
    inline ListTemplatesResult& WithTemplateSummaryList(Aws::Vector<TemplateSummary>&& value) { SetTemplateSummaryList(std::move(value)); return *this;}

    /**
     * <p>A structure containing information about the templates in the list.</p>
     */
    inline ListTemplatesResult& AddTemplateSummaryList(const TemplateSummary& value) { m_templateSummaryList.push_back(value); return *this; }

    /**
     * <p>A structure containing information about the templates in the list.</p>
     */
    inline ListTemplatesResult& AddTemplateSummaryList(TemplateSummary&& value) { m_templateSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline ListTemplatesResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<TemplateSummary> m_templateSummaryList;

    Aws::String m_nextToken;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
