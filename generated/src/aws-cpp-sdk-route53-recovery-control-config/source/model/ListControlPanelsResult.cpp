/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/ListControlPanelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53RecoveryControlConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListControlPanelsResult::ListControlPanelsResult()
{
}

ListControlPanelsResult::ListControlPanelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListControlPanelsResult& ListControlPanelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ControlPanels"))
  {
    Aws::Utils::Array<JsonView> controlPanelsJsonList = jsonValue.GetArray("ControlPanels");
    for(unsigned controlPanelsIndex = 0; controlPanelsIndex < controlPanelsJsonList.GetLength(); ++controlPanelsIndex)
    {
      m_controlPanels.push_back(controlPanelsJsonList[controlPanelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
