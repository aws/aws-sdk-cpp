/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetReadSetExportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetReadSetExportJobResult::GetReadSetExportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetReadSetExportJobResult& GetReadSetExportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sequenceStoreId"))
  {
    m_sequenceStoreId = jsonValue.GetString("sequenceStoreId");
    m_sequenceStoreIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");
    m_destinationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ReadSetExportJobStatusMapper::GetReadSetExportJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetString("completionTime");
    m_completionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("readSets"))
  {
    Aws::Utils::Array<JsonView> readSetsJsonList = jsonValue.GetArray("readSets");
    for(unsigned readSetsIndex = 0; readSetsIndex < readSetsJsonList.GetLength(); ++readSetsIndex)
    {
      m_readSets.push_back(readSetsJsonList[readSetsIndex].AsObject());
    }
    m_readSetsHasBeenSet = true;
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
