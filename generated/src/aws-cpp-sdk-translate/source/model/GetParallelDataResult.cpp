/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/GetParallelDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetParallelDataResult::GetParallelDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetParallelDataResult& GetParallelDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ParallelDataProperties"))
  {
    m_parallelDataProperties = jsonValue.GetObject("ParallelDataProperties");
    m_parallelDataPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataLocation"))
  {
    m_dataLocation = jsonValue.GetObject("DataLocation");
    m_dataLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuxiliaryDataLocation"))
  {
    m_auxiliaryDataLocation = jsonValue.GetObject("AuxiliaryDataLocation");
    m_auxiliaryDataLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestUpdateAttemptAuxiliaryDataLocation"))
  {
    m_latestUpdateAttemptAuxiliaryDataLocation = jsonValue.GetObject("LatestUpdateAttemptAuxiliaryDataLocation");
    m_latestUpdateAttemptAuxiliaryDataLocationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
