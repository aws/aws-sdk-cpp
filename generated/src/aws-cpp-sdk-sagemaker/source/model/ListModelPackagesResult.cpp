/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListModelPackagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListModelPackagesResult::ListModelPackagesResult()
{
}

ListModelPackagesResult::ListModelPackagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListModelPackagesResult& ListModelPackagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelPackageSummaryList"))
  {
    Aws::Utils::Array<JsonView> modelPackageSummaryListJsonList = jsonValue.GetArray("ModelPackageSummaryList");
    for(unsigned modelPackageSummaryListIndex = 0; modelPackageSummaryListIndex < modelPackageSummaryListJsonList.GetLength(); ++modelPackageSummaryListIndex)
    {
      m_modelPackageSummaryList.push_back(modelPackageSummaryListJsonList[modelPackageSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
