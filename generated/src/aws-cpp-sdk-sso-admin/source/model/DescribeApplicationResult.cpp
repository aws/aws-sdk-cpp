/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DescribeApplicationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeApplicationResult::DescribeApplicationResult() : 
    m_status(ApplicationStatus::NOT_SET)
{
}

DescribeApplicationResult::DescribeApplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ApplicationStatus::NOT_SET)
{
  *this = result;
}

DescribeApplicationResult& DescribeApplicationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationAccount"))
  {
    m_applicationAccount = jsonValue.GetString("ApplicationAccount");

  }

  if(jsonValue.ValueExists("ApplicationArn"))
  {
    m_applicationArn = jsonValue.GetString("ApplicationArn");

  }

  if(jsonValue.ValueExists("ApplicationProviderArn"))
  {
    m_applicationProviderArn = jsonValue.GetString("ApplicationProviderArn");

  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("InstanceArn"))
  {
    m_instanceArn = jsonValue.GetString("InstanceArn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("PortalOptions"))
  {
    m_portalOptions = jsonValue.GetObject("PortalOptions");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ApplicationStatusMapper::GetApplicationStatusForName(jsonValue.GetString("Status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
