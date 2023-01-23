/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ListInputDevicesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInputDevicesResult::ListInputDevicesResult()
{
}

ListInputDevicesResult::ListInputDevicesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInputDevicesResult& ListInputDevicesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("inputDevices"))
  {
    Aws::Utils::Array<JsonView> inputDevicesJsonList = jsonValue.GetArray("inputDevices");
    for(unsigned inputDevicesIndex = 0; inputDevicesIndex < inputDevicesJsonList.GetLength(); ++inputDevicesIndex)
    {
      m_inputDevices.push_back(inputDevicesJsonList[inputDevicesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
