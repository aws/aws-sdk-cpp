/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/GetDatalakeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDatalakeResult::GetDatalakeResult()
{
}

GetDatalakeResult::GetDatalakeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDatalakeResult& GetDatalakeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("configurations"))
  {
    Aws::Map<Aws::String, JsonView> configurationsJsonMap = jsonValue.GetObject("configurations").GetAllObjects();
    for(auto& configurationsItem : configurationsJsonMap)
    {
      m_configurations[RegionMapper::GetRegionForName(configurationsItem.first)] = configurationsItem.second.AsObject();
    }
  }



  return *this;
}
