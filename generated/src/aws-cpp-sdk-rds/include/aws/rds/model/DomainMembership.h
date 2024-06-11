﻿/**
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
    AWS_RDS_API DomainMembership();
    AWS_RDS_API DomainMembership(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DomainMembership& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of the Active Directory Domain.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline DomainMembership& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline DomainMembership& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline DomainMembership& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Active Directory Domain membership for the DB instance or
     * cluster. Values include <code>joined</code>, <code>pending-join</code>,
     * <code>failed</code>, and so on.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline DomainMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DomainMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DomainMembership& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name (FQDN) of the Active Directory Domain.</p>
     */
    inline const Aws::String& GetFQDN() const{ return m_fQDN; }
    inline bool FQDNHasBeenSet() const { return m_fQDNHasBeenSet; }
    inline void SetFQDN(const Aws::String& value) { m_fQDNHasBeenSet = true; m_fQDN = value; }
    inline void SetFQDN(Aws::String&& value) { m_fQDNHasBeenSet = true; m_fQDN = std::move(value); }
    inline void SetFQDN(const char* value) { m_fQDNHasBeenSet = true; m_fQDN.assign(value); }
    inline DomainMembership& WithFQDN(const Aws::String& value) { SetFQDN(value); return *this;}
    inline DomainMembership& WithFQDN(Aws::String&& value) { SetFQDN(std::move(value)); return *this;}
    inline DomainMembership& WithFQDN(const char* value) { SetFQDN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role used when making API calls to the Directory
     * Service.</p>
     */
    inline const Aws::String& GetIAMRoleName() const{ return m_iAMRoleName; }
    inline bool IAMRoleNameHasBeenSet() const { return m_iAMRoleNameHasBeenSet; }
    inline void SetIAMRoleName(const Aws::String& value) { m_iAMRoleNameHasBeenSet = true; m_iAMRoleName = value; }
    inline void SetIAMRoleName(Aws::String&& value) { m_iAMRoleNameHasBeenSet = true; m_iAMRoleName = std::move(value); }
    inline void SetIAMRoleName(const char* value) { m_iAMRoleNameHasBeenSet = true; m_iAMRoleName.assign(value); }
    inline DomainMembership& WithIAMRoleName(const Aws::String& value) { SetIAMRoleName(value); return *this;}
    inline DomainMembership& WithIAMRoleName(Aws::String&& value) { SetIAMRoleName(std::move(value)); return *this;}
    inline DomainMembership& WithIAMRoleName(const char* value) { SetIAMRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory organizational unit for the DB instance or cluster.</p>
     */
    inline const Aws::String& GetOU() const{ return m_oU; }
    inline bool OUHasBeenSet() const { return m_oUHasBeenSet; }
    inline void SetOU(const Aws::String& value) { m_oUHasBeenSet = true; m_oU = value; }
    inline void SetOU(Aws::String&& value) { m_oUHasBeenSet = true; m_oU = std::move(value); }
    inline void SetOU(const char* value) { m_oUHasBeenSet = true; m_oU.assign(value); }
    inline DomainMembership& WithOU(const Aws::String& value) { SetOU(value); return *this;}
    inline DomainMembership& WithOU(Aws::String&& value) { SetOU(std::move(value)); return *this;}
    inline DomainMembership& WithOU(const char* value) { SetOU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the Secrets Manager secret with the credentials for the user
     * that's a member of the domain.</p>
     */
    inline const Aws::String& GetAuthSecretArn() const{ return m_authSecretArn; }
    inline bool AuthSecretArnHasBeenSet() const { return m_authSecretArnHasBeenSet; }
    inline void SetAuthSecretArn(const Aws::String& value) { m_authSecretArnHasBeenSet = true; m_authSecretArn = value; }
    inline void SetAuthSecretArn(Aws::String&& value) { m_authSecretArnHasBeenSet = true; m_authSecretArn = std::move(value); }
    inline void SetAuthSecretArn(const char* value) { m_authSecretArnHasBeenSet = true; m_authSecretArn.assign(value); }
    inline DomainMembership& WithAuthSecretArn(const Aws::String& value) { SetAuthSecretArn(value); return *this;}
    inline DomainMembership& WithAuthSecretArn(Aws::String&& value) { SetAuthSecretArn(std::move(value)); return *this;}
    inline DomainMembership& WithAuthSecretArn(const char* value) { SetAuthSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 DNS IP addresses of the primary and secondary Active Directory
     * domain controllers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIps() const{ return m_dnsIps; }
    inline bool DnsIpsHasBeenSet() const { return m_dnsIpsHasBeenSet; }
    inline void SetDnsIps(const Aws::Vector<Aws::String>& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = value; }
    inline void SetDnsIps(Aws::Vector<Aws::String>&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = std::move(value); }
    inline DomainMembership& WithDnsIps(const Aws::Vector<Aws::String>& value) { SetDnsIps(value); return *this;}
    inline DomainMembership& WithDnsIps(Aws::Vector<Aws::String>&& value) { SetDnsIps(std::move(value)); return *this;}
    inline DomainMembership& AddDnsIps(const Aws::String& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }
    inline DomainMembership& AddDnsIps(Aws::String&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(std::move(value)); return *this; }
    inline DomainMembership& AddDnsIps(const char* value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }
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
