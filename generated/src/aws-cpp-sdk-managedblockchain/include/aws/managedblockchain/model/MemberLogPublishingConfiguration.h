﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/MemberFabricLogPublishingConfiguration.h>
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
   * <p>Configuration properties for logging events associated with a member of a
   * Managed Blockchain network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/MemberLogPublishingConfiguration">AWS
   * API Reference</a></p>
   */
  class MemberLogPublishingConfiguration
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API MemberLogPublishingConfiguration() = default;
    AWS_MANAGEDBLOCKCHAIN_API MemberLogPublishingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API MemberLogPublishingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration properties for logging events associated with a member of a
     * Managed Blockchain network using the Hyperledger Fabric framework.</p>
     */
    inline const MemberFabricLogPublishingConfiguration& GetFabric() const { return m_fabric; }
    inline bool FabricHasBeenSet() const { return m_fabricHasBeenSet; }
    template<typename FabricT = MemberFabricLogPublishingConfiguration>
    void SetFabric(FabricT&& value) { m_fabricHasBeenSet = true; m_fabric = std::forward<FabricT>(value); }
    template<typename FabricT = MemberFabricLogPublishingConfiguration>
    MemberLogPublishingConfiguration& WithFabric(FabricT&& value) { SetFabric(std::forward<FabricT>(value)); return *this;}
    ///@}
  private:

    MemberFabricLogPublishingConfiguration m_fabric;
    bool m_fabricHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
