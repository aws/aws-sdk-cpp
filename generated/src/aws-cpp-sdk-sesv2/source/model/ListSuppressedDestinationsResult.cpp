/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ListSuppressedDestinationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSuppressedDestinationsResult::ListSuppressedDestinationsResult()
{
}

ListSuppressedDestinationsResult::ListSuppressedDestinationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSuppressedDestinationsResult& ListSuppressedDestinationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SuppressedDestinationSummaries"))
  {
    Aws::Utils::Array<JsonView> suppressedDestinationSummariesJsonList = jsonValue.GetArray("SuppressedDestinationSummaries");
    for(unsigned suppressedDestinationSummariesIndex = 0; suppressedDestinationSummariesIndex < suppressedDestinationSummariesJsonList.GetLength(); ++suppressedDestinationSummariesIndex)
    {
      m_suppressedDestinationSummaries.push_back(suppressedDestinationSummariesJsonList[suppressedDestinationSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
