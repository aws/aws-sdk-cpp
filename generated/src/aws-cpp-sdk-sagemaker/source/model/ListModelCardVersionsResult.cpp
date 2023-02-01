/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListModelCardVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListModelCardVersionsResult::ListModelCardVersionsResult()
{
}

ListModelCardVersionsResult::ListModelCardVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListModelCardVersionsResult& ListModelCardVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelCardVersionSummaryList"))
  {
    Aws::Utils::Array<JsonView> modelCardVersionSummaryListJsonList = jsonValue.GetArray("ModelCardVersionSummaryList");
    for(unsigned modelCardVersionSummaryListIndex = 0; modelCardVersionSummaryListIndex < modelCardVersionSummaryListJsonList.GetLength(); ++modelCardVersionSummaryListIndex)
    {
      m_modelCardVersionSummaryList.push_back(modelCardVersionSummaryListJsonList[modelCardVersionSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
