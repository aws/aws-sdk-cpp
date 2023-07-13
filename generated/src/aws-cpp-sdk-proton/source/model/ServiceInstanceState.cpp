/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ServiceInstanceState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

ServiceInstanceState::ServiceInstanceState() : 
    m_lastSuccessfulComponentDeploymentIdsHasBeenSet(false),
    m_lastSuccessfulEnvironmentDeploymentIdHasBeenSet(false),
    m_lastSuccessfulServicePipelineDeploymentIdHasBeenSet(false),
    m_specHasBeenSet(false),
    m_templateMajorVersionHasBeenSet(false),
    m_templateMinorVersionHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

ServiceInstanceState::ServiceInstanceState(JsonView jsonValue) : 
    m_lastSuccessfulComponentDeploymentIdsHasBeenSet(false),
    m_lastSuccessfulEnvironmentDeploymentIdHasBeenSet(false),
    m_lastSuccessfulServicePipelineDeploymentIdHasBeenSet(false),
    m_specHasBeenSet(false),
    m_templateMajorVersionHasBeenSet(false),
    m_templateMinorVersionHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceInstanceState& ServiceInstanceState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lastSuccessfulComponentDeploymentIds"))
  {
    Aws::Utils::Array<JsonView> lastSuccessfulComponentDeploymentIdsJsonList = jsonValue.GetArray("lastSuccessfulComponentDeploymentIds");
    for(unsigned lastSuccessfulComponentDeploymentIdsIndex = 0; lastSuccessfulComponentDeploymentIdsIndex < lastSuccessfulComponentDeploymentIdsJsonList.GetLength(); ++lastSuccessfulComponentDeploymentIdsIndex)
    {
      m_lastSuccessfulComponentDeploymentIds.push_back(lastSuccessfulComponentDeploymentIdsJsonList[lastSuccessfulComponentDeploymentIdsIndex].AsString());
    }
    m_lastSuccessfulComponentDeploymentIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastSuccessfulEnvironmentDeploymentId"))
  {
    m_lastSuccessfulEnvironmentDeploymentId = jsonValue.GetString("lastSuccessfulEnvironmentDeploymentId");

    m_lastSuccessfulEnvironmentDeploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastSuccessfulServicePipelineDeploymentId"))
  {
    m_lastSuccessfulServicePipelineDeploymentId = jsonValue.GetString("lastSuccessfulServicePipelineDeploymentId");

    m_lastSuccessfulServicePipelineDeploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spec"))
  {
    m_spec = jsonValue.GetString("spec");

    m_specHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateMajorVersion"))
  {
    m_templateMajorVersion = jsonValue.GetString("templateMajorVersion");

    m_templateMajorVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateMinorVersion"))
  {
    m_templateMinorVersion = jsonValue.GetString("templateMinorVersion");

    m_templateMinorVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = jsonValue.GetString("templateName");

    m_templateNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceInstanceState::Jsonize() const
{
  JsonValue payload;

  if(m_lastSuccessfulComponentDeploymentIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lastSuccessfulComponentDeploymentIdsJsonList(m_lastSuccessfulComponentDeploymentIds.size());
   for(unsigned lastSuccessfulComponentDeploymentIdsIndex = 0; lastSuccessfulComponentDeploymentIdsIndex < lastSuccessfulComponentDeploymentIdsJsonList.GetLength(); ++lastSuccessfulComponentDeploymentIdsIndex)
   {
     lastSuccessfulComponentDeploymentIdsJsonList[lastSuccessfulComponentDeploymentIdsIndex].AsString(m_lastSuccessfulComponentDeploymentIds[lastSuccessfulComponentDeploymentIdsIndex]);
   }
   payload.WithArray("lastSuccessfulComponentDeploymentIds", std::move(lastSuccessfulComponentDeploymentIdsJsonList));

  }

  if(m_lastSuccessfulEnvironmentDeploymentIdHasBeenSet)
  {
   payload.WithString("lastSuccessfulEnvironmentDeploymentId", m_lastSuccessfulEnvironmentDeploymentId);

  }

  if(m_lastSuccessfulServicePipelineDeploymentIdHasBeenSet)
  {
   payload.WithString("lastSuccessfulServicePipelineDeploymentId", m_lastSuccessfulServicePipelineDeploymentId);

  }

  if(m_specHasBeenSet)
  {
   payload.WithString("spec", m_spec);

  }

  if(m_templateMajorVersionHasBeenSet)
  {
   payload.WithString("templateMajorVersion", m_templateMajorVersion);

  }

  if(m_templateMinorVersionHasBeenSet)
  {
   payload.WithString("templateMinorVersion", m_templateMinorVersion);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
