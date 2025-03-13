/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/ReservedNode.h>
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
namespace MemoryDB
{
namespace Model
{
  class PurchaseReservedNodesOfferingResult
  {
  public:
    AWS_MEMORYDB_API PurchaseReservedNodesOfferingResult() = default;
    AWS_MEMORYDB_API PurchaseReservedNodesOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API PurchaseReservedNodesOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the output of a <code>PurchaseReservedNodesOffering</code>
     * operation.</p>
     */
    inline const ReservedNode& GetReservedNode() const { return m_reservedNode; }
    template<typename ReservedNodeT = ReservedNode>
    void SetReservedNode(ReservedNodeT&& value) { m_reservedNodeHasBeenSet = true; m_reservedNode = std::forward<ReservedNodeT>(value); }
    template<typename ReservedNodeT = ReservedNode>
    PurchaseReservedNodesOfferingResult& WithReservedNode(ReservedNodeT&& value) { SetReservedNode(std::forward<ReservedNodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PurchaseReservedNodesOfferingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReservedNode m_reservedNode;
    bool m_reservedNodeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
