/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/ReservedInstance.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for results from <code>DescribeReservedInstances</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeReservedInstancesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReservedInstancesResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeReservedInstancesResult() = default;
    AWS_OPENSEARCHSERVICE_API DescribeReservedInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeReservedInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeReservedInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of Reserved Instances in the current Region.</p>
     */
    inline const Aws::Vector<ReservedInstance>& GetReservedInstances() const { return m_reservedInstances; }
    template<typename ReservedInstancesT = Aws::Vector<ReservedInstance>>
    void SetReservedInstances(ReservedInstancesT&& value) { m_reservedInstancesHasBeenSet = true; m_reservedInstances = std::forward<ReservedInstancesT>(value); }
    template<typename ReservedInstancesT = Aws::Vector<ReservedInstance>>
    DescribeReservedInstancesResult& WithReservedInstances(ReservedInstancesT&& value) { SetReservedInstances(std::forward<ReservedInstancesT>(value)); return *this;}
    template<typename ReservedInstancesT = ReservedInstance>
    DescribeReservedInstancesResult& AddReservedInstances(ReservedInstancesT&& value) { m_reservedInstancesHasBeenSet = true; m_reservedInstances.emplace_back(std::forward<ReservedInstancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReservedInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ReservedInstance> m_reservedInstances;
    bool m_reservedInstancesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
