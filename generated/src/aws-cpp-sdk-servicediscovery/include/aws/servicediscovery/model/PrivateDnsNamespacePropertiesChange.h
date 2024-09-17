/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/PrivateDnsPropertiesMutableChange.h>
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
   * <p>Updated properties for the private DNS namespace.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/PrivateDnsNamespacePropertiesChange">AWS
   * API Reference</a></p>
   */
  class PrivateDnsNamespacePropertiesChange
  {
  public:
    AWS_SERVICEDISCOVERY_API PrivateDnsNamespacePropertiesChange();
    AWS_SERVICEDISCOVERY_API PrivateDnsNamespacePropertiesChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API PrivateDnsNamespacePropertiesChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Updated DNS properties for the private DNS namespace.</p>
     */
    inline const PrivateDnsPropertiesMutableChange& GetDnsProperties() const{ return m_dnsProperties; }
    inline bool DnsPropertiesHasBeenSet() const { return m_dnsPropertiesHasBeenSet; }
    inline void SetDnsProperties(const PrivateDnsPropertiesMutableChange& value) { m_dnsPropertiesHasBeenSet = true; m_dnsProperties = value; }
    inline void SetDnsProperties(PrivateDnsPropertiesMutableChange&& value) { m_dnsPropertiesHasBeenSet = true; m_dnsProperties = std::move(value); }
    inline PrivateDnsNamespacePropertiesChange& WithDnsProperties(const PrivateDnsPropertiesMutableChange& value) { SetDnsProperties(value); return *this;}
    inline PrivateDnsNamespacePropertiesChange& WithDnsProperties(PrivateDnsPropertiesMutableChange&& value) { SetDnsProperties(std::move(value)); return *this;}
    ///@}
  private:

    PrivateDnsPropertiesMutableChange m_dnsProperties;
    bool m_dnsPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
