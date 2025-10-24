﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/model/ResourceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace odb
{
namespace Model
{

  /**
   * <p>A peering connection between an ODB network and either another ODB network or
   * a customer-owned VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/OdbPeeringConnection">AWS
   * API Reference</a></p>
   */
  class OdbPeeringConnection
  {
  public:
    AWS_ODB_API OdbPeeringConnection() = default;
    AWS_ODB_API OdbPeeringConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API OdbPeeringConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the ODB peering connection. A sample ID is
     * <code>odbpcx-abcdefgh12345678</code>.</p>
     */
    inline const Aws::String& GetOdbPeeringConnectionId() const { return m_odbPeeringConnectionId; }
    inline bool OdbPeeringConnectionIdHasBeenSet() const { return m_odbPeeringConnectionIdHasBeenSet; }
    template<typename OdbPeeringConnectionIdT = Aws::String>
    void SetOdbPeeringConnectionId(OdbPeeringConnectionIdT&& value) { m_odbPeeringConnectionIdHasBeenSet = true; m_odbPeeringConnectionId = std::forward<OdbPeeringConnectionIdT>(value); }
    template<typename OdbPeeringConnectionIdT = Aws::String>
    OdbPeeringConnection& WithOdbPeeringConnectionId(OdbPeeringConnectionIdT&& value) { SetOdbPeeringConnectionId(std::forward<OdbPeeringConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the ODB peering connection.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    OdbPeeringConnection& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the ODB peering connection.</p>
     */
    inline ResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline OdbPeeringConnection& WithStatus(ResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current status of the ODB peering connection.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    OdbPeeringConnection& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ODB peering connection.</p> <p>Example:
     * <code>arn:aws:odb:us-east-1:123456789012:odb-peering-connection/odbpcx-abcdefgh12345678</code>
     * </p>
     */
    inline const Aws::String& GetOdbPeeringConnectionArn() const { return m_odbPeeringConnectionArn; }
    inline bool OdbPeeringConnectionArnHasBeenSet() const { return m_odbPeeringConnectionArnHasBeenSet; }
    template<typename OdbPeeringConnectionArnT = Aws::String>
    void SetOdbPeeringConnectionArn(OdbPeeringConnectionArnT&& value) { m_odbPeeringConnectionArnHasBeenSet = true; m_odbPeeringConnectionArn = std::forward<OdbPeeringConnectionArnT>(value); }
    template<typename OdbPeeringConnectionArnT = Aws::String>
    OdbPeeringConnection& WithOdbPeeringConnectionArn(OdbPeeringConnectionArnT&& value) { SetOdbPeeringConnectionArn(std::forward<OdbPeeringConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ODB network that initiated the peering
     * connection.</p>
     */
    inline const Aws::String& GetOdbNetworkArn() const { return m_odbNetworkArn; }
    inline bool OdbNetworkArnHasBeenSet() const { return m_odbNetworkArnHasBeenSet; }
    template<typename OdbNetworkArnT = Aws::String>
    void SetOdbNetworkArn(OdbNetworkArnT&& value) { m_odbNetworkArnHasBeenSet = true; m_odbNetworkArn = std::forward<OdbNetworkArnT>(value); }
    template<typename OdbNetworkArnT = Aws::String>
    OdbPeeringConnection& WithOdbNetworkArn(OdbNetworkArnT&& value) { SetOdbNetworkArn(std::forward<OdbNetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the peer network.</p>
     */
    inline const Aws::String& GetPeerNetworkArn() const { return m_peerNetworkArn; }
    inline bool PeerNetworkArnHasBeenSet() const { return m_peerNetworkArnHasBeenSet; }
    template<typename PeerNetworkArnT = Aws::String>
    void SetPeerNetworkArn(PeerNetworkArnT&& value) { m_peerNetworkArnHasBeenSet = true; m_peerNetworkArn = std::forward<PeerNetworkArnT>(value); }
    template<typename PeerNetworkArnT = Aws::String>
    OdbPeeringConnection& WithPeerNetworkArn(PeerNetworkArnT&& value) { SetPeerNetworkArn(std::forward<PeerNetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the ODB peering connection.</p> <p>Valid Values: <code>ODB-VPC |
     * ODB-ODB</code> </p>
     */
    inline const Aws::String& GetOdbPeeringConnectionType() const { return m_odbPeeringConnectionType; }
    inline bool OdbPeeringConnectionTypeHasBeenSet() const { return m_odbPeeringConnectionTypeHasBeenSet; }
    template<typename OdbPeeringConnectionTypeT = Aws::String>
    void SetOdbPeeringConnectionType(OdbPeeringConnectionTypeT&& value) { m_odbPeeringConnectionTypeHasBeenSet = true; m_odbPeeringConnectionType = std::forward<OdbPeeringConnectionTypeT>(value); }
    template<typename OdbPeeringConnectionTypeT = Aws::String>
    OdbPeeringConnection& WithOdbPeeringConnectionType(OdbPeeringConnectionTypeT&& value) { SetOdbPeeringConnectionType(std::forward<OdbPeeringConnectionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR blocks associated with the peering connection. These CIDR blocks
     * define the IP address ranges that can communicate through the peering
     * connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPeerNetworkCidrs() const { return m_peerNetworkCidrs; }
    inline bool PeerNetworkCidrsHasBeenSet() const { return m_peerNetworkCidrsHasBeenSet; }
    template<typename PeerNetworkCidrsT = Aws::Vector<Aws::String>>
    void SetPeerNetworkCidrs(PeerNetworkCidrsT&& value) { m_peerNetworkCidrsHasBeenSet = true; m_peerNetworkCidrs = std::forward<PeerNetworkCidrsT>(value); }
    template<typename PeerNetworkCidrsT = Aws::Vector<Aws::String>>
    OdbPeeringConnection& WithPeerNetworkCidrs(PeerNetworkCidrsT&& value) { SetPeerNetworkCidrs(std::forward<PeerNetworkCidrsT>(value)); return *this;}
    template<typename PeerNetworkCidrsT = Aws::String>
    OdbPeeringConnection& AddPeerNetworkCidrs(PeerNetworkCidrsT&& value) { m_peerNetworkCidrsHasBeenSet = true; m_peerNetworkCidrs.emplace_back(std::forward<PeerNetworkCidrsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when the ODB peering connection was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    OdbPeeringConnection& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage progress of the ODB peering connection creation or
     * deletion.</p>
     */
    inline double GetPercentProgress() const { return m_percentProgress; }
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
    inline void SetPercentProgress(double value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }
    inline OdbPeeringConnection& WithPercentProgress(double value) { SetPercentProgress(value); return *this;}
    ///@}
  private:

    Aws::String m_odbPeeringConnectionId;
    bool m_odbPeeringConnectionIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    ResourceStatus m_status{ResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_odbPeeringConnectionArn;
    bool m_odbPeeringConnectionArnHasBeenSet = false;

    Aws::String m_odbNetworkArn;
    bool m_odbNetworkArnHasBeenSet = false;

    Aws::String m_peerNetworkArn;
    bool m_peerNetworkArnHasBeenSet = false;

    Aws::String m_odbPeeringConnectionType;
    bool m_odbPeeringConnectionTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_peerNetworkCidrs;
    bool m_peerNetworkCidrsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    double m_percentProgress{0.0};
    bool m_percentProgressHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
