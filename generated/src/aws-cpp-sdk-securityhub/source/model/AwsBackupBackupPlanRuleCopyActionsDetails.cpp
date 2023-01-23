/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsBackupBackupPlanRuleCopyActionsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsBackupBackupPlanRuleCopyActionsDetails::AwsBackupBackupPlanRuleCopyActionsDetails() : 
    m_destinationBackupVaultArnHasBeenSet(false),
    m_lifecycleHasBeenSet(false)
{
}

AwsBackupBackupPlanRuleCopyActionsDetails::AwsBackupBackupPlanRuleCopyActionsDetails(JsonView jsonValue) : 
    m_destinationBackupVaultArnHasBeenSet(false),
    m_lifecycleHasBeenSet(false)
{
  *this = jsonValue;
}

AwsBackupBackupPlanRuleCopyActionsDetails& AwsBackupBackupPlanRuleCopyActionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationBackupVaultArn"))
  {
    m_destinationBackupVaultArn = jsonValue.GetString("DestinationBackupVaultArn");

    m_destinationBackupVaultArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = jsonValue.GetObject("Lifecycle");

    m_lifecycleHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsBackupBackupPlanRuleCopyActionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_destinationBackupVaultArnHasBeenSet)
  {
   payload.WithString("DestinationBackupVaultArn", m_destinationBackupVaultArn);

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithObject("Lifecycle", m_lifecycle.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
