/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/PutSupplementalTaxRegistrationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TaxSettings::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutSupplementalTaxRegistrationResult::PutSupplementalTaxRegistrationResult() : 
    m_status(TaxRegistrationStatus::NOT_SET)
{
}

PutSupplementalTaxRegistrationResult::PutSupplementalTaxRegistrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : PutSupplementalTaxRegistrationResult()
{
  *this = result;
}

PutSupplementalTaxRegistrationResult& PutSupplementalTaxRegistrationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("authorityId"))
  {
    m_authorityId = jsonValue.GetString("authorityId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TaxRegistrationStatusMapper::GetTaxRegistrationStatusForName(jsonValue.GetString("status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
