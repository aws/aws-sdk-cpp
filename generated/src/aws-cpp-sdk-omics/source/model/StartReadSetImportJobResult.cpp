/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/StartReadSetImportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartReadSetImportJobResult::StartReadSetImportJobResult() : 
    m_status(ReadSetImportJobStatus::NOT_SET)
{
}

StartReadSetImportJobResult::StartReadSetImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ReadSetImportJobStatus::NOT_SET)
{
  *this = result;
}

StartReadSetImportJobResult& StartReadSetImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("sequenceStoreId"))
  {
    m_sequenceStoreId = jsonValue.GetString("sequenceStoreId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReadSetImportJobStatusMapper::GetReadSetImportJobStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
