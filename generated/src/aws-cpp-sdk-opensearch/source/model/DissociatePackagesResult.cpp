﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DissociatePackagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DissociatePackagesResult::DissociatePackagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DissociatePackagesResult& DissociatePackagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainPackageDetailsList"))
  {
    Aws::Utils::Array<JsonView> domainPackageDetailsListJsonList = jsonValue.GetArray("DomainPackageDetailsList");
    for(unsigned domainPackageDetailsListIndex = 0; domainPackageDetailsListIndex < domainPackageDetailsListJsonList.GetLength(); ++domainPackageDetailsListIndex)
    {
      m_domainPackageDetailsList.push_back(domainPackageDetailsListJsonList[domainPackageDetailsListIndex].AsObject());
    }
    m_domainPackageDetailsListHasBeenSet = true;
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
