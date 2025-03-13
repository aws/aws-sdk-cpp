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
    AWS_RESILIENCEHUB_API ListMetricsResult() = default;
    AWS_RESILIENCEHUB_API ListMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMetricsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies all the list of metric values for each row of metrics.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetRows() const { return m_rows; }
    template<typename RowsT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetRows(RowsT&& value) { m_rowsHasBeenSet = true; m_rows = std::forward<RowsT>(value); }
    template<typename RowsT = Aws::Vector<Aws::Vector<Aws::String>>>
    ListMetricsResult& WithRows(RowsT&& value) { SetRows(std::forward<RowsT>(value)); return *this;}
    template<typename RowsT = Aws::Vector<Aws::String>>
    ListMetricsResult& AddRows(RowsT&& value) { m_rowsHasBeenSet = true; m_rows.emplace_back(std::forward<RowsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_rows;
    bool m_rowsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
