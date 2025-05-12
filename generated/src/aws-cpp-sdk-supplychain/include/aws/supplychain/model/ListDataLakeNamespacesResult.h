/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataLakeNamespace.h>
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
namespace SupplyChain
{
namespace Model
{
  /**
   * <p>The response parameters of ListDataLakeNamespaces.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/ListDataLakeNamespacesResponse">AWS
   * API Reference</a></p>
   */
  class ListDataLakeNamespacesResult
  {
  public:
    AWS_SUPPLYCHAIN_API ListDataLakeNamespacesResult() = default;
    AWS_SUPPLYCHAIN_API ListDataLakeNamespacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API ListDataLakeNamespacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of fetched namespace details. Noted it only contains custom
     * namespaces, pre-defined namespaces are not included.</p>
     */
    inline const Aws::Vector<DataLakeNamespace>& GetNamespaces() const { return m_namespaces; }
    template<typename NamespacesT = Aws::Vector<DataLakeNamespace>>
    void SetNamespaces(NamespacesT&& value) { m_namespacesHasBeenSet = true; m_namespaces = std::forward<NamespacesT>(value); }
    template<typename NamespacesT = Aws::Vector<DataLakeNamespace>>
    ListDataLakeNamespacesResult& WithNamespaces(NamespacesT&& value) { SetNamespaces(std::forward<NamespacesT>(value)); return *this;}
    template<typename NamespacesT = DataLakeNamespace>
    ListDataLakeNamespacesResult& AddNamespaces(NamespacesT&& value) { m_namespacesHasBeenSet = true; m_namespaces.emplace_back(std::forward<NamespacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to fetch next page of namespaces.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataLakeNamespacesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataLakeNamespacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataLakeNamespace> m_namespaces;
    bool m_namespacesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
