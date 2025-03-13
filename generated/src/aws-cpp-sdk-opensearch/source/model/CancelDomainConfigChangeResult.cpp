/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/CancelDomainConfigChangeResult.h>
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

CancelDomainConfigChangeResult::CancelDomainConfigChangeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CancelDomainConfigChangeResult& CancelDomainConfigChangeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CancelledChangeIds"))
  {
    Aws::Utils::Array<JsonView> cancelledChangeIdsJsonList = jsonValue.GetArray("CancelledChangeIds");
    for(unsigned cancelledChangeIdsIndex = 0; cancelledChangeIdsIndex < cancelledChangeIdsJsonList.GetLength(); ++cancelledChangeIdsIndex)
    {
      m_cancelledChangeIds.push_back(cancelledChangeIdsJsonList[cancelledChangeIdsIndex].AsString());
    }
    m_cancelledChangeIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CancelledChangeProperties"))
  {
    Aws::Utils::Array<JsonView> cancelledChangePropertiesJsonList = jsonValue.GetArray("CancelledChangeProperties");
    for(unsigned cancelledChangePropertiesIndex = 0; cancelledChangePropertiesIndex < cancelledChangePropertiesJsonList.GetLength(); ++cancelledChangePropertiesIndex)
    {
      m_cancelledChangeProperties.push_back(cancelledChangePropertiesJsonList[cancelledChangePropertiesIndex].AsObject());
    }
    m_cancelledChangePropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DryRun"))
  {
    m_dryRun = jsonValue.GetBool("DryRun");
    m_dryRunHasBeenSet = true;
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
