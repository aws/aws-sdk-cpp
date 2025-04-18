﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/model/DnsRecord.h>
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
   * <p>A complex type that contains information about changes to the Route 53 DNS
   * records that Cloud Map creates when you register an instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DnsConfigChange">AWS
   * API Reference</a></p>
   */
  class DnsConfigChange
  {
  public:
    AWS_SERVICEDISCOVERY_API DnsConfigChange() = default;
    AWS_SERVICEDISCOVERY_API DnsConfigChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API DnsConfigChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each Route 53
     * record that you want Cloud Map to create when you register an instance.</p>
     */
    inline const Aws::Vector<DnsRecord>& GetDnsRecords() const { return m_dnsRecords; }
    inline bool DnsRecordsHasBeenSet() const { return m_dnsRecordsHasBeenSet; }
    template<typename DnsRecordsT = Aws::Vector<DnsRecord>>
    void SetDnsRecords(DnsRecordsT&& value) { m_dnsRecordsHasBeenSet = true; m_dnsRecords = std::forward<DnsRecordsT>(value); }
    template<typename DnsRecordsT = Aws::Vector<DnsRecord>>
    DnsConfigChange& WithDnsRecords(DnsRecordsT&& value) { SetDnsRecords(std::forward<DnsRecordsT>(value)); return *this;}
    template<typename DnsRecordsT = DnsRecord>
    DnsConfigChange& AddDnsRecords(DnsRecordsT&& value) { m_dnsRecordsHasBeenSet = true; m_dnsRecords.emplace_back(std::forward<DnsRecordsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DnsRecord> m_dnsRecords;
    bool m_dnsRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
