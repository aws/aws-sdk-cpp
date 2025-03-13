/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/GetMailDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMailDomainResult::GetMailDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMailDomainResult& GetMailDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Records"))
  {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("Records");
    for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
    {
      m_records.push_back(recordsJsonList[recordsIndex].AsObject());
    }
    m_recordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsTestDomain"))
  {
    m_isTestDomain = jsonValue.GetBool("IsTestDomain");
    m_isTestDomainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsDefault"))
  {
    m_isDefault = jsonValue.GetBool("IsDefault");
    m_isDefaultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OwnershipVerificationStatus"))
  {
    m_ownershipVerificationStatus = DnsRecordVerificationStatusMapper::GetDnsRecordVerificationStatusForName(jsonValue.GetString("OwnershipVerificationStatus"));
    m_ownershipVerificationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DkimVerificationStatus"))
  {
    m_dkimVerificationStatus = DnsRecordVerificationStatusMapper::GetDnsRecordVerificationStatusForName(jsonValue.GetString("DkimVerificationStatus"));
    m_dkimVerificationStatusHasBeenSet = true;
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
