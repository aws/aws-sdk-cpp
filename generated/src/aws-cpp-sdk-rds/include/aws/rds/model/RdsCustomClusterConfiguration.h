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
    AWS_RDS_API RdsCustomClusterConfiguration() = default;
    AWS_RDS_API RdsCustomClusterConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API RdsCustomClusterConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetInterconnectSubnetId() const { return m_interconnectSubnetId; }
    inline bool InterconnectSubnetIdHasBeenSet() const { return m_interconnectSubnetIdHasBeenSet; }
    template<typename InterconnectSubnetIdT = Aws::String>
    void SetInterconnectSubnetId(InterconnectSubnetIdT&& value) { m_interconnectSubnetIdHasBeenSet = true; m_interconnectSubnetId = std::forward<InterconnectSubnetIdT>(value); }
    template<typename InterconnectSubnetIdT = Aws::String>
    RdsCustomClusterConfiguration& WithInterconnectSubnetId(InterconnectSubnetIdT&& value) { SetInterconnectSubnetId(std::forward<InterconnectSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetTransitGatewayMulticastDomainId() const { return m_transitGatewayMulticastDomainId; }
    inline bool TransitGatewayMulticastDomainIdHasBeenSet() const { return m_transitGatewayMulticastDomainIdHasBeenSet; }
    template<typename TransitGatewayMulticastDomainIdT = Aws::String>
    void SetTransitGatewayMulticastDomainId(TransitGatewayMulticastDomainIdT&& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = std::forward<TransitGatewayMulticastDomainIdT>(value); }
    template<typename TransitGatewayMulticastDomainIdT = Aws::String>
    RdsCustomClusterConfiguration& WithTransitGatewayMulticastDomainId(TransitGatewayMulticastDomainIdT&& value) { SetTransitGatewayMulticastDomainId(std::forward<TransitGatewayMulticastDomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline ReplicaMode GetReplicaMode() const { return m_replicaMode; }
    inline bool ReplicaModeHasBeenSet() const { return m_replicaModeHasBeenSet; }
    inline void SetReplicaMode(ReplicaMode value) { m_replicaModeHasBeenSet = true; m_replicaMode = value; }
    inline RdsCustomClusterConfiguration& WithReplicaMode(ReplicaMode value) { SetReplicaMode(value); return *this;}
    ///@}
  private:

    Aws::String m_interconnectSubnetId;
    bool m_interconnectSubnetIdHasBeenSet = false;

    Aws::String m_transitGatewayMulticastDomainId;
    bool m_transitGatewayMulticastDomainIdHasBeenSet = false;

    ReplicaMode m_replicaMode{ReplicaMode::NOT_SET};
    bool m_replicaModeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
