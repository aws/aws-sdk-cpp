/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/OperationSummary.h>
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
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The ListOperations response includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListOperationsResponse">AWS
   * API Reference</a></p>
   */
  class ListOperationsResult
  {
  public:
    AWS_ROUTE53DOMAINS_API ListOperationsResult() = default;
    AWS_ROUTE53DOMAINS_API ListOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API ListOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists summaries of the operations.</p>
     */
    inline const Aws::Vector<OperationSummary>& GetOperations() const { return m_operations; }
    template<typename OperationsT = Aws::Vector<OperationSummary>>
    void SetOperations(OperationsT&& value) { m_operationsHasBeenSet = true; m_operations = std::forward<OperationsT>(value); }
    template<typename OperationsT = Aws::Vector<OperationSummary>>
    ListOperationsResult& WithOperations(OperationsT&& value) { SetOperations(std::forward<OperationsT>(value)); return *this;}
    template<typename OperationsT = OperationSummary>
    ListOperationsResult& AddOperations(OperationsT&& value) { m_operationsHasBeenSet = true; m_operations.emplace_back(std::forward<OperationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more operations than you specified for <code>MaxItems</code> in
     * the request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline const Aws::String& GetNextPageMarker() const { return m_nextPageMarker; }
    template<typename NextPageMarkerT = Aws::String>
    void SetNextPageMarker(NextPageMarkerT&& value) { m_nextPageMarkerHasBeenSet = true; m_nextPageMarker = std::forward<NextPageMarkerT>(value); }
    template<typename NextPageMarkerT = Aws::String>
    ListOperationsResult& WithNextPageMarker(NextPageMarkerT&& value) { SetNextPageMarker(std::forward<NextPageMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOperationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OperationSummary> m_operations;
    bool m_operationsHasBeenSet = false;

    Aws::String m_nextPageMarker;
    bool m_nextPageMarkerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
