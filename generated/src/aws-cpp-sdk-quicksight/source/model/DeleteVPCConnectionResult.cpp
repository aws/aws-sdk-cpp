﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DeleteVPCConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteVPCConnectionResult::DeleteVPCConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteVPCConnectionResult& DeleteVPCConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VPCConnectionId"))
  {
    m_vPCConnectionId = jsonValue.GetString("VPCConnectionId");
    m_vPCConnectionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeletionStatus"))
  {
    m_deletionStatus = VPCConnectionResourceStatusMapper::GetVPCConnectionResourceStatusForName(jsonValue.GetString("DeletionStatus"));
    m_deletionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailabilityStatus"))
  {
    m_availabilityStatus = VPCConnectionAvailabilityStatusMapper::GetVPCConnectionAvailabilityStatusForName(jsonValue.GetString("AvailabilityStatus"));
    m_availabilityStatusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  m_status = static_cast<int>(result.GetResponseCode());
  m_statusHasBeenSet = true;
  return *this;
}
