/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>Name server includes the following elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/Nameserver">AWS
   * API Reference</a></p>
   */
  class Nameserver
  {
  public:
    AWS_ROUTE53DOMAINS_API Nameserver() = default;
    AWS_ROUTE53DOMAINS_API Nameserver(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Nameserver& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully qualified host name of the name server.</p> <p>Constraint: Maximum
     * 255 characters</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Nameserver& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Glue IP address of a name server entry. Glue IP addresses are required only
     * when the name of the name server is a subdomain of the domain. For example, if
     * your domain is example.com and the name server for the domain is ns.example.com,
     * you need to specify the IP address for ns.example.com.</p> <p>Constraints: The
     * list can contain only one IPv4 and one IPv6 address.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlueIps() const { return m_glueIps; }
    inline bool GlueIpsHasBeenSet() const { return m_glueIpsHasBeenSet; }
    template<typename GlueIpsT = Aws::Vector<Aws::String>>
    void SetGlueIps(GlueIpsT&& value) { m_glueIpsHasBeenSet = true; m_glueIps = std::forward<GlueIpsT>(value); }
    template<typename GlueIpsT = Aws::Vector<Aws::String>>
    Nameserver& WithGlueIps(GlueIpsT&& value) { SetGlueIps(std::forward<GlueIpsT>(value)); return *this;}
    template<typename GlueIpsT = Aws::String>
    Nameserver& AddGlueIps(GlueIpsT&& value) { m_glueIpsHasBeenSet = true; m_glueIps.emplace_back(std::forward<GlueIpsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_glueIps;
    bool m_glueIpsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
