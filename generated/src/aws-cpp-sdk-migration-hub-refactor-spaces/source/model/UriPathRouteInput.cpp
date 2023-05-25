/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/UriPathRouteInput.h>
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

UriPathRouteInput::UriPathRouteInput() : 
    m_activationState(RouteActivationState::NOT_SET),
    m_activationStateHasBeenSet(false),
    m_includeChildPaths(false),
    m_includeChildPathsHasBeenSet(false),
    m_methodsHasBeenSet(false),
    m_sourcePathHasBeenSet(false)
{
}

UriPathRouteInput::UriPathRouteInput(JsonView jsonValue) : 
    m_activationState(RouteActivationState::NOT_SET),
    m_activationStateHasBeenSet(false),
    m_includeChildPaths(false),
    m_includeChildPathsHasBeenSet(false),
    m_methodsHasBeenSet(false),
    m_sourcePathHasBeenSet(false)
{
  *this = jsonValue;
}

UriPathRouteInput& UriPathRouteInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActivationState"))
  {
    m_activationState = RouteActivationStateMapper::GetRouteActivationStateForName(jsonValue.GetString("ActivationState"));

    m_activationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeChildPaths"))
  {
    m_includeChildPaths = jsonValue.GetBool("IncludeChildPaths");

    m_includeChildPathsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Methods"))
  {
    Aws::Utils::Array<JsonView> methodsJsonList = jsonValue.GetArray("Methods");
    for(unsigned methodsIndex = 0; methodsIndex < methodsJsonList.GetLength(); ++methodsIndex)
    {
      m_methods.push_back(HttpMethodMapper::GetHttpMethodForName(methodsJsonList[methodsIndex].AsString()));
    }
    m_methodsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourcePath"))
  {
    m_sourcePath = jsonValue.GetString("SourcePath");

    m_sourcePathHasBeenSet = true;
  }

  return *this;
}

JsonValue UriPathRouteInput::Jsonize() const
{
  JsonValue payload;

  if(m_activationStateHasBeenSet)
  {
   payload.WithString("ActivationState", RouteActivationStateMapper::GetNameForRouteActivationState(m_activationState));
  }

  if(m_includeChildPathsHasBeenSet)
  {
   payload.WithBool("IncludeChildPaths", m_includeChildPaths);

  }

  if(m_methodsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> methodsJsonList(m_methods.size());
   for(unsigned methodsIndex = 0; methodsIndex < methodsJsonList.GetLength(); ++methodsIndex)
   {
     methodsJsonList[methodsIndex].AsString(HttpMethodMapper::GetNameForHttpMethod(m_methods[methodsIndex]));
   }
   payload.WithArray("Methods", std::move(methodsJsonList));

  }

  if(m_sourcePathHasBeenSet)
  {
   payload.WithString("SourcePath", m_sourcePath);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
