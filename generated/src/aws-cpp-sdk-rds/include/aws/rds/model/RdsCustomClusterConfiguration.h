/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ReplicaMode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Reserved for future use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RdsCustomClusterConfiguration">AWS
   * API Reference</a></p>
   */
  class RdsCustomClusterConfiguration
  {
  public:
    AWS_RDS_API RdsCustomClusterConfiguration();
    AWS_RDS_API RdsCustomClusterConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API RdsCustomClusterConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetInterconnectSubnetId() const{ return m_interconnectSubnetId; }
    inline bool InterconnectSubnetIdHasBeenSet() const { return m_interconnectSubnetIdHasBeenSet; }
    inline void SetInterconnectSubnetId(const Aws::String& value) { m_interconnectSubnetIdHasBeenSet = true; m_interconnectSubnetId = value; }
    inline void SetInterconnectSubnetId(Aws::String&& value) { m_interconnectSubnetIdHasBeenSet = true; m_interconnectSubnetId = std::move(value); }
    inline void SetInterconnectSubnetId(const char* value) { m_interconnectSubnetIdHasBeenSet = true; m_interconnectSubnetId.assign(value); }
    inline RdsCustomClusterConfiguration& WithInterconnectSubnetId(const Aws::String& value) { SetInterconnectSubnetId(value); return *this;}
    inline RdsCustomClusterConfiguration& WithInterconnectSubnetId(Aws::String&& value) { SetInterconnectSubnetId(std::move(value)); return *this;}
    inline RdsCustomClusterConfiguration& WithInterconnectSubnetId(const char* value) { SetInterconnectSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetTransitGatewayMulticastDomainId() const{ return m_transitGatewayMulticastDomainId; }
    inline bool TransitGatewayMulticastDomainIdHasBeenSet() const { return m_transitGatewayMulticastDomainIdHasBeenSet; }
    inline void SetTransitGatewayMulticastDomainId(const Aws::String& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = value; }
    inline void SetTransitGatewayMulticastDomainId(Aws::String&& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = std::move(value); }
    inline void SetTransitGatewayMulticastDomainId(const char* value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId.assign(value); }
    inline RdsCustomClusterConfiguration& WithTransitGatewayMulticastDomainId(const Aws::String& value) { SetTransitGatewayMulticastDomainId(value); return *this;}
    inline RdsCustomClusterConfiguration& WithTransitGatewayMulticastDomainId(Aws::String&& value) { SetTransitGatewayMulticastDomainId(std::move(value)); return *this;}
    inline RdsCustomClusterConfiguration& WithTransitGatewayMulticastDomainId(const char* value) { SetTransitGatewayMulticastDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const ReplicaMode& GetReplicaMode() const{ return m_replicaMode; }
    inline bool ReplicaModeHasBeenSet() const { return m_replicaModeHasBeenSet; }
    inline void SetReplicaMode(const ReplicaMode& value) { m_replicaModeHasBeenSet = true; m_replicaMode = value; }
    inline void SetReplicaMode(ReplicaMode&& value) { m_replicaModeHasBeenSet = true; m_replicaMode = std::move(value); }
    inline RdsCustomClusterConfiguration& WithReplicaMode(const ReplicaMode& value) { SetReplicaMode(value); return *this;}
    inline RdsCustomClusterConfiguration& WithReplicaMode(ReplicaMode&& value) { SetReplicaMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_interconnectSubnetId;
    bool m_interconnectSubnetIdHasBeenSet = false;

    Aws::String m_transitGatewayMulticastDomainId;
    bool m_transitGatewayMulticastDomainIdHasBeenSet = false;

    ReplicaMode m_replicaMode;
    bool m_replicaModeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
