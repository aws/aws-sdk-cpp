/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Attributes of Hyperledger Fabric for a network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NetworkFabricAttributes">AWS
   * API Reference</a></p>
   */
  class NetworkFabricAttributes
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API NetworkFabricAttributes() = default;
    AWS_MANAGEDBLOCKCHAIN_API NetworkFabricAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API NetworkFabricAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint of the ordering service for the network.</p>
     */
    inline const Aws::String& GetOrderingServiceEndpoint() const { return m_orderingServiceEndpoint; }
    inline bool OrderingServiceEndpointHasBeenSet() const { return m_orderingServiceEndpointHasBeenSet; }
    template<typename OrderingServiceEndpointT = Aws::String>
    void SetOrderingServiceEndpoint(OrderingServiceEndpointT&& value) { m_orderingServiceEndpointHasBeenSet = true; m_orderingServiceEndpoint = std::forward<OrderingServiceEndpointT>(value); }
    template<typename OrderingServiceEndpointT = Aws::String>
    NetworkFabricAttributes& WithOrderingServiceEndpoint(OrderingServiceEndpointT&& value) { SetOrderingServiceEndpoint(std::forward<OrderingServiceEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The edition of Amazon Managed Blockchain that Hyperledger Fabric uses. For
     * more information, see <a
     * href="http://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline Edition GetEdition() const { return m_edition; }
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }
    inline void SetEdition(Edition value) { m_editionHasBeenSet = true; m_edition = value; }
    inline NetworkFabricAttributes& WithEdition(Edition value) { SetEdition(value); return *this;}
    ///@}
  private:

    Aws::String m_orderingServiceEndpoint;
    bool m_orderingServiceEndpointHasBeenSet = false;

    Edition m_edition{Edition::NOT_SET};
    bool m_editionHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
