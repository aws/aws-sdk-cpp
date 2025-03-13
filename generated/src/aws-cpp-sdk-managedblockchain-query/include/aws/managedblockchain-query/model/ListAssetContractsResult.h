/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/model/AssetContract.h>
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
namespace ManagedBlockchainQuery
{
namespace Model
{
  class ListAssetContractsResult
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ListAssetContractsResult() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API ListAssetContractsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAINQUERY_API ListAssetContractsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of contract objects that contain the properties for each
     * contract.</p>
     */
    inline const Aws::Vector<AssetContract>& GetContracts() const { return m_contracts; }
    template<typename ContractsT = Aws::Vector<AssetContract>>
    void SetContracts(ContractsT&& value) { m_contractsHasBeenSet = true; m_contracts = std::forward<ContractsT>(value); }
    template<typename ContractsT = Aws::Vector<AssetContract>>
    ListAssetContractsResult& WithContracts(ContractsT&& value) { SetContracts(std::forward<ContractsT>(value)); return *this;}
    template<typename ContractsT = AssetContract>
    ListAssetContractsResult& AddContracts(ContractsT&& value) { m_contractsHasBeenSet = true; m_contracts.emplace_back(std::forward<ContractsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssetContractsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssetContractsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssetContract> m_contracts;
    bool m_contractsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
