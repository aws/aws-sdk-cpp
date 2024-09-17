/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/SOA.h>
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
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that contains the ID for the Route 53 hosted zone that Cloud
   * Map creates when you create a namespace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DnsProperties">AWS
   * API Reference</a></p>
   */
  class DnsProperties
  {
  public:
    AWS_SERVICEDISCOVERY_API DnsProperties();
    AWS_SERVICEDISCOVERY_API DnsProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API DnsProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for the Route 53 hosted zone that Cloud Map creates when you create a
     * namespace.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }
    inline DnsProperties& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}
    inline DnsProperties& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}
    inline DnsProperties& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start of Authority (SOA) record for the hosted zone.</p>
     */
    inline const SOA& GetSOA() const{ return m_sOA; }
    inline bool SOAHasBeenSet() const { return m_sOAHasBeenSet; }
    inline void SetSOA(const SOA& value) { m_sOAHasBeenSet = true; m_sOA = value; }
    inline void SetSOA(SOA&& value) { m_sOAHasBeenSet = true; m_sOA = std::move(value); }
    inline DnsProperties& WithSOA(const SOA& value) { SetSOA(value); return *this;}
    inline DnsProperties& WithSOA(SOA&& value) { SetSOA(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    SOA m_sOA;
    bool m_sOAHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
