/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ListServicePrincipalNamesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PcaConnectorAd::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServicePrincipalNamesResult::ListServicePrincipalNamesResult()
{
}

ListServicePrincipalNamesResult::ListServicePrincipalNamesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListServicePrincipalNamesResult& ListServicePrincipalNamesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ServicePrincipalNames"))
  {
    Aws::Utils::Array<JsonView> servicePrincipalNamesJsonList = jsonValue.GetArray("ServicePrincipalNames");
    for(unsigned servicePrincipalNamesIndex = 0; servicePrincipalNamesIndex < servicePrincipalNamesJsonList.GetLength(); ++servicePrincipalNamesIndex)
    {
      m_servicePrincipalNames.push_back(servicePrincipalNamesJsonList[servicePrincipalNamesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
