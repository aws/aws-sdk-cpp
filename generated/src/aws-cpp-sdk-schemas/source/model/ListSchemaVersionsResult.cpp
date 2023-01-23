/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/ListSchemaVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSchemaVersionsResult::ListSchemaVersionsResult()
{
}

ListSchemaVersionsResult::ListSchemaVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSchemaVersionsResult& ListSchemaVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("SchemaVersions"))
  {
    Aws::Utils::Array<JsonView> schemaVersionsJsonList = jsonValue.GetArray("SchemaVersions");
    for(unsigned schemaVersionsIndex = 0; schemaVersionsIndex < schemaVersionsJsonList.GetLength(); ++schemaVersionsIndex)
    {
      m_schemaVersions.push_back(schemaVersionsJsonList[schemaVersionsIndex].AsObject());
    }
  }



  return *this;
}
