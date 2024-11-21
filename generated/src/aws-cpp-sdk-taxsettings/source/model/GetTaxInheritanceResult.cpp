﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/GetTaxInheritanceResult.h>
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

GetTaxInheritanceResult::GetTaxInheritanceResult() : 
    m_heritageStatus(HeritageStatus::NOT_SET)
{
}

GetTaxInheritanceResult::GetTaxInheritanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetTaxInheritanceResult()
{
  *this = result;
}

GetTaxInheritanceResult& GetTaxInheritanceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("heritageStatus"))
  {
    m_heritageStatus = HeritageStatusMapper::GetHeritageStatusForName(jsonValue.GetString("heritageStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
