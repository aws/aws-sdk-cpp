/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/DeletePipeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Pipes::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeletePipeResult::DeletePipeResult() : 
    m_currentState(PipeState::NOT_SET),
    m_desiredState(RequestedPipeStateDescribeResponse::NOT_SET)
{
}

DeletePipeResult::DeletePipeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_currentState(PipeState::NOT_SET),
    m_desiredState(RequestedPipeStateDescribeResponse::NOT_SET)
{
  *this = result;
}

DeletePipeResult& DeletePipeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("CurrentState"))
  {
    m_currentState = PipeStateMapper::GetPipeStateForName(jsonValue.GetString("CurrentState"));

  }

  if(jsonValue.ValueExists("DesiredState"))
  {
    m_desiredState = RequestedPipeStateDescribeResponseMapper::GetRequestedPipeStateDescribeResponseForName(jsonValue.GetString("DesiredState"));

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }



  return *this;
}
