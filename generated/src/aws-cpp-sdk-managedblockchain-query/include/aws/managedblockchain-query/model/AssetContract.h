/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/ContractIdentifier.h>
#include <aws/managedblockchain-query/model/QueryTokenStandard.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   * <p>This container contains information about an contract.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/AssetContract">AWS
   * API Reference</a></p>
   */
  class AssetContract
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API AssetContract();
    AWS_MANAGEDBLOCKCHAINQUERY_API AssetContract(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API AssetContract& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container for the contract identifier containing its blockchain network
     * and address.</p>
     */
    inline const ContractIdentifier& GetContractIdentifier() const{ return m_contractIdentifier; }
    inline bool ContractIdentifierHasBeenSet() const { return m_contractIdentifierHasBeenSet; }
    inline void SetContractIdentifier(const ContractIdentifier& value) { m_contractIdentifierHasBeenSet = true; m_contractIdentifier = value; }
    inline void SetContractIdentifier(ContractIdentifier&& value) { m_contractIdentifierHasBeenSet = true; m_contractIdentifier = std::move(value); }
    inline AssetContract& WithContractIdentifier(const ContractIdentifier& value) { SetContractIdentifier(value); return *this;}
    inline AssetContract& WithContractIdentifier(ContractIdentifier&& value) { SetContractIdentifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token standard of the contract.</p>
     */
    inline const QueryTokenStandard& GetTokenStandard() const{ return m_tokenStandard; }
    inline bool TokenStandardHasBeenSet() const { return m_tokenStandardHasBeenSet; }
    inline void SetTokenStandard(const QueryTokenStandard& value) { m_tokenStandardHasBeenSet = true; m_tokenStandard = value; }
    inline void SetTokenStandard(QueryTokenStandard&& value) { m_tokenStandardHasBeenSet = true; m_tokenStandard = std::move(value); }
    inline AssetContract& WithTokenStandard(const QueryTokenStandard& value) { SetTokenStandard(value); return *this;}
    inline AssetContract& WithTokenStandard(QueryTokenStandard&& value) { SetTokenStandard(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address of the contract deployer.</p>
     */
    inline const Aws::String& GetDeployerAddress() const{ return m_deployerAddress; }
    inline bool DeployerAddressHasBeenSet() const { return m_deployerAddressHasBeenSet; }
    inline void SetDeployerAddress(const Aws::String& value) { m_deployerAddressHasBeenSet = true; m_deployerAddress = value; }
    inline void SetDeployerAddress(Aws::String&& value) { m_deployerAddressHasBeenSet = true; m_deployerAddress = std::move(value); }
    inline void SetDeployerAddress(const char* value) { m_deployerAddressHasBeenSet = true; m_deployerAddress.assign(value); }
    inline AssetContract& WithDeployerAddress(const Aws::String& value) { SetDeployerAddress(value); return *this;}
    inline AssetContract& WithDeployerAddress(Aws::String&& value) { SetDeployerAddress(std::move(value)); return *this;}
    inline AssetContract& WithDeployerAddress(const char* value) { SetDeployerAddress(value); return *this;}
    ///@}
  private:

    ContractIdentifier m_contractIdentifier;
    bool m_contractIdentifierHasBeenSet = false;

    QueryTokenStandard m_tokenStandard;
    bool m_tokenStandardHasBeenSet = false;

    Aws::String m_deployerAddress;
    bool m_deployerAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
