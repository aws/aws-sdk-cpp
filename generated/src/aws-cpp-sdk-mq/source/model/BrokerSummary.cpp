/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/BrokerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

BrokerSummary::BrokerSummary() : 
    m_brokerArnHasBeenSet(false),
    m_brokerIdHasBeenSet(false),
    m_brokerNameHasBeenSet(false),
    m_brokerState(BrokerState::NOT_SET),
    m_brokerStateHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_deploymentMode(DeploymentMode::NOT_SET),
    m_deploymentModeHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_hostInstanceTypeHasBeenSet(false)
{
}

BrokerSummary::BrokerSummary(JsonView jsonValue) : 
    m_brokerArnHasBeenSet(false),
    m_brokerIdHasBeenSet(false),
    m_brokerNameHasBeenSet(false),
    m_brokerState(BrokerState::NOT_SET),
    m_brokerStateHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_deploymentMode(DeploymentMode::NOT_SET),
    m_deploymentModeHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_hostInstanceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

BrokerSummary& BrokerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("brokerArn"))
  {
    m_brokerArn = jsonValue.GetString("brokerArn");

    m_brokerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("brokerId"))
  {
    m_brokerId = jsonValue.GetString("brokerId");

    m_brokerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("brokerName"))
  {
    m_brokerName = jsonValue.GetString("brokerName");

    m_brokerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("brokerState"))
  {
    m_brokerState = BrokerStateMapper::GetBrokerStateForName(jsonValue.GetString("brokerState"));

    m_brokerStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetString("created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentMode"))
  {
    m_deploymentMode = DeploymentModeMapper::GetDeploymentModeForName(jsonValue.GetString("deploymentMode"));

    m_deploymentModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineType"))
  {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));

    m_engineTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostInstanceType"))
  {
    m_hostInstanceType = jsonValue.GetString("hostInstanceType");

    m_hostInstanceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue BrokerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_brokerArnHasBeenSet)
  {
   payload.WithString("brokerArn", m_brokerArn);

  }

  if(m_brokerIdHasBeenSet)
  {
   payload.WithString("brokerId", m_brokerId);

  }

  if(m_brokerNameHasBeenSet)
  {
   payload.WithString("brokerName", m_brokerName);

  }

  if(m_brokerStateHasBeenSet)
  {
   payload.WithString("brokerState", BrokerStateMapper::GetNameForBrokerState(m_brokerState));
  }

  if(m_createdHasBeenSet)
  {
   payload.WithString("created", m_created.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_deploymentModeHasBeenSet)
  {
   payload.WithString("deploymentMode", DeploymentModeMapper::GetNameForDeploymentMode(m_deploymentMode));
  }

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("engineType", EngineTypeMapper::GetNameForEngineType(m_engineType));
  }

  if(m_hostInstanceTypeHasBeenSet)
  {
   payload.WithString("hostInstanceType", m_hostInstanceType);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
