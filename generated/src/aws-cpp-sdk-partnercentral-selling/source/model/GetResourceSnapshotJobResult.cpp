/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/GetResourceSnapshotJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceSnapshotJobResult::GetResourceSnapshotJobResult() : 
    m_resourceType(ResourceType::NOT_SET),
    m_status(ResourceSnapshotJobStatus::NOT_SET)
{
}

GetResourceSnapshotJobResult::GetResourceSnapshotJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetResourceSnapshotJobResult()
{
  *this = result;
}

GetResourceSnapshotJobResult& GetResourceSnapshotJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Catalog"))
  {
    m_catalog = jsonValue.GetString("Catalog");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

  }

  if(jsonValue.ValueExists("EngagementId"))
  {
    m_engagementId = jsonValue.GetString("EngagementId");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("LastFailure"))
  {
    m_lastFailure = jsonValue.GetString("LastFailure");

  }

  if(jsonValue.ValueExists("LastSuccessfulExecutionDate"))
  {
    m_lastSuccessfulExecutionDate = jsonValue.GetString("LastSuccessfulExecutionDate");

  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

  }

  if(jsonValue.ValueExists("ResourceSnapshotTemplateName"))
  {
    m_resourceSnapshotTemplateName = jsonValue.GetString("ResourceSnapshotTemplateName");

  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ResourceSnapshotJobStatusMapper::GetResourceSnapshotJobStatusForName(jsonValue.GetString("Status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
