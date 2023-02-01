/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/StartReadSetExportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartReadSetExportJobResult::StartReadSetExportJobResult() : 
    m_status(ReadSetExportJobStatus::NOT_SET)
{
}

StartReadSetExportJobResult::StartReadSetExportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ReadSetExportJobStatus::NOT_SET)
{
  *this = result;
}

StartReadSetExportJobResult& StartReadSetExportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  if(jsonValue.ValueExists("sequenceStoreId"))
  {
    m_sequenceStoreId = jsonValue.GetString("sequenceStoreId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReadSetExportJobStatusMapper::GetReadSetExportJobStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
