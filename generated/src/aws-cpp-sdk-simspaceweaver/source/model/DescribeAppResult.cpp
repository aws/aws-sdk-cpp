/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/DescribeAppResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SimSpaceWeaver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAppResult::DescribeAppResult() : 
    m_status(SimulationAppStatus::NOT_SET),
    m_targetStatus(SimulationAppTargetStatus::NOT_SET)
{
}

DescribeAppResult::DescribeAppResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(SimulationAppStatus::NOT_SET),
    m_targetStatus(SimulationAppTargetStatus::NOT_SET)
{
  *this = result;
}

DescribeAppResult& DescribeAppResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

  }

  if(jsonValue.ValueExists("EndpointInfo"))
  {
    m_endpointInfo = jsonValue.GetObject("EndpointInfo");

  }

  if(jsonValue.ValueExists("LaunchOverrides"))
  {
    m_launchOverrides = jsonValue.GetObject("LaunchOverrides");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Simulation"))
  {
    m_simulation = jsonValue.GetString("Simulation");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SimulationAppStatusMapper::GetSimulationAppStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("TargetStatus"))
  {
    m_targetStatus = SimulationAppTargetStatusMapper::GetSimulationAppTargetStatusForName(jsonValue.GetString("TargetStatus"));

  }



  return *this;
}
