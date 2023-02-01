/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListReadSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReadSetsResult::ListReadSetsResult()
{
}

ListReadSetsResult::ListReadSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReadSetsResult& ListReadSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("readSets"))
  {
    Aws::Utils::Array<JsonView> readSetsJsonList = jsonValue.GetArray("readSets");
    for(unsigned readSetsIndex = 0; readSetsIndex < readSetsJsonList.GetLength(); ++readSetsIndex)
    {
      m_readSets.push_back(readSetsJsonList[readSetsIndex].AsObject());
    }
  }



  return *this;
}
