/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/AccountSettings.h>
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

AccountSettings::AccountSettings() : 
    m_pipelineCodebuildRoleArnHasBeenSet(false),
    m_pipelineProvisioningRepositoryHasBeenSet(false),
    m_pipelineServiceRoleArnHasBeenSet(false)
{
}

AccountSettings::AccountSettings(JsonView jsonValue) : 
    m_pipelineCodebuildRoleArnHasBeenSet(false),
    m_pipelineProvisioningRepositoryHasBeenSet(false),
    m_pipelineServiceRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

AccountSettings& AccountSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pipelineCodebuildRoleArn"))
  {
    m_pipelineCodebuildRoleArn = jsonValue.GetString("pipelineCodebuildRoleArn");

    m_pipelineCodebuildRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineProvisioningRepository"))
  {
    m_pipelineProvisioningRepository = jsonValue.GetObject("pipelineProvisioningRepository");

    m_pipelineProvisioningRepositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineServiceRoleArn"))
  {
    m_pipelineServiceRoleArn = jsonValue.GetString("pipelineServiceRoleArn");

    m_pipelineServiceRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountSettings::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineCodebuildRoleArnHasBeenSet)
  {
   payload.WithString("pipelineCodebuildRoleArn", m_pipelineCodebuildRoleArn);

  }

  if(m_pipelineProvisioningRepositoryHasBeenSet)
  {
   payload.WithObject("pipelineProvisioningRepository", m_pipelineProvisioningRepository.Jsonize());

  }

  if(m_pipelineServiceRoleArnHasBeenSet)
  {
   payload.WithString("pipelineServiceRoleArn", m_pipelineServiceRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
