/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/DnsProperties.h>
#include <aws/servicediscovery/model/HttpProperties.h>
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
   * <p>A complex type that contains information that's specific to the namespace
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/NamespaceProperties">AWS
   * API Reference</a></p>
   */
  class NamespaceProperties
  {
  public:
    AWS_SERVICEDISCOVERY_API NamespaceProperties() = default;
    AWS_SERVICEDISCOVERY_API NamespaceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API NamespaceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A complex type that contains the ID for the Route 53 hosted zone that Cloud
     * Map creates when you create a namespace.</p>
     */
    inline const DnsProperties& GetDnsProperties() const { return m_dnsProperties; }
    inline bool DnsPropertiesHasBeenSet() const { return m_dnsPropertiesHasBeenSet; }
    template<typename DnsPropertiesT = DnsProperties>
    void SetDnsProperties(DnsPropertiesT&& value) { m_dnsPropertiesHasBeenSet = true; m_dnsProperties = std::forward<DnsPropertiesT>(value); }
    template<typename DnsPropertiesT = DnsProperties>
    NamespaceProperties& WithDnsProperties(DnsPropertiesT&& value) { SetDnsProperties(std::forward<DnsPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains the name of an HTTP namespace.</p>
     */
    inline const HttpProperties& GetHttpProperties() const { return m_httpProperties; }
    inline bool HttpPropertiesHasBeenSet() const { return m_httpPropertiesHasBeenSet; }
    template<typename HttpPropertiesT = HttpProperties>
    void SetHttpProperties(HttpPropertiesT&& value) { m_httpPropertiesHasBeenSet = true; m_httpProperties = std::forward<HttpPropertiesT>(value); }
    template<typename HttpPropertiesT = HttpProperties>
    NamespaceProperties& WithHttpProperties(HttpPropertiesT&& value) { SetHttpProperties(std::forward<HttpPropertiesT>(value)); return *this;}
    ///@}
  private:

    DnsProperties m_dnsProperties;
    bool m_dnsPropertiesHasBeenSet = false;

    HttpProperties m_httpProperties;
    bool m_httpPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
