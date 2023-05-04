/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateVPCConnectionResult.h>
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

CreateVPCConnectionResult::CreateVPCConnectionResult() : 
    m_creationStatus(VPCConnectionResourceStatus::NOT_SET),
    m_availabilityStatus(VPCConnectionAvailabilityStatus::NOT_SET),
    m_status(0)
{
}

CreateVPCConnectionResult::CreateVPCConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_creationStatus(VPCConnectionResourceStatus::NOT_SET),
    m_availabilityStatus(VPCConnectionAvailabilityStatus::NOT_SET),
    m_status(0)
{
  *this = result;
}

CreateVPCConnectionResult& CreateVPCConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("VPCConnectionId"))
  {
    m_vPCConnectionId = jsonValue.GetString("VPCConnectionId");

  }

  if(jsonValue.ValueExists("CreationStatus"))
  {
    m_creationStatus = VPCConnectionResourceStatusMapper::GetVPCConnectionResourceStatusForName(jsonValue.GetString("CreationStatus"));

  }

  if(jsonValue.ValueExists("AvailabilityStatus"))
  {
    m_availabilityStatus = VPCConnectionAvailabilityStatusMapper::GetVPCConnectionAvailabilityStatusForName(jsonValue.GetString("AvailabilityStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
