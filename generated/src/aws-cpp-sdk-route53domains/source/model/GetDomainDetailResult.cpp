/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/GetDomainDetailResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDomainDetailResult::GetDomainDetailResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDomainDetailResult& GetDomainDetailResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Nameservers"))
  {
    Aws::Utils::Array<JsonView> nameserversJsonList = jsonValue.GetArray("Nameservers");
    for(unsigned nameserversIndex = 0; nameserversIndex < nameserversJsonList.GetLength(); ++nameserversIndex)
    {
      m_nameservers.push_back(nameserversJsonList[nameserversIndex].AsObject());
    }
    m_nameserversHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoRenew"))
  {
    m_autoRenew = jsonValue.GetBool("AutoRenew");
    m_autoRenewHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdminContact"))
  {
    m_adminContact = jsonValue.GetObject("AdminContact");
    m_adminContactHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegistrantContact"))
  {
    m_registrantContact = jsonValue.GetObject("RegistrantContact");
    m_registrantContactHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TechContact"))
  {
    m_techContact = jsonValue.GetObject("TechContact");
    m_techContactHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdminPrivacy"))
  {
    m_adminPrivacy = jsonValue.GetBool("AdminPrivacy");
    m_adminPrivacyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegistrantPrivacy"))
  {
    m_registrantPrivacy = jsonValue.GetBool("RegistrantPrivacy");
    m_registrantPrivacyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TechPrivacy"))
  {
    m_techPrivacy = jsonValue.GetBool("TechPrivacy");
    m_techPrivacyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegistrarName"))
  {
    m_registrarName = jsonValue.GetString("RegistrarName");
    m_registrarNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WhoIsServer"))
  {
    m_whoIsServer = jsonValue.GetString("WhoIsServer");
    m_whoIsServerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegistrarUrl"))
  {
    m_registrarUrl = jsonValue.GetString("RegistrarUrl");
    m_registrarUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AbuseContactEmail"))
  {
    m_abuseContactEmail = jsonValue.GetString("AbuseContactEmail");
    m_abuseContactEmailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AbuseContactPhone"))
  {
    m_abuseContactPhone = jsonValue.GetString("AbuseContactPhone");
    m_abuseContactPhoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegistryDomainId"))
  {
    m_registryDomainId = jsonValue.GetString("RegistryDomainId");
    m_registryDomainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedDate"))
  {
    m_updatedDate = jsonValue.GetDouble("UpdatedDate");
    m_updatedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetDouble("ExpirationDate");
    m_expirationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Reseller"))
  {
    m_reseller = jsonValue.GetString("Reseller");
    m_resellerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DnsSec"))
  {
    m_dnsSec = jsonValue.GetString("DnsSec");
    m_dnsSecHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusList"))
  {
    Aws::Utils::Array<JsonView> statusListJsonList = jsonValue.GetArray("StatusList");
    for(unsigned statusListIndex = 0; statusListIndex < statusListJsonList.GetLength(); ++statusListIndex)
    {
      m_statusList.push_back(statusListJsonList[statusListIndex].AsString());
    }
    m_statusListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DnssecKeys"))
  {
    Aws::Utils::Array<JsonView> dnssecKeysJsonList = jsonValue.GetArray("DnssecKeys");
    for(unsigned dnssecKeysIndex = 0; dnssecKeysIndex < dnssecKeysJsonList.GetLength(); ++dnssecKeysIndex)
    {
      m_dnssecKeys.push_back(dnssecKeysJsonList[dnssecKeysIndex].AsObject());
    }
    m_dnssecKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BillingContact"))
  {
    m_billingContact = jsonValue.GetObject("BillingContact");
    m_billingContactHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BillingPrivacy"))
  {
    m_billingPrivacy = jsonValue.GetBool("BillingPrivacy");
    m_billingPrivacyHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
