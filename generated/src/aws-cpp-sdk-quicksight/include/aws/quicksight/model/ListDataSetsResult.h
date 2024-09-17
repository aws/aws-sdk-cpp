/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSetSummary.h>
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
  class ListDataSetsResult
  {
  public:
    AWS_QUICKSIGHT_API ListDataSetsResult();
    AWS_QUICKSIGHT_API ListDataSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListDataSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of dataset summaries.</p>
     */
    inline const Aws::Vector<DataSetSummary>& GetDataSetSummaries() const{ return m_dataSetSummaries; }
    inline void SetDataSetSummaries(const Aws::Vector<DataSetSummary>& value) { m_dataSetSummaries = value; }
    inline void SetDataSetSummaries(Aws::Vector<DataSetSummary>&& value) { m_dataSetSummaries = std::move(value); }
    inline ListDataSetsResult& WithDataSetSummaries(const Aws::Vector<DataSetSummary>& value) { SetDataSetSummaries(value); return *this;}
    inline ListDataSetsResult& WithDataSetSummaries(Aws::Vector<DataSetSummary>&& value) { SetDataSetSummaries(std::move(value)); return *this;}
    inline ListDataSetsResult& AddDataSetSummaries(const DataSetSummary& value) { m_dataSetSummaries.push_back(value); return *this; }
    inline ListDataSetsResult& AddDataSetSummaries(DataSetSummary&& value) { m_dataSetSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDataSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDataSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDataSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDataSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline ListDataSetsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<DataSetSummary> m_dataSetSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
