/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ResilienceHub
{
namespace Model
{
  class ListMetricsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListMetricsResult();
    AWS_RESILIENCEHUB_API ListMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMetricsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMetricsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMetricsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies all the list of metric values for each row of metrics.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetRows() const{ return m_rows; }
    inline void SetRows(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_rows = value; }
    inline void SetRows(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_rows = std::move(value); }
    inline ListMetricsResult& WithRows(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetRows(value); return *this;}
    inline ListMetricsResult& WithRows(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetRows(std::move(value)); return *this;}
    inline ListMetricsResult& AddRows(const Aws::Vector<Aws::String>& value) { m_rows.push_back(value); return *this; }
    inline ListMetricsResult& AddRows(Aws::Vector<Aws::String>&& value) { m_rows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::Vector<Aws::String>> m_rows;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
