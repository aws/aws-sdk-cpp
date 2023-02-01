/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/MemberFabricAttributes.h>
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
   * <p>Attributes relevant to a member for the blockchain framework that the Managed
   * Blockchain network uses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/MemberFrameworkAttributes">AWS
   * API Reference</a></p>
   */
  class MemberFrameworkAttributes
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API MemberFrameworkAttributes();
    AWS_MANAGEDBLOCKCHAIN_API MemberFrameworkAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API MemberFrameworkAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Attributes of Hyperledger Fabric relevant to a member on a Managed Blockchain
     * network that uses Hyperledger Fabric.</p>
     */
    inline const MemberFabricAttributes& GetFabric() const{ return m_fabric; }

    /**
     * <p>Attributes of Hyperledger Fabric relevant to a member on a Managed Blockchain
     * network that uses Hyperledger Fabric.</p>
     */
    inline bool FabricHasBeenSet() const { return m_fabricHasBeenSet; }

    /**
     * <p>Attributes of Hyperledger Fabric relevant to a member on a Managed Blockchain
     * network that uses Hyperledger Fabric.</p>
     */
    inline void SetFabric(const MemberFabricAttributes& value) { m_fabricHasBeenSet = true; m_fabric = value; }

    /**
     * <p>Attributes of Hyperledger Fabric relevant to a member on a Managed Blockchain
     * network that uses Hyperledger Fabric.</p>
     */
    inline void SetFabric(MemberFabricAttributes&& value) { m_fabricHasBeenSet = true; m_fabric = std::move(value); }

    /**
     * <p>Attributes of Hyperledger Fabric relevant to a member on a Managed Blockchain
     * network that uses Hyperledger Fabric.</p>
     */
    inline MemberFrameworkAttributes& WithFabric(const MemberFabricAttributes& value) { SetFabric(value); return *this;}

    /**
     * <p>Attributes of Hyperledger Fabric relevant to a member on a Managed Blockchain
     * network that uses Hyperledger Fabric.</p>
     */
    inline MemberFrameworkAttributes& WithFabric(MemberFabricAttributes&& value) { SetFabric(std::move(value)); return *this;}

  private:

    MemberFabricAttributes m_fabric;
    bool m_fabricHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
