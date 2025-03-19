/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Peering.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a transit gateway peering attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/TransitGatewayPeering">AWS
   * API Reference</a></p>
   */
  class TransitGatewayPeering
  {
  public:
    AWS_NETWORKMANAGER_API TransitGatewayPeering() = default;
    AWS_NETWORKMANAGER_API TransitGatewayPeering(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API TransitGatewayPeering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes a transit gateway peer connection.</p>
     */
    inline const Peering& GetPeering() const { return m_peering; }
    inline bool PeeringHasBeenSet() const { return m_peeringHasBeenSet; }
    template<typename PeeringT = Peering>
    void SetPeering(PeeringT&& value) { m_peeringHasBeenSet = true; m_peering = std::forward<PeeringT>(value); }
    template<typename PeeringT = Peering>
    TransitGatewayPeering& WithPeering(PeeringT&& value) { SetPeering(std::forward<PeeringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayArn() const { return m_transitGatewayArn; }
    inline bool TransitGatewayArnHasBeenSet() const { return m_transitGatewayArnHasBeenSet; }
    template<typename TransitGatewayArnT = Aws::String>
    void SetTransitGatewayArn(TransitGatewayArnT&& value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn = std::forward<TransitGatewayArnT>(value); }
    template<typename TransitGatewayArnT = Aws::String>
    TransitGatewayPeering& WithTransitGatewayArn(TransitGatewayArnT&& value) { SetTransitGatewayArn(std::forward<TransitGatewayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway peering attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayPeeringAttachmentId() const { return m_transitGatewayPeeringAttachmentId; }
    inline bool TransitGatewayPeeringAttachmentIdHasBeenSet() const { return m_transitGatewayPeeringAttachmentIdHasBeenSet; }
    template<typename TransitGatewayPeeringAttachmentIdT = Aws::String>
    void SetTransitGatewayPeeringAttachmentId(TransitGatewayPeeringAttachmentIdT&& value) { m_transitGatewayPeeringAttachmentIdHasBeenSet = true; m_transitGatewayPeeringAttachmentId = std::forward<TransitGatewayPeeringAttachmentIdT>(value); }
    template<typename TransitGatewayPeeringAttachmentIdT = Aws::String>
    TransitGatewayPeering& WithTransitGatewayPeeringAttachmentId(TransitGatewayPeeringAttachmentIdT&& value) { SetTransitGatewayPeeringAttachmentId(std::forward<TransitGatewayPeeringAttachmentIdT>(value)); return *this;}
    ///@}
  private:

    Peering m_peering;
    bool m_peeringHasBeenSet = false;

    Aws::String m_transitGatewayArn;
    bool m_transitGatewayArnHasBeenSet = false;

    Aws::String m_transitGatewayPeeringAttachmentId;
    bool m_transitGatewayPeeringAttachmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
