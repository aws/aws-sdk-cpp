﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DeletePoolResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeletePoolResult::DeletePoolResult() : 
    m_status(PoolStatus::NOT_SET),
    m_messageType(MessageType::NOT_SET),
    m_twoWayEnabled(false),
    m_selfManagedOptOutsEnabled(false),
    m_sharedRoutesEnabled(false)
{
}

DeletePoolResult::DeletePoolResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(PoolStatus::NOT_SET),
    m_messageType(MessageType::NOT_SET),
    m_twoWayEnabled(false),
    m_selfManagedOptOutsEnabled(false),
    m_sharedRoutesEnabled(false)
{
  *this = result;
}

DeletePoolResult& DeletePoolResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PoolArn"))
  {
    m_poolArn = jsonValue.GetString("PoolArn");

  }

  if(jsonValue.ValueExists("PoolId"))
  {
    m_poolId = jsonValue.GetString("PoolId");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = PoolStatusMapper::GetPoolStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("MessageType"))
  {
    m_messageType = MessageTypeMapper::GetMessageTypeForName(jsonValue.GetString("MessageType"));

  }

  if(jsonValue.ValueExists("TwoWayEnabled"))
  {
    m_twoWayEnabled = jsonValue.GetBool("TwoWayEnabled");

  }

  if(jsonValue.ValueExists("TwoWayChannelArn"))
  {
    m_twoWayChannelArn = jsonValue.GetString("TwoWayChannelArn");

  }

  if(jsonValue.ValueExists("SelfManagedOptOutsEnabled"))
  {
    m_selfManagedOptOutsEnabled = jsonValue.GetBool("SelfManagedOptOutsEnabled");

  }

  if(jsonValue.ValueExists("OptOutListName"))
  {
    m_optOutListName = jsonValue.GetString("OptOutListName");

  }

  if(jsonValue.ValueExists("SharedRoutesEnabled"))
  {
    m_sharedRoutesEnabled = jsonValue.GetBool("SharedRoutesEnabled");

  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
