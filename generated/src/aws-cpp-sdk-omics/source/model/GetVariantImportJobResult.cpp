/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetVariantImportJobResult.h>
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

GetVariantImportJobResult::GetVariantImportJobResult() : 
    m_status(JobStatus::NOT_SET),
    m_runLeftNormalization(false)
{
}

GetVariantImportJobResult::GetVariantImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(JobStatus::NOT_SET),
    m_runLeftNormalization(false)
{
  *this = result;
}

GetVariantImportJobResult& GetVariantImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("destinationName"))
  {
    m_destinationName = jsonValue.GetString("destinationName");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

  }

  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetString("completionTime");

  }

  if(jsonValue.ValueExists("items"))
  {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("items");
    for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
    {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("runLeftNormalization"))
  {
    m_runLeftNormalization = jsonValue.GetBool("runLeftNormalization");

  }

  if(jsonValue.ValueExists("annotationFields"))
  {
    Aws::Map<Aws::String, JsonView> annotationFieldsJsonMap = jsonValue.GetObject("annotationFields").GetAllObjects();
    for(auto& annotationFieldsItem : annotationFieldsJsonMap)
    {
      m_annotationFields[annotationFieldsItem.first] = annotationFieldsItem.second.AsString();
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
