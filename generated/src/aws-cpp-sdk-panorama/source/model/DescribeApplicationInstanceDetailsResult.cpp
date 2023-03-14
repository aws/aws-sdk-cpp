/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribeApplicationInstanceDetailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeApplicationInstanceDetailsResult::DescribeApplicationInstanceDetailsResult()
{
}

DescribeApplicationInstanceDetailsResult::DescribeApplicationInstanceDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeApplicationInstanceDetailsResult& DescribeApplicationInstanceDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationInstanceId"))
  {
    m_applicationInstanceId = jsonValue.GetString("ApplicationInstanceId");

  }

  if(jsonValue.ValueExists("ApplicationInstanceIdToReplace"))
  {
    m_applicationInstanceIdToReplace = jsonValue.GetString("ApplicationInstanceIdToReplace");

  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

  }

  if(jsonValue.ValueExists("DefaultRuntimeContextDevice"))
  {
    m_defaultRuntimeContextDevice = jsonValue.GetString("DefaultRuntimeContextDevice");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("ManifestOverridesPayload"))
  {
    m_manifestOverridesPayload = jsonValue.GetObject("ManifestOverridesPayload");

  }

  if(jsonValue.ValueExists("ManifestPayload"))
  {
    m_manifestPayload = jsonValue.GetObject("ManifestPayload");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
