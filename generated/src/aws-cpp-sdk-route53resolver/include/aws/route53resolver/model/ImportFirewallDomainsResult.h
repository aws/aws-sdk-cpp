/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/FirewallDomainListStatus.h>
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
namespace Route53Resolver
{
namespace Model
{
  class ImportFirewallDomainsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ImportFirewallDomainsResult();
    AWS_ROUTE53RESOLVER_API ImportFirewallDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ImportFirewallDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Id of the firewall domain list that DNS Firewall just updated.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The Id of the firewall domain list that DNS Firewall just updated.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The Id of the firewall domain list that DNS Firewall just updated.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The Id of the firewall domain list that DNS Firewall just updated.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The Id of the firewall domain list that DNS Firewall just updated.</p>
     */
    inline ImportFirewallDomainsResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The Id of the firewall domain list that DNS Firewall just updated.</p>
     */
    inline ImportFirewallDomainsResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The Id of the firewall domain list that DNS Firewall just updated.</p>
     */
    inline ImportFirewallDomainsResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the domain list. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the domain list. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the domain list. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the domain list. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the domain list. </p>
     */
    inline ImportFirewallDomainsResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain list. </p>
     */
    inline ImportFirewallDomainsResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain list. </p>
     */
    inline ImportFirewallDomainsResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> </p>
     */
    inline const FirewallDomainListStatus& GetStatus() const{ return m_status; }

    /**
     * <p> </p>
     */
    inline void SetStatus(const FirewallDomainListStatus& value) { m_status = value; }

    /**
     * <p> </p>
     */
    inline void SetStatus(FirewallDomainListStatus&& value) { m_status = std::move(value); }

    /**
     * <p> </p>
     */
    inline ImportFirewallDomainsResult& WithStatus(const FirewallDomainListStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> </p>
     */
    inline ImportFirewallDomainsResult& WithStatus(FirewallDomainListStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline ImportFirewallDomainsResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline ImportFirewallDomainsResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline ImportFirewallDomainsResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_name;

    FirewallDomainListStatus m_status;

    Aws::String m_statusMessage;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
