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
    AWS_MANAGEDBLOCKCHAINQUERY_API GetAssetContractResult();
    AWS_MANAGEDBLOCKCHAINQUERY_API GetAssetContractResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAINQUERY_API GetAssetContractResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the blockchain address and network information about the
     * contract.</p>
     */
    inline const ContractIdentifier& GetContractIdentifier() const{ return m_contractIdentifier; }

    /**
     * <p>Contains the blockchain address and network information about the
     * contract.</p>
     */
    inline void SetContractIdentifier(const ContractIdentifier& value) { m_contractIdentifier = value; }

    /**
     * <p>Contains the blockchain address and network information about the
     * contract.</p>
     */
    inline void SetContractIdentifier(ContractIdentifier&& value) { m_contractIdentifier = std::move(value); }

    /**
     * <p>Contains the blockchain address and network information about the
     * contract.</p>
     */
    inline GetAssetContractResult& WithContractIdentifier(const ContractIdentifier& value) { SetContractIdentifier(value); return *this;}

    /**
     * <p>Contains the blockchain address and network information about the
     * contract.</p>
     */
    inline GetAssetContractResult& WithContractIdentifier(ContractIdentifier&& value) { SetContractIdentifier(std::move(value)); return *this;}


    /**
     * <p>The token standard of the contract requested.</p>
     */
    inline const QueryTokenStandard& GetTokenStandard() const{ return m_tokenStandard; }

    /**
     * <p>The token standard of the contract requested.</p>
     */
    inline void SetTokenStandard(const QueryTokenStandard& value) { m_tokenStandard = value; }

    /**
     * <p>The token standard of the contract requested.</p>
     */
    inline void SetTokenStandard(QueryTokenStandard&& value) { m_tokenStandard = std::move(value); }

    /**
     * <p>The token standard of the contract requested.</p>
     */
    inline GetAssetContractResult& WithTokenStandard(const QueryTokenStandard& value) { SetTokenStandard(value); return *this;}

    /**
     * <p>The token standard of the contract requested.</p>
     */
    inline GetAssetContractResult& WithTokenStandard(QueryTokenStandard&& value) { SetTokenStandard(std::move(value)); return *this;}


    /**
     * <p>The address of the deployer of contract.</p>
     */
    inline const Aws::String& GetDeployerAddress() const{ return m_deployerAddress; }

    /**
     * <p>The address of the deployer of contract.</p>
     */
    inline void SetDeployerAddress(const Aws::String& value) { m_deployerAddress = value; }

    /**
     * <p>The address of the deployer of contract.</p>
     */
    inline void SetDeployerAddress(Aws::String&& value) { m_deployerAddress = std::move(value); }

    /**
     * <p>The address of the deployer of contract.</p>
     */
    inline void SetDeployerAddress(const char* value) { m_deployerAddress.assign(value); }

    /**
     * <p>The address of the deployer of contract.</p>
     */
    inline GetAssetContractResult& WithDeployerAddress(const Aws::String& value) { SetDeployerAddress(value); return *this;}

    /**
     * <p>The address of the deployer of contract.</p>
     */
    inline GetAssetContractResult& WithDeployerAddress(Aws::String&& value) { SetDeployerAddress(std::move(value)); return *this;}

    /**
     * <p>The address of the deployer of contract.</p>
     */
    inline GetAssetContractResult& WithDeployerAddress(const char* value) { SetDeployerAddress(value); return *this;}


    
    inline const ContractMetadata& GetMetadata() const{ return m_metadata; }

    
    inline void SetMetadata(const ContractMetadata& value) { m_metadata = value; }

    
    inline void SetMetadata(ContractMetadata&& value) { m_metadata = std::move(value); }

    
    inline GetAssetContractResult& WithMetadata(const ContractMetadata& value) { SetMetadata(value); return *this;}

    
    inline GetAssetContractResult& WithMetadata(ContractMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAssetContractResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAssetContractResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAssetContractResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ContractIdentifier m_contractIdentifier;

    QueryTokenStandard m_tokenStandard;

    Aws::String m_deployerAddress;

    ContractMetadata m_metadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
