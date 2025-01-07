/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateComputeQuotaResult.h>
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

UpdateComputeQuotaResult::UpdateComputeQuotaResult() : 
    m_computeQuotaVersion(0)
{
}

UpdateComputeQuotaResult::UpdateComputeQuotaResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateComputeQuotaResult()
{
  *this = result;
}

UpdateComputeQuotaResult& UpdateComputeQuotaResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ComputeQuotaArn"))
  {
    m_computeQuotaArn = jsonValue.GetString("ComputeQuotaArn");

  }

  if(jsonValue.ValueExists("ComputeQuotaVersion"))
  {
    m_computeQuotaVersion = jsonValue.GetInteger("ComputeQuotaVersion");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
