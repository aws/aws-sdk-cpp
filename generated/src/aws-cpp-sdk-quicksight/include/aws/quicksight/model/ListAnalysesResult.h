/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AnalysisSummary.h>
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
  class ListAnalysesResult
  {
  public:
    AWS_QUICKSIGHT_API ListAnalysesResult();
    AWS_QUICKSIGHT_API ListAnalysesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListAnalysesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata describing each of the analyses that are listed.</p>
     */
    inline const Aws::Vector<AnalysisSummary>& GetAnalysisSummaryList() const{ return m_analysisSummaryList; }

    /**
     * <p>Metadata describing each of the analyses that are listed.</p>
     */
    inline void SetAnalysisSummaryList(const Aws::Vector<AnalysisSummary>& value) { m_analysisSummaryList = value; }

    /**
     * <p>Metadata describing each of the analyses that are listed.</p>
     */
    inline void SetAnalysisSummaryList(Aws::Vector<AnalysisSummary>&& value) { m_analysisSummaryList = std::move(value); }

    /**
     * <p>Metadata describing each of the analyses that are listed.</p>
     */
    inline ListAnalysesResult& WithAnalysisSummaryList(const Aws::Vector<AnalysisSummary>& value) { SetAnalysisSummaryList(value); return *this;}

    /**
     * <p>Metadata describing each of the analyses that are listed.</p>
     */
    inline ListAnalysesResult& WithAnalysisSummaryList(Aws::Vector<AnalysisSummary>&& value) { SetAnalysisSummaryList(std::move(value)); return *this;}

    /**
     * <p>Metadata describing each of the analyses that are listed.</p>
     */
    inline ListAnalysesResult& AddAnalysisSummaryList(const AnalysisSummary& value) { m_analysisSummaryList.push_back(value); return *this; }

    /**
     * <p>Metadata describing each of the analyses that are listed.</p>
     */
    inline ListAnalysesResult& AddAnalysisSummaryList(AnalysisSummary&& value) { m_analysisSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline ListAnalysesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline ListAnalysesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline ListAnalysesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListAnalysesResult& WithStatus(int value) { SetStatus(value); return *this;}


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
    inline ListAnalysesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListAnalysesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListAnalysesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AnalysisSummary> m_analysisSummaryList;

    Aws::String m_nextToken;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
