﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/GetPolicyStoreResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPolicyStoreResult::GetPolicyStoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPolicyStoreResult& GetPolicyStoreResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("policyStoreId"))
  {
    m_policyStoreId = jsonValue.GetString("policyStoreId");
    m_policyStoreIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("validationSettings"))
  {
    m_validationSettings = jsonValue.GetObject("validationSettings");
    m_validationSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetString("createdDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetString("lastUpdatedDate");
    m_lastUpdatedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deletionProtection"))
  {
    m_deletionProtection = DeletionProtectionMapper::GetDeletionProtectionForName(jsonValue.GetString("deletionProtection"));
    m_deletionProtectionHasBeenSet = true;
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
