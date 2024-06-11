/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/IpAddressStatus.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>In the response to a <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
   * request, information about the IP addresses that the Resolver endpoint uses for
   * DNS queries.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/IpAddressResponse">AWS
   * API Reference</a></p>
   */
  class IpAddressResponse
  {
  public:
    AWS_ROUTE53RESOLVER_API IpAddressResponse();
    AWS_ROUTE53RESOLVER_API IpAddressResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API IpAddressResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of one IP address.</p>
     */
    inline const Aws::String& GetIpId() const{ return m_ipId; }
    inline bool IpIdHasBeenSet() const { return m_ipIdHasBeenSet; }
    inline void SetIpId(const Aws::String& value) { m_ipIdHasBeenSet = true; m_ipId = value; }
    inline void SetIpId(Aws::String&& value) { m_ipIdHasBeenSet = true; m_ipId = std::move(value); }
    inline void SetIpId(const char* value) { m_ipIdHasBeenSet = true; m_ipId.assign(value); }
    inline IpAddressResponse& WithIpId(const Aws::String& value) { SetIpId(value); return *this;}
    inline IpAddressResponse& WithIpId(Aws::String&& value) { SetIpId(std::move(value)); return *this;}
    inline IpAddressResponse& WithIpId(const char* value) { SetIpId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of one subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline IpAddressResponse& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline IpAddressResponse& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline IpAddressResponse& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One IPv4 address that the Resolver endpoint uses for DNS queries.</p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }
    inline IpAddressResponse& WithIp(const Aws::String& value) { SetIp(value); return *this;}
    inline IpAddressResponse& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}
    inline IpAddressResponse& WithIp(const char* value) { SetIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> One IPv6 address that the Resolver endpoint uses for DNS queries. </p>
     */
    inline const Aws::String& GetIpv6() const{ return m_ipv6; }
    inline bool Ipv6HasBeenSet() const { return m_ipv6HasBeenSet; }
    inline void SetIpv6(const Aws::String& value) { m_ipv6HasBeenSet = true; m_ipv6 = value; }
    inline void SetIpv6(Aws::String&& value) { m_ipv6HasBeenSet = true; m_ipv6 = std::move(value); }
    inline void SetIpv6(const char* value) { m_ipv6HasBeenSet = true; m_ipv6.assign(value); }
    inline IpAddressResponse& WithIpv6(const Aws::String& value) { SetIpv6(value); return *this;}
    inline IpAddressResponse& WithIpv6(Aws::String&& value) { SetIpv6(std::move(value)); return *this;}
    inline IpAddressResponse& WithIpv6(const char* value) { SetIpv6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status code that gives the current status of the request.</p>
     */
    inline const IpAddressStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const IpAddressStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(IpAddressStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline IpAddressResponse& WithStatus(const IpAddressStatus& value) { SetStatus(value); return *this;}
    inline IpAddressResponse& WithStatus(IpAddressStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that provides additional information about the status of the
     * request.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline IpAddressResponse& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline IpAddressResponse& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline IpAddressResponse& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the IP address was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }
    inline IpAddressResponse& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}
    inline IpAddressResponse& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}
    inline IpAddressResponse& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the IP address was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetModificationTime() const{ return m_modificationTime; }
    inline bool ModificationTimeHasBeenSet() const { return m_modificationTimeHasBeenSet; }
    inline void SetModificationTime(const Aws::String& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = value; }
    inline void SetModificationTime(Aws::String&& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = std::move(value); }
    inline void SetModificationTime(const char* value) { m_modificationTimeHasBeenSet = true; m_modificationTime.assign(value); }
    inline IpAddressResponse& WithModificationTime(const Aws::String& value) { SetModificationTime(value); return *this;}
    inline IpAddressResponse& WithModificationTime(Aws::String&& value) { SetModificationTime(std::move(value)); return *this;}
    inline IpAddressResponse& WithModificationTime(const char* value) { SetModificationTime(value); return *this;}
    ///@}
  private:

    Aws::String m_ipId;
    bool m_ipIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;

    Aws::String m_ipv6;
    bool m_ipv6HasBeenSet = false;

    IpAddressStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_modificationTime;
    bool m_modificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
