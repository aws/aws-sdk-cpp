/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworkscm/model/Server.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorksCM
{
namespace Model
{
  class DescribeServersResult
  {
  public:
    AWS_OPSWORKSCM_API DescribeServersResult();
    AWS_OPSWORKSCM_API DescribeServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKSCM_API DescribeServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the response to a <code>DescribeServers</code> request.</p> <p>
     * <i>For Chef Automate servers:</i> If
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> includes
     * CHEF_MAJOR_UPGRADE_AVAILABLE, you can upgrade the Chef Automate server to Chef
     * Automate 2. To be eligible for upgrade, a server running Chef Automate 1 must
     * have had at least one successful maintenance run after November 1, 2019.</p> <p>
     * <i>For Puppet servers:</i>
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> contains the
     * following two responses:</p> <ul> <li> <p> <code>PUPPET_API_CA_CERT</code>, the
     * PEM-encoded CA certificate that is used by the Puppet API over TCP port number
     * 8140. The CA certificate is also used to sign node certificates.</p> </li> <li>
     * <p> <code>PUPPET_API_CRL</code>, a certificate revocation list. The certificate
     * revocation list is for internal maintenance purposes only. For more information
     * about the Puppet certificate revocation list, see <a
     * href="https://puppet.com/docs/puppet/5.5/man/certificate_revocation_list.html">Man
     * Page: puppet certificate_revocation_list</a> in the Puppet documentation.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Server>& GetServers() const{ return m_servers; }

    /**
     * <p>Contains the response to a <code>DescribeServers</code> request.</p> <p>
     * <i>For Chef Automate servers:</i> If
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> includes
     * CHEF_MAJOR_UPGRADE_AVAILABLE, you can upgrade the Chef Automate server to Chef
     * Automate 2. To be eligible for upgrade, a server running Chef Automate 1 must
     * have had at least one successful maintenance run after November 1, 2019.</p> <p>
     * <i>For Puppet servers:</i>
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> contains the
     * following two responses:</p> <ul> <li> <p> <code>PUPPET_API_CA_CERT</code>, the
     * PEM-encoded CA certificate that is used by the Puppet API over TCP port number
     * 8140. The CA certificate is also used to sign node certificates.</p> </li> <li>
     * <p> <code>PUPPET_API_CRL</code>, a certificate revocation list. The certificate
     * revocation list is for internal maintenance purposes only. For more information
     * about the Puppet certificate revocation list, see <a
     * href="https://puppet.com/docs/puppet/5.5/man/certificate_revocation_list.html">Man
     * Page: puppet certificate_revocation_list</a> in the Puppet documentation.</p>
     * </li> </ul>
     */
    inline void SetServers(const Aws::Vector<Server>& value) { m_servers = value; }

    /**
     * <p>Contains the response to a <code>DescribeServers</code> request.</p> <p>
     * <i>For Chef Automate servers:</i> If
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> includes
     * CHEF_MAJOR_UPGRADE_AVAILABLE, you can upgrade the Chef Automate server to Chef
     * Automate 2. To be eligible for upgrade, a server running Chef Automate 1 must
     * have had at least one successful maintenance run after November 1, 2019.</p> <p>
     * <i>For Puppet servers:</i>
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> contains the
     * following two responses:</p> <ul> <li> <p> <code>PUPPET_API_CA_CERT</code>, the
     * PEM-encoded CA certificate that is used by the Puppet API over TCP port number
     * 8140. The CA certificate is also used to sign node certificates.</p> </li> <li>
     * <p> <code>PUPPET_API_CRL</code>, a certificate revocation list. The certificate
     * revocation list is for internal maintenance purposes only. For more information
     * about the Puppet certificate revocation list, see <a
     * href="https://puppet.com/docs/puppet/5.5/man/certificate_revocation_list.html">Man
     * Page: puppet certificate_revocation_list</a> in the Puppet documentation.</p>
     * </li> </ul>
     */
    inline void SetServers(Aws::Vector<Server>&& value) { m_servers = std::move(value); }

    /**
     * <p>Contains the response to a <code>DescribeServers</code> request.</p> <p>
     * <i>For Chef Automate servers:</i> If
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> includes
     * CHEF_MAJOR_UPGRADE_AVAILABLE, you can upgrade the Chef Automate server to Chef
     * Automate 2. To be eligible for upgrade, a server running Chef Automate 1 must
     * have had at least one successful maintenance run after November 1, 2019.</p> <p>
     * <i>For Puppet servers:</i>
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> contains the
     * following two responses:</p> <ul> <li> <p> <code>PUPPET_API_CA_CERT</code>, the
     * PEM-encoded CA certificate that is used by the Puppet API over TCP port number
     * 8140. The CA certificate is also used to sign node certificates.</p> </li> <li>
     * <p> <code>PUPPET_API_CRL</code>, a certificate revocation list. The certificate
     * revocation list is for internal maintenance purposes only. For more information
     * about the Puppet certificate revocation list, see <a
     * href="https://puppet.com/docs/puppet/5.5/man/certificate_revocation_list.html">Man
     * Page: puppet certificate_revocation_list</a> in the Puppet documentation.</p>
     * </li> </ul>
     */
    inline DescribeServersResult& WithServers(const Aws::Vector<Server>& value) { SetServers(value); return *this;}

    /**
     * <p>Contains the response to a <code>DescribeServers</code> request.</p> <p>
     * <i>For Chef Automate servers:</i> If
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> includes
     * CHEF_MAJOR_UPGRADE_AVAILABLE, you can upgrade the Chef Automate server to Chef
     * Automate 2. To be eligible for upgrade, a server running Chef Automate 1 must
     * have had at least one successful maintenance run after November 1, 2019.</p> <p>
     * <i>For Puppet servers:</i>
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> contains the
     * following two responses:</p> <ul> <li> <p> <code>PUPPET_API_CA_CERT</code>, the
     * PEM-encoded CA certificate that is used by the Puppet API over TCP port number
     * 8140. The CA certificate is also used to sign node certificates.</p> </li> <li>
     * <p> <code>PUPPET_API_CRL</code>, a certificate revocation list. The certificate
     * revocation list is for internal maintenance purposes only. For more information
     * about the Puppet certificate revocation list, see <a
     * href="https://puppet.com/docs/puppet/5.5/man/certificate_revocation_list.html">Man
     * Page: puppet certificate_revocation_list</a> in the Puppet documentation.</p>
     * </li> </ul>
     */
    inline DescribeServersResult& WithServers(Aws::Vector<Server>&& value) { SetServers(std::move(value)); return *this;}

    /**
     * <p>Contains the response to a <code>DescribeServers</code> request.</p> <p>
     * <i>For Chef Automate servers:</i> If
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> includes
     * CHEF_MAJOR_UPGRADE_AVAILABLE, you can upgrade the Chef Automate server to Chef
     * Automate 2. To be eligible for upgrade, a server running Chef Automate 1 must
     * have had at least one successful maintenance run after November 1, 2019.</p> <p>
     * <i>For Puppet servers:</i>
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> contains the
     * following two responses:</p> <ul> <li> <p> <code>PUPPET_API_CA_CERT</code>, the
     * PEM-encoded CA certificate that is used by the Puppet API over TCP port number
     * 8140. The CA certificate is also used to sign node certificates.</p> </li> <li>
     * <p> <code>PUPPET_API_CRL</code>, a certificate revocation list. The certificate
     * revocation list is for internal maintenance purposes only. For more information
     * about the Puppet certificate revocation list, see <a
     * href="https://puppet.com/docs/puppet/5.5/man/certificate_revocation_list.html">Man
     * Page: puppet certificate_revocation_list</a> in the Puppet documentation.</p>
     * </li> </ul>
     */
    inline DescribeServersResult& AddServers(const Server& value) { m_servers.push_back(value); return *this; }

    /**
     * <p>Contains the response to a <code>DescribeServers</code> request.</p> <p>
     * <i>For Chef Automate servers:</i> If
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> includes
     * CHEF_MAJOR_UPGRADE_AVAILABLE, you can upgrade the Chef Automate server to Chef
     * Automate 2. To be eligible for upgrade, a server running Chef Automate 1 must
     * have had at least one successful maintenance run after November 1, 2019.</p> <p>
     * <i>For Puppet servers:</i>
     * <code>DescribeServersResponse$Servers$EngineAttributes</code> contains the
     * following two responses:</p> <ul> <li> <p> <code>PUPPET_API_CA_CERT</code>, the
     * PEM-encoded CA certificate that is used by the Puppet API over TCP port number
     * 8140. The CA certificate is also used to sign node certificates.</p> </li> <li>
     * <p> <code>PUPPET_API_CRL</code>, a certificate revocation list. The certificate
     * revocation list is for internal maintenance purposes only. For more information
     * about the Puppet certificate revocation list, see <a
     * href="https://puppet.com/docs/puppet/5.5/man/certificate_revocation_list.html">Man
     * Page: puppet certificate_revocation_list</a> in the Puppet documentation.</p>
     * </li> </ul>
     */
    inline DescribeServersResult& AddServers(Server&& value) { m_servers.push_back(std::move(value)); return *this; }


    /**
     * <p>This is not currently implemented for <code>DescribeServers</code> requests.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>This is not currently implemented for <code>DescribeServers</code> requests.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>This is not currently implemented for <code>DescribeServers</code> requests.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>This is not currently implemented for <code>DescribeServers</code> requests.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>This is not currently implemented for <code>DescribeServers</code> requests.
     * </p>
     */
    inline DescribeServersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>This is not currently implemented for <code>DescribeServers</code> requests.
     * </p>
     */
    inline DescribeServersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>This is not currently implemented for <code>DescribeServers</code> requests.
     * </p>
     */
    inline DescribeServersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Server> m_servers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
