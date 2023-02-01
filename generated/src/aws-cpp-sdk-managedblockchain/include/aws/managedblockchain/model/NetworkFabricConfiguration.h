/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/Edition.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Hyperledger Fabric configuration properties for the network.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NetworkFabricConfiguration">AWS
   * API Reference</a></p>
   */
  class NetworkFabricConfiguration
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API NetworkFabricConfiguration();
    AWS_MANAGEDBLOCKCHAIN_API NetworkFabricConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API NetworkFabricConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The edition of Amazon Managed Blockchain that the network uses. For more
     * information, see <a
     * href="http://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline const Edition& GetEdition() const{ return m_edition; }

    /**
     * <p>The edition of Amazon Managed Blockchain that the network uses. For more
     * information, see <a
     * href="http://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }

    /**
     * <p>The edition of Amazon Managed Blockchain that the network uses. For more
     * information, see <a
     * href="http://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline void SetEdition(const Edition& value) { m_editionHasBeenSet = true; m_edition = value; }

    /**
     * <p>The edition of Amazon Managed Blockchain that the network uses. For more
     * information, see <a
     * href="http://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline void SetEdition(Edition&& value) { m_editionHasBeenSet = true; m_edition = std::move(value); }

    /**
     * <p>The edition of Amazon Managed Blockchain that the network uses. For more
     * information, see <a
     * href="http://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline NetworkFabricConfiguration& WithEdition(const Edition& value) { SetEdition(value); return *this;}

    /**
     * <p>The edition of Amazon Managed Blockchain that the network uses. For more
     * information, see <a
     * href="http://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline NetworkFabricConfiguration& WithEdition(Edition&& value) { SetEdition(std::move(value)); return *this;}

  private:

    Edition m_edition;
    bool m_editionHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
