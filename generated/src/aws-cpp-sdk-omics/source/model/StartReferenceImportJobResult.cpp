/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/StartReferenceImportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartReferenceImportJobResult::StartReferenceImportJobResult() : 
    m_status(ReferenceImportJobStatus::NOT_SET)
{
}

StartReferenceImportJobResult::StartReferenceImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ReferenceImportJobStatus::NOT_SET)
{
  *this = result;
}

StartReferenceImportJobResult& StartReferenceImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("referenceStoreId"))
  {
    m_referenceStoreId = jsonValue.GetString("referenceStoreId");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReferenceImportJobStatusMapper::GetReferenceImportJobStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
