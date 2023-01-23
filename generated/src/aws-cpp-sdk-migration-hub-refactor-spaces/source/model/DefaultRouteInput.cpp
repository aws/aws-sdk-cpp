/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/DefaultRouteInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{

DefaultRouteInput::DefaultRouteInput() : 
    m_activationState(RouteActivationState::NOT_SET),
    m_activationStateHasBeenSet(false)
{
}

DefaultRouteInput::DefaultRouteInput(JsonView jsonValue) : 
    m_activationState(RouteActivationState::NOT_SET),
    m_activationStateHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultRouteInput& DefaultRouteInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActivationState"))
  {
    m_activationState = RouteActivationStateMapper::GetRouteActivationStateForName(jsonValue.GetString("ActivationState"));

    m_activationStateHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultRouteInput::Jsonize() const
{
  JsonValue payload;

  if(m_activationStateHasBeenSet)
  {
   payload.WithString("ActivationState", RouteActivationStateMapper::GetNameForRouteActivationState(m_activationState));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
