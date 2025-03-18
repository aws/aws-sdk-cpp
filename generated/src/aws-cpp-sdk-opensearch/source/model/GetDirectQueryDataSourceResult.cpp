/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/GetDirectQueryDataSourceResult.h>
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

GetDirectQueryDataSourceResult::GetDirectQueryDataSourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDirectQueryDataSourceResult& GetDirectQueryDataSourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DataSourceName"))
  {
    m_dataSourceName = jsonValue.GetString("DataSourceName");
    m_dataSourceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSourceType"))
  {
    m_dataSourceType = jsonValue.GetObject("DataSourceType");
    m_dataSourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OpenSearchArns"))
  {
    Aws::Utils::Array<JsonView> openSearchArnsJsonList = jsonValue.GetArray("OpenSearchArns");
    for(unsigned openSearchArnsIndex = 0; openSearchArnsIndex < openSearchArnsJsonList.GetLength(); ++openSearchArnsIndex)
    {
      m_openSearchArns.push_back(openSearchArnsJsonList[openSearchArnsIndex].AsString());
    }
    m_openSearchArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSourceArn"))
  {
    m_dataSourceArn = jsonValue.GetString("DataSourceArn");
    m_dataSourceArnHasBeenSet = true;
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
