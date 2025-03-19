/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/TableRestoreStatus.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class ListTableRestoreStatusResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListTableRestoreStatusResult() = default;
    AWS_REDSHIFTSERVERLESS_API ListTableRestoreStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListTableRestoreStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * following <code>ListTableRestoreStatus</code> operations. This will returns
     * results on the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTableRestoreStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of returned <code>TableRestoreStatus</code> objects.</p>
     */
    inline const Aws::Vector<TableRestoreStatus>& GetTableRestoreStatuses() const { return m_tableRestoreStatuses; }
    template<typename TableRestoreStatusesT = Aws::Vector<TableRestoreStatus>>
    void SetTableRestoreStatuses(TableRestoreStatusesT&& value) { m_tableRestoreStatusesHasBeenSet = true; m_tableRestoreStatuses = std::forward<TableRestoreStatusesT>(value); }
    template<typename TableRestoreStatusesT = Aws::Vector<TableRestoreStatus>>
    ListTableRestoreStatusResult& WithTableRestoreStatuses(TableRestoreStatusesT&& value) { SetTableRestoreStatuses(std::forward<TableRestoreStatusesT>(value)); return *this;}
    template<typename TableRestoreStatusesT = TableRestoreStatus>
    ListTableRestoreStatusResult& AddTableRestoreStatuses(TableRestoreStatusesT&& value) { m_tableRestoreStatusesHasBeenSet = true; m_tableRestoreStatuses.emplace_back(std::forward<TableRestoreStatusesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTableRestoreStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TableRestoreStatus> m_tableRestoreStatuses;
    bool m_tableRestoreStatusesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
