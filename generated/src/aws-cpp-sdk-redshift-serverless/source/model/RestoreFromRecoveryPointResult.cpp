﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/RestoreFromRecoveryPointResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RestoreFromRecoveryPointResult::RestoreFromRecoveryPointResult()
{
}

RestoreFromRecoveryPointResult::RestoreFromRecoveryPointResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RestoreFromRecoveryPointResult& RestoreFromRecoveryPointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetObject("namespace");

  }

  if(jsonValue.ValueExists("recoveryPointId"))
  {
    m_recoveryPointId = jsonValue.GetString("recoveryPointId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
