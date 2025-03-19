/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An Active Directory Domain membership record associated with the DB instance
   * or cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DomainMembership">AWS
   * API Reference</a></p>
   */
  class DomainMembership
  {
  public:
    AWS_RDS_API DomainMembership() = default;
    AWS_RDS_API DomainMembership(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DomainMembership& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of the Active Directory Domain.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    DomainMembership& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Active Directory Domain membership for the DB instance or
     * cluster. Values include <code>joined</code>, <code>pending-join</code>,
     * <code>failed</code>, and so on.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DomainMembership& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name (FQDN) of the Active Directory Domain.</p>
     */
    inline const Aws::String& GetFQDN() const { return m_fQDN; }
    inline bool FQDNHasBeenSet() const { return m_fQDNHasBeenSet; }
    template<typename FQDNT = Aws::String>
    void SetFQDN(FQDNT&& value) { m_fQDNHasBeenSet = true; m_fQDN = std::forward<FQDNT>(value); }
    template<typename FQDNT = Aws::String>
    DomainMembership& WithFQDN(FQDNT&& value) { SetFQDN(std::forward<FQDNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role used when making API calls to the Directory
     * Service.</p>
     */
    inline const Aws::String& GetIAMRoleName() const { return m_iAMRoleName; }
    inline bool IAMRoleNameHasBeenSet() const { return m_iAMRoleNameHasBeenSet; }
    template<typename IAMRoleNameT = Aws::String>
    void SetIAMRoleName(IAMRoleNameT&& value) { m_iAMRoleNameHasBeenSet = true; m_iAMRoleName = std::forward<IAMRoleNameT>(value); }
    template<typename IAMRoleNameT = Aws::String>
    DomainMembership& WithIAMRoleName(IAMRoleNameT&& value) { SetIAMRoleName(std::forward<IAMRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory organizational unit for the DB instance or cluster.</p>
     */
    inline const Aws::String& GetOU() const { return m_oU; }
    inline bool OUHasBeenSet() const { return m_oUHasBeenSet; }
    template<typename OUT = Aws::String>
    void SetOU(OUT&& value) { m_oUHasBeenSet = true; m_oU = std::forward<OUT>(value); }
    template<typename OUT = Aws::String>
    DomainMembership& WithOU(OUT&& value) { SetOU(std::forward<OUT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the Secrets Manager secret with the credentials for the user
     * that's a member of the domain.</p>
     */
    inline const Aws::String& GetAuthSecretArn() const { return m_authSecretArn; }
    inline bool AuthSecretArnHasBeenSet() const { return m_authSecretArnHasBeenSet; }
    template<typename AuthSecretArnT = Aws::String>
    void SetAuthSecretArn(AuthSecretArnT&& value) { m_authSecretArnHasBeenSet = true; m_authSecretArn = std::forward<AuthSecretArnT>(value); }
    template<typename AuthSecretArnT = Aws::String>
    DomainMembership& WithAuthSecretArn(AuthSecretArnT&& value) { SetAuthSecretArn(std::forward<AuthSecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 DNS IP addresses of the primary and secondary Active Directory
     * domain controllers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIps() const { return m_dnsIps; }
    inline bool DnsIpsHasBeenSet() const { return m_dnsIpsHasBeenSet; }
    template<typename DnsIpsT = Aws::Vector<Aws::String>>
    void SetDnsIps(DnsIpsT&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = std::forward<DnsIpsT>(value); }
    template<typename DnsIpsT = Aws::Vector<Aws::String>>
    DomainMembership& WithDnsIps(DnsIpsT&& value) { SetDnsIps(std::forward<DnsIpsT>(value)); return *this;}
    template<typename DnsIpsT = Aws::String>
    DomainMembership& AddDnsIps(DnsIpsT&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.emplace_back(std::forward<DnsIpsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_fQDN;
    bool m_fQDNHasBeenSet = false;

    Aws::String m_iAMRoleName;
    bool m_iAMRoleNameHasBeenSet = false;

    Aws::String m_oU;
    bool m_oUHasBeenSet = false;

    Aws::String m_authSecretArn;
    bool m_authSecretArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIps;
    bool m_dnsIpsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
