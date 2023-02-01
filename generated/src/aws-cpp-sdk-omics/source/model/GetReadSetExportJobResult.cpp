/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetReadSetExportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetReadSetExportJobResult::GetReadSetExportJobResult() : 
    m_status(ReadSetExportJobStatus::NOT_SET)
{
}

GetReadSetExportJobResult::GetReadSetExportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ReadSetExportJobStatus::NOT_SET)
{
  *this = result;
}

GetReadSetExportJobResult& GetReadSetExportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetString("completionTime");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("readSets"))
  {
    Aws::Utils::Array<JsonView> readSetsJsonList = jsonValue.GetArray("readSets");
    for(unsigned readSetsIndex = 0; readSetsIndex < readSetsJsonList.GetLength(); ++readSetsIndex)
    {
      m_readSets.push_back(readSetsJsonList[readSetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("sequenceStoreId"))
  {
    m_sequenceStoreId = jsonValue.GetString("sequenceStoreId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReadSetExportJobStatusMapper::GetReadSetExportJobStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

  }



  return *this;
}
