/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/AccessorSummary.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class ListAccessorsResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API ListAccessorsResult() = default;
    AWS_MANAGEDBLOCKCHAIN_API ListAccessorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API ListAccessorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of AccessorSummary objects that contain configuration properties for
     * each accessor.</p>
     */
    inline const Aws::Vector<AccessorSummary>& GetAccessors() const { return m_accessors; }
    template<typename AccessorsT = Aws::Vector<AccessorSummary>>
    void SetAccessors(AccessorsT&& value) { m_accessorsHasBeenSet = true; m_accessors = std::forward<AccessorsT>(value); }
    template<typename AccessorsT = Aws::Vector<AccessorSummary>>
    ListAccessorsResult& WithAccessors(AccessorsT&& value) { SetAccessors(std::forward<AccessorsT>(value)); return *this;}
    template<typename AccessorsT = AccessorSummary>
    ListAccessorsResult& AddAccessors(AccessorsT&& value) { m_accessorsHasBeenSet = true; m_accessors.emplace_back(std::forward<AccessorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccessorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAccessorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccessorSummary> m_accessors;
    bool m_accessorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
