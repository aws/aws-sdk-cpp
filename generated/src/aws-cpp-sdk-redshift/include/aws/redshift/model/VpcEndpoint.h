/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/NetworkInterface.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>The connection endpoint for connecting to an Amazon Redshift cluster through
   * the proxy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/VpcEndpoint">AWS
   * API Reference</a></p>
   */
  class VpcEndpoint
  {
  public:
    AWS_REDSHIFT_API VpcEndpoint();
    AWS_REDSHIFT_API VpcEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API VpcEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline VpcEndpoint& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline VpcEndpoint& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline VpcEndpoint& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>The VPC identifier that the endpoint is associated. </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC identifier that the endpoint is associated. </p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC identifier that the endpoint is associated. </p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC identifier that the endpoint is associated. </p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC identifier that the endpoint is associated. </p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC identifier that the endpoint is associated. </p>
     */
    inline VpcEndpoint& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC identifier that the endpoint is associated. </p>
     */
    inline VpcEndpoint& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC identifier that the endpoint is associated. </p>
     */
    inline VpcEndpoint& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>One or more network interfaces of the endpoint. Also known as an interface
     * endpoint. </p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>One or more network interfaces of the endpoint. Also known as an interface
     * endpoint. </p>
     */
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }

    /**
     * <p>One or more network interfaces of the endpoint. Also known as an interface
     * endpoint. </p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>One or more network interfaces of the endpoint. Also known as an interface
     * endpoint. </p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }

    /**
     * <p>One or more network interfaces of the endpoint. Also known as an interface
     * endpoint. </p>
     */
    inline VpcEndpoint& WithNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>One or more network interfaces of the endpoint. Also known as an interface
     * endpoint. </p>
     */
    inline VpcEndpoint& WithNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>One or more network interfaces of the endpoint. Also known as an interface
     * endpoint. </p>
     */
    inline VpcEndpoint& AddNetworkInterfaces(const NetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>One or more network interfaces of the endpoint. Also known as an interface
     * endpoint. </p>
     */
    inline VpcEndpoint& AddNetworkInterfaces(NetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
