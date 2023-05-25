/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/GetContactChannelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetContactChannelResult::GetContactChannelResult() : 
    m_type(ChannelType::NOT_SET),
    m_activationStatus(ActivationStatus::NOT_SET)
{
}

GetContactChannelResult::GetContactChannelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_type(ChannelType::NOT_SET),
    m_activationStatus(ActivationStatus::NOT_SET)
{
  *this = result;
}

GetContactChannelResult& GetContactChannelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ContactArn"))
  {
    m_contactArn = jsonValue.GetString("ContactArn");

  }

  if(jsonValue.ValueExists("ContactChannelArn"))
  {
    m_contactChannelArn = jsonValue.GetString("ContactChannelArn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ChannelTypeMapper::GetChannelTypeForName(jsonValue.GetString("Type"));

  }

  if(jsonValue.ValueExists("DeliveryAddress"))
  {
    m_deliveryAddress = jsonValue.GetObject("DeliveryAddress");

  }

  if(jsonValue.ValueExists("ActivationStatus"))
  {
    m_activationStatus = ActivationStatusMapper::GetActivationStatusForName(jsonValue.GetString("ActivationStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
