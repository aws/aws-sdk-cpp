/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListVariantImportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVariantImportJobsResult::ListVariantImportJobsResult()
{
}

ListVariantImportJobsResult::ListVariantImportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVariantImportJobsResult& ListVariantImportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("variantImportJobs"))
  {
    Aws::Utils::Array<JsonView> variantImportJobsJsonList = jsonValue.GetArray("variantImportJobs");
    for(unsigned variantImportJobsIndex = 0; variantImportJobsIndex < variantImportJobsJsonList.GetLength(); ++variantImportJobsIndex)
    {
      m_variantImportJobs.push_back(variantImportJobsJsonList[variantImportJobsIndex].AsObject());
    }
  }



  return *this;
}
