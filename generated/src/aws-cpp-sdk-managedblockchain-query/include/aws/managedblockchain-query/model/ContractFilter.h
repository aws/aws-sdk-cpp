/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/QueryNetwork.h>
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
   * <p>The contract or wallet address by which to filter the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/ContractFilter">AWS
   * API Reference</a></p>
   */
  class ContractFilter
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ContractFilter() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API ContractFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API ContractFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The blockchain network of the contract.</p>
     */
    inline QueryNetwork GetNetwork() const { return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    inline void SetNetwork(QueryNetwork value) { m_networkHasBeenSet = true; m_network = value; }
    inline ContractFilter& WithNetwork(QueryNetwork value) { SetNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container for the token standard.</p>
     */
    inline QueryTokenStandard GetTokenStandard() const { return m_tokenStandard; }
    inline bool TokenStandardHasBeenSet() const { return m_tokenStandardHasBeenSet; }
    inline void SetTokenStandard(QueryTokenStandard value) { m_tokenStandardHasBeenSet = true; m_tokenStandard = value; }
    inline ContractFilter& WithTokenStandard(QueryTokenStandard value) { SetTokenStandard(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network address of the deployer.</p>
     */
    inline const Aws::String& GetDeployerAddress() const { return m_deployerAddress; }
    inline bool DeployerAddressHasBeenSet() const { return m_deployerAddressHasBeenSet; }
    template<typename DeployerAddressT = Aws::String>
    void SetDeployerAddress(DeployerAddressT&& value) { m_deployerAddressHasBeenSet = true; m_deployerAddress = std::forward<DeployerAddressT>(value); }
    template<typename DeployerAddressT = Aws::String>
    ContractFilter& WithDeployerAddress(DeployerAddressT&& value) { SetDeployerAddress(std::forward<DeployerAddressT>(value)); return *this;}
    ///@}
  private:

    QueryNetwork m_network{QueryNetwork::NOT_SET};
    bool m_networkHasBeenSet = false;

    QueryTokenStandard m_tokenStandard{QueryTokenStandard::NOT_SET};
    bool m_tokenStandardHasBeenSet = false;

    Aws::String m_deployerAddress;
    bool m_deployerAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
