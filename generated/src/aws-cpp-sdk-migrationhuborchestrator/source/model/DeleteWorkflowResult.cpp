/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/DeleteWorkflowResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteWorkflowResult::DeleteWorkflowResult() : 
    m_status(MigrationWorkflowStatusEnum::NOT_SET)
{
}

DeleteWorkflowResult::DeleteWorkflowResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(MigrationWorkflowStatusEnum::NOT_SET)
{
  *this = result;
}

DeleteWorkflowResult& DeleteWorkflowResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = MigrationWorkflowStatusEnumMapper::GetMigrationWorkflowStatusEnumForName(jsonValue.GetString("status"));

  }



  return *this;
}
