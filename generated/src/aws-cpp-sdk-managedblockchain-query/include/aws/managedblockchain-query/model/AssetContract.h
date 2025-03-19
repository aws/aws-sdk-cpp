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
    AWS_MANAGEDBLOCKCHAINQUERY_API AssetContract() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API AssetContract(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API AssetContract& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container for the contract identifier containing its blockchain network
     * and address.</p>
     */
    inline const ContractIdentifier& GetContractIdentifier() const { return m_contractIdentifier; }
    inline bool ContractIdentifierHasBeenSet() const { return m_contractIdentifierHasBeenSet; }
    template<typename ContractIdentifierT = ContractIdentifier>
    void SetContractIdentifier(ContractIdentifierT&& value) { m_contractIdentifierHasBeenSet = true; m_contractIdentifier = std::forward<ContractIdentifierT>(value); }
    template<typename ContractIdentifierT = ContractIdentifier>
    AssetContract& WithContractIdentifier(ContractIdentifierT&& value) { SetContractIdentifier(std::forward<ContractIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token standard of the contract.</p>
     */
    inline QueryTokenStandard GetTokenStandard() const { return m_tokenStandard; }
    inline bool TokenStandardHasBeenSet() const { return m_tokenStandardHasBeenSet; }
    inline void SetTokenStandard(QueryTokenStandard value) { m_tokenStandardHasBeenSet = true; m_tokenStandard = value; }
    inline AssetContract& WithTokenStandard(QueryTokenStandard value) { SetTokenStandard(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address of the contract deployer.</p>
     */
    inline const Aws::String& GetDeployerAddress() const { return m_deployerAddress; }
    inline bool DeployerAddressHasBeenSet() const { return m_deployerAddressHasBeenSet; }
    template<typename DeployerAddressT = Aws::String>
    void SetDeployerAddress(DeployerAddressT&& value) { m_deployerAddressHasBeenSet = true; m_deployerAddress = std::forward<DeployerAddressT>(value); }
    template<typename DeployerAddressT = Aws::String>
    AssetContract& WithDeployerAddress(DeployerAddressT&& value) { SetDeployerAddress(std::forward<DeployerAddressT>(value)); return *this;}
    ///@}
  private:

    ContractIdentifier m_contractIdentifier;
    bool m_contractIdentifierHasBeenSet = false;

    QueryTokenStandard m_tokenStandard{QueryTokenStandard::NOT_SET};
    bool m_tokenStandardHasBeenSet = false;

    Aws::String m_deployerAddress;
    bool m_deployerAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
