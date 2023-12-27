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
    AWS_MANAGEDBLOCKCHAINQUERY_API ContractFilter();
    AWS_MANAGEDBLOCKCHAINQUERY_API ContractFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API ContractFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The blockchain network of the contract.</p>
     */
    inline const QueryNetwork& GetNetwork() const{ return m_network; }

    /**
     * <p>The blockchain network of the contract.</p>
     */
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }

    /**
     * <p>The blockchain network of the contract.</p>
     */
    inline void SetNetwork(const QueryNetwork& value) { m_networkHasBeenSet = true; m_network = value; }

    /**
     * <p>The blockchain network of the contract.</p>
     */
    inline void SetNetwork(QueryNetwork&& value) { m_networkHasBeenSet = true; m_network = std::move(value); }

    /**
     * <p>The blockchain network of the contract.</p>
     */
    inline ContractFilter& WithNetwork(const QueryNetwork& value) { SetNetwork(value); return *this;}

    /**
     * <p>The blockchain network of the contract.</p>
     */
    inline ContractFilter& WithNetwork(QueryNetwork&& value) { SetNetwork(std::move(value)); return *this;}


    /**
     * <p>The container for the token standard.</p>
     */
    inline const QueryTokenStandard& GetTokenStandard() const{ return m_tokenStandard; }

    /**
     * <p>The container for the token standard.</p>
     */
    inline bool TokenStandardHasBeenSet() const { return m_tokenStandardHasBeenSet; }

    /**
     * <p>The container for the token standard.</p>
     */
    inline void SetTokenStandard(const QueryTokenStandard& value) { m_tokenStandardHasBeenSet = true; m_tokenStandard = value; }

    /**
     * <p>The container for the token standard.</p>
     */
    inline void SetTokenStandard(QueryTokenStandard&& value) { m_tokenStandardHasBeenSet = true; m_tokenStandard = std::move(value); }

    /**
     * <p>The container for the token standard.</p>
     */
    inline ContractFilter& WithTokenStandard(const QueryTokenStandard& value) { SetTokenStandard(value); return *this;}

    /**
     * <p>The container for the token standard.</p>
     */
    inline ContractFilter& WithTokenStandard(QueryTokenStandard&& value) { SetTokenStandard(std::move(value)); return *this;}


    /**
     * <p>The network address of the deployer.</p>
     */
    inline const Aws::String& GetDeployerAddress() const{ return m_deployerAddress; }

    /**
     * <p>The network address of the deployer.</p>
     */
    inline bool DeployerAddressHasBeenSet() const { return m_deployerAddressHasBeenSet; }

    /**
     * <p>The network address of the deployer.</p>
     */
    inline void SetDeployerAddress(const Aws::String& value) { m_deployerAddressHasBeenSet = true; m_deployerAddress = value; }

    /**
     * <p>The network address of the deployer.</p>
     */
    inline void SetDeployerAddress(Aws::String&& value) { m_deployerAddressHasBeenSet = true; m_deployerAddress = std::move(value); }

    /**
     * <p>The network address of the deployer.</p>
     */
    inline void SetDeployerAddress(const char* value) { m_deployerAddressHasBeenSet = true; m_deployerAddress.assign(value); }

    /**
     * <p>The network address of the deployer.</p>
     */
    inline ContractFilter& WithDeployerAddress(const Aws::String& value) { SetDeployerAddress(value); return *this;}

    /**
     * <p>The network address of the deployer.</p>
     */
    inline ContractFilter& WithDeployerAddress(Aws::String&& value) { SetDeployerAddress(std::move(value)); return *this;}

    /**
     * <p>The network address of the deployer.</p>
     */
    inline ContractFilter& WithDeployerAddress(const char* value) { SetDeployerAddress(value); return *this;}

  private:

    QueryNetwork m_network;
    bool m_networkHasBeenSet = false;

    QueryTokenStandard m_tokenStandard;
    bool m_tokenStandardHasBeenSet = false;

    Aws::String m_deployerAddress;
    bool m_deployerAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
