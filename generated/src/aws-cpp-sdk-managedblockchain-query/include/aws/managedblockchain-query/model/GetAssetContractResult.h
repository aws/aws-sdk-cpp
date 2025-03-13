/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/ContractIdentifier.h>
#include <aws/managedblockchain-query/model/QueryTokenStandard.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/model/ContractMetadata.h>
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
  class GetAssetContractResult
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API GetAssetContractResult() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API GetAssetContractResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAINQUERY_API GetAssetContractResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the blockchain address and network information about the
     * contract.</p>
     */
    inline const ContractIdentifier& GetContractIdentifier() const { return m_contractIdentifier; }
    template<typename ContractIdentifierT = ContractIdentifier>
    void SetContractIdentifier(ContractIdentifierT&& value) { m_contractIdentifierHasBeenSet = true; m_contractIdentifier = std::forward<ContractIdentifierT>(value); }
    template<typename ContractIdentifierT = ContractIdentifier>
    GetAssetContractResult& WithContractIdentifier(ContractIdentifierT&& value) { SetContractIdentifier(std::forward<ContractIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token standard of the contract requested.</p>
     */
    inline QueryTokenStandard GetTokenStandard() const { return m_tokenStandard; }
    inline void SetTokenStandard(QueryTokenStandard value) { m_tokenStandardHasBeenSet = true; m_tokenStandard = value; }
    inline GetAssetContractResult& WithTokenStandard(QueryTokenStandard value) { SetTokenStandard(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address of the deployer of contract.</p>
     */
    inline const Aws::String& GetDeployerAddress() const { return m_deployerAddress; }
    template<typename DeployerAddressT = Aws::String>
    void SetDeployerAddress(DeployerAddressT&& value) { m_deployerAddressHasBeenSet = true; m_deployerAddress = std::forward<DeployerAddressT>(value); }
    template<typename DeployerAddressT = Aws::String>
    GetAssetContractResult& WithDeployerAddress(DeployerAddressT&& value) { SetDeployerAddress(std::forward<DeployerAddressT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ContractMetadata& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = ContractMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = ContractMetadata>
    GetAssetContractResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAssetContractResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContractIdentifier m_contractIdentifier;
    bool m_contractIdentifierHasBeenSet = false;

    QueryTokenStandard m_tokenStandard{QueryTokenStandard::NOT_SET};
    bool m_tokenStandardHasBeenSet = false;

    Aws::String m_deployerAddress;
    bool m_deployerAddressHasBeenSet = false;

    ContractMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
