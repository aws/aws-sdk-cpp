/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DescribeInstanceAccessControlAttributeConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInstanceAccessControlAttributeConfigurationResult::DescribeInstanceAccessControlAttributeConfigurationResult() : 
    m_status(InstanceAccessControlAttributeConfigurationStatus::NOT_SET)
{
}

DescribeInstanceAccessControlAttributeConfigurationResult::DescribeInstanceAccessControlAttributeConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(InstanceAccessControlAttributeConfigurationStatus::NOT_SET)
{
  *this = result;
}

DescribeInstanceAccessControlAttributeConfigurationResult& DescribeInstanceAccessControlAttributeConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = InstanceAccessControlAttributeConfigurationStatusMapper::GetInstanceAccessControlAttributeConfigurationStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");

  }

  if(jsonValue.ValueExists("InstanceAccessControlAttributeConfiguration"))
  {
    m_instanceAccessControlAttributeConfiguration = jsonValue.GetObject("InstanceAccessControlAttributeConfiguration");

  }



  return *this;
}
