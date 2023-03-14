/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ImportClientBrandingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ImportClientBrandingResult::ImportClientBrandingResult()
{
}

ImportClientBrandingResult::ImportClientBrandingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ImportClientBrandingResult& ImportClientBrandingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeviceTypeWindows"))
  {
    m_deviceTypeWindows = jsonValue.GetObject("DeviceTypeWindows");

  }

  if(jsonValue.ValueExists("DeviceTypeOsx"))
  {
    m_deviceTypeOsx = jsonValue.GetObject("DeviceTypeOsx");

  }

  if(jsonValue.ValueExists("DeviceTypeAndroid"))
  {
    m_deviceTypeAndroid = jsonValue.GetObject("DeviceTypeAndroid");

  }

  if(jsonValue.ValueExists("DeviceTypeIos"))
  {
    m_deviceTypeIos = jsonValue.GetObject("DeviceTypeIos");

  }

  if(jsonValue.ValueExists("DeviceTypeLinux"))
  {
    m_deviceTypeLinux = jsonValue.GetObject("DeviceTypeLinux");

  }

  if(jsonValue.ValueExists("DeviceTypeWeb"))
  {
    m_deviceTypeWeb = jsonValue.GetObject("DeviceTypeWeb");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
