/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListAliasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAliasesResult::ListAliasesResult()
{
}

ListAliasesResult::ListAliasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAliasesResult& ListAliasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SageMakerImageVersionAliases"))
  {
    Aws::Utils::Array<JsonView> sageMakerImageVersionAliasesJsonList = jsonValue.GetArray("SageMakerImageVersionAliases");
    for(unsigned sageMakerImageVersionAliasesIndex = 0; sageMakerImageVersionAliasesIndex < sageMakerImageVersionAliasesJsonList.GetLength(); ++sageMakerImageVersionAliasesIndex)
    {
      m_sageMakerImageVersionAliases.push_back(sageMakerImageVersionAliasesJsonList[sageMakerImageVersionAliasesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
