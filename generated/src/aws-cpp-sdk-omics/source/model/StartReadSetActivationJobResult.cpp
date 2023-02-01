/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/StartReadSetActivationJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartReadSetActivationJobResult::StartReadSetActivationJobResult() : 
    m_status(ReadSetActivationJobStatus::NOT_SET)
{
}

StartReadSetActivationJobResult::StartReadSetActivationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ReadSetActivationJobStatus::NOT_SET)
{
  *this = result;
}

StartReadSetActivationJobResult& StartReadSetActivationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("sequenceStoreId"))
  {
    m_sequenceStoreId = jsonValue.GetString("sequenceStoreId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReadSetActivationJobStatusMapper::GetReadSetActivationJobStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
