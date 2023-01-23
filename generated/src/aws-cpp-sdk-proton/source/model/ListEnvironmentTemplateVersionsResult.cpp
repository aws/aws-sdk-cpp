/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ListEnvironmentTemplateVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEnvironmentTemplateVersionsResult::ListEnvironmentTemplateVersionsResult()
{
}

ListEnvironmentTemplateVersionsResult::ListEnvironmentTemplateVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEnvironmentTemplateVersionsResult& ListEnvironmentTemplateVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("templateVersions"))
  {
    Aws::Utils::Array<JsonView> templateVersionsJsonList = jsonValue.GetArray("templateVersions");
    for(unsigned templateVersionsIndex = 0; templateVersionsIndex < templateVersionsJsonList.GetLength(); ++templateVersionsIndex)
    {
      m_templateVersions.push_back(templateVersionsJsonList[templateVersionsIndex].AsObject());
    }
  }



  return *this;
}
