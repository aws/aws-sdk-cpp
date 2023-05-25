/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/BatchDescribeModelPackageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDescribeModelPackageResult::BatchDescribeModelPackageResult()
{
}

BatchDescribeModelPackageResult::BatchDescribeModelPackageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDescribeModelPackageResult& BatchDescribeModelPackageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelPackageSummaries"))
  {
    Aws::Map<Aws::String, JsonView> modelPackageSummariesJsonMap = jsonValue.GetObject("ModelPackageSummaries").GetAllObjects();
    for(auto& modelPackageSummariesItem : modelPackageSummariesJsonMap)
    {
      m_modelPackageSummaries[modelPackageSummariesItem.first] = modelPackageSummariesItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("BatchDescribeModelPackageErrorMap"))
  {
    Aws::Map<Aws::String, JsonView> batchDescribeModelPackageErrorMapJsonMap = jsonValue.GetObject("BatchDescribeModelPackageErrorMap").GetAllObjects();
    for(auto& batchDescribeModelPackageErrorMapItem : batchDescribeModelPackageErrorMapJsonMap)
    {
      m_batchDescribeModelPackageErrorMap[batchDescribeModelPackageErrorMapItem.first] = batchDescribeModelPackageErrorMapItem.second.AsObject();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
