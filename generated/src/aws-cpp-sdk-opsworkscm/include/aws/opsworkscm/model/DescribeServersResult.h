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
    AWS_OPSWORKSCM_API DescribeServersResult() = default;
    AWS_OPSWORKSCM_API DescribeServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKSCM_API DescribeServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
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
    inline const Aws::Vector<Server>& GetServers() const { return m_servers; }
    template<typename ServersT = Aws::Vector<Server>>
    void SetServers(ServersT&& value) { m_serversHasBeenSet = true; m_servers = std::forward<ServersT>(value); }
    template<typename ServersT = Aws::Vector<Server>>
    DescribeServersResult& WithServers(ServersT&& value) { SetServers(std::forward<ServersT>(value)); return *this;}
    template<typename ServersT = Server>
    DescribeServersResult& AddServers(ServersT&& value) { m_serversHasBeenSet = true; m_servers.emplace_back(std::forward<ServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is not currently implemented for <code>DescribeServers</code> requests.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeServersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeServersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Server> m_servers;
    bool m_serversHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
