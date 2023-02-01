/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/GetDomainDetailResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDomainDetailResult::GetDomainDetailResult() : 
    m_autoRenew(false),
    m_adminPrivacy(false),
    m_registrantPrivacy(false),
    m_techPrivacy(false)
{
}

GetDomainDetailResult::GetDomainDetailResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_autoRenew(false),
    m_adminPrivacy(false),
    m_registrantPrivacy(false),
    m_techPrivacy(false)
{
  *this = result;
}

GetDomainDetailResult& GetDomainDetailResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

  }

  if(jsonValue.ValueExists("Nameservers"))
  {
    Aws::Utils::Array<JsonView> nameserversJsonList = jsonValue.GetArray("Nameservers");
    for(unsigned nameserversIndex = 0; nameserversIndex < nameserversJsonList.GetLength(); ++nameserversIndex)
    {
      m_nameservers.push_back(nameserversJsonList[nameserversIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("AutoRenew"))
  {
    m_autoRenew = jsonValue.GetBool("AutoRenew");

  }

  if(jsonValue.ValueExists("AdminContact"))
  {
    m_adminContact = jsonValue.GetObject("AdminContact");

  }

  if(jsonValue.ValueExists("RegistrantContact"))
  {
    m_registrantContact = jsonValue.GetObject("RegistrantContact");

  }

  if(jsonValue.ValueExists("TechContact"))
  {
    m_techContact = jsonValue.GetObject("TechContact");

  }

  if(jsonValue.ValueExists("AdminPrivacy"))
  {
    m_adminPrivacy = jsonValue.GetBool("AdminPrivacy");

  }

  if(jsonValue.ValueExists("RegistrantPrivacy"))
  {
    m_registrantPrivacy = jsonValue.GetBool("RegistrantPrivacy");

  }

  if(jsonValue.ValueExists("TechPrivacy"))
  {
    m_techPrivacy = jsonValue.GetBool("TechPrivacy");

  }

  if(jsonValue.ValueExists("RegistrarName"))
  {
    m_registrarName = jsonValue.GetString("RegistrarName");

  }

  if(jsonValue.ValueExists("WhoIsServer"))
  {
    m_whoIsServer = jsonValue.GetString("WhoIsServer");

  }

  if(jsonValue.ValueExists("RegistrarUrl"))
  {
    m_registrarUrl = jsonValue.GetString("RegistrarUrl");

  }

  if(jsonValue.ValueExists("AbuseContactEmail"))
  {
    m_abuseContactEmail = jsonValue.GetString("AbuseContactEmail");

  }

  if(jsonValue.ValueExists("AbuseContactPhone"))
  {
    m_abuseContactPhone = jsonValue.GetString("AbuseContactPhone");

  }

  if(jsonValue.ValueExists("RegistryDomainId"))
  {
    m_registryDomainId = jsonValue.GetString("RegistryDomainId");

  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

  }

  if(jsonValue.ValueExists("UpdatedDate"))
  {
    m_updatedDate = jsonValue.GetDouble("UpdatedDate");

  }

  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetDouble("ExpirationDate");

  }

  if(jsonValue.ValueExists("Reseller"))
  {
    m_reseller = jsonValue.GetString("Reseller");

  }

  if(jsonValue.ValueExists("DnsSec"))
  {
    m_dnsSec = jsonValue.GetString("DnsSec");

  }

  if(jsonValue.ValueExists("StatusList"))
  {
    Aws::Utils::Array<JsonView> statusListJsonList = jsonValue.GetArray("StatusList");
    for(unsigned statusListIndex = 0; statusListIndex < statusListJsonList.GetLength(); ++statusListIndex)
    {
      m_statusList.push_back(statusListJsonList[statusListIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("DnssecKeys"))
  {
    Aws::Utils::Array<JsonView> dnssecKeysJsonList = jsonValue.GetArray("DnssecKeys");
    for(unsigned dnssecKeysIndex = 0; dnssecKeysIndex < dnssecKeysJsonList.GetLength(); ++dnssecKeysIndex)
    {
      m_dnssecKeys.push_back(dnssecKeysJsonList[dnssecKeysIndex].AsObject());
    }
  }



  return *this;
}
