/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListServiceActionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServiceActionsResult::ListServiceActionsResult()
{
}

ListServiceActionsResult::ListServiceActionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListServiceActionsResult& ListServiceActionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ServiceActionSummaries"))
  {
    Aws::Utils::Array<JsonView> serviceActionSummariesJsonList = jsonValue.GetArray("ServiceActionSummaries");
    for(unsigned serviceActionSummariesIndex = 0; serviceActionSummariesIndex < serviceActionSummariesJsonList.GetLength(); ++serviceActionSummariesIndex)
    {
      m_serviceActionSummaries.push_back(serviceActionSummariesJsonList[serviceActionSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
