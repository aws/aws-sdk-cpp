/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/GetTagKeysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTagKeysResult::GetTagKeysResult()
{
}

GetTagKeysResult::GetTagKeysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTagKeysResult& GetTagKeysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PaginationToken"))
  {
    m_paginationToken = jsonValue.GetString("PaginationToken");

  }

  if(jsonValue.ValueExists("TagKeys"))
  {
    Aws::Utils::Array<JsonView> tagKeysJsonList = jsonValue.GetArray("TagKeys");
    for(unsigned tagKeysIndex = 0; tagKeysIndex < tagKeysJsonList.GetLength(); ++tagKeysIndex)
    {
      m_tagKeys.push_back(tagKeysJsonList[tagKeysIndex].AsString());
    }
  }



  return *this;
}
