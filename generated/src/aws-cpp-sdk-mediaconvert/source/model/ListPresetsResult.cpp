/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ListPresetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPresetsResult::ListPresetsResult()
{
}

ListPresetsResult::ListPresetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPresetsResult& ListPresetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("presets"))
  {
    Aws::Utils::Array<JsonView> presetsJsonList = jsonValue.GetArray("presets");
    for(unsigned presetsIndex = 0; presetsIndex < presetsJsonList.GetLength(); ++presetsIndex)
    {
      m_presets.push_back(presetsJsonList[presetsIndex].AsObject());
    }
  }



  return *this;
}
