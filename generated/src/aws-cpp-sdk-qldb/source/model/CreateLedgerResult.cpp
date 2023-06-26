﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/CreateLedgerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateLedgerResult::CreateLedgerResult() : 
    m_state(LedgerState::NOT_SET),
    m_permissionsMode(PermissionsMode::NOT_SET),
    m_deletionProtection(false)
{
}

CreateLedgerResult::CreateLedgerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(LedgerState::NOT_SET),
    m_permissionsMode(PermissionsMode::NOT_SET),
    m_deletionProtection(false)
{
  *this = result;
}

CreateLedgerResult& CreateLedgerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = LedgerStateMapper::GetLedgerStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("CreationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("CreationDateTime");

  }

  if(jsonValue.ValueExists("PermissionsMode"))
  {
    m_permissionsMode = PermissionsModeMapper::GetPermissionsModeForName(jsonValue.GetString("PermissionsMode"));

  }

  if(jsonValue.ValueExists("DeletionProtection"))
  {
    m_deletionProtection = jsonValue.GetBool("DeletionProtection");

  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
