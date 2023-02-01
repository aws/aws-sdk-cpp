/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/StartAppResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SimSpaceWeaver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartAppResult::StartAppResult()
{
}

StartAppResult::StartAppResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartAppResult& StartAppResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Simulation"))
  {
    m_simulation = jsonValue.GetString("Simulation");

  }



  return *this;
}
