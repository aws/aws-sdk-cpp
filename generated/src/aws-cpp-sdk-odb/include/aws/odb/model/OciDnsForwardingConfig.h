/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
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
namespace odb
{
namespace Model
{

  /**
   * <p>DNS configuration to forward DNS resolver endpoints to your OCI Private
   * Zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/OciDnsForwardingConfig">AWS
   * API Reference</a></p>
   */
  class OciDnsForwardingConfig
  {
  public:
    AWS_ODB_API OciDnsForwardingConfig() = default;
    AWS_ODB_API OciDnsForwardingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API OciDnsForwardingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Domain name to which DNS resolver forwards to.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    OciDnsForwardingConfig& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>OCI DNS listener IP for custom DNS setup.</p>
     */
    inline const Aws::String& GetOciDnsListenerIp() const { return m_ociDnsListenerIp; }
    inline bool OciDnsListenerIpHasBeenSet() const { return m_ociDnsListenerIpHasBeenSet; }
    template<typename OciDnsListenerIpT = Aws::String>
    void SetOciDnsListenerIp(OciDnsListenerIpT&& value) { m_ociDnsListenerIpHasBeenSet = true; m_ociDnsListenerIp = std::forward<OciDnsListenerIpT>(value); }
    template<typename OciDnsListenerIpT = Aws::String>
    OciDnsForwardingConfig& WithOciDnsListenerIp(OciDnsListenerIpT&& value) { SetOciDnsListenerIp(std::forward<OciDnsListenerIpT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_ociDnsListenerIp;
    bool m_ociDnsListenerIpHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
