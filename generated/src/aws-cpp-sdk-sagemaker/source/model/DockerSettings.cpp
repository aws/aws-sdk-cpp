/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DockerSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DockerSettings::DockerSettings() : 
    m_enableDockerAccess(FeatureStatus::NOT_SET),
    m_enableDockerAccessHasBeenSet(false),
    m_vpcOnlyTrustedAccountsHasBeenSet(false)
{
}

DockerSettings::DockerSettings(JsonView jsonValue) : 
    m_enableDockerAccess(FeatureStatus::NOT_SET),
    m_enableDockerAccessHasBeenSet(false),
    m_vpcOnlyTrustedAccountsHasBeenSet(false)
{
  *this = jsonValue;
}

DockerSettings& DockerSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableDockerAccess"))
  {
    m_enableDockerAccess = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("EnableDockerAccess"));

    m_enableDockerAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcOnlyTrustedAccounts"))
  {
    Aws::Utils::Array<JsonView> vpcOnlyTrustedAccountsJsonList = jsonValue.GetArray("VpcOnlyTrustedAccounts");
    for(unsigned vpcOnlyTrustedAccountsIndex = 0; vpcOnlyTrustedAccountsIndex < vpcOnlyTrustedAccountsJsonList.GetLength(); ++vpcOnlyTrustedAccountsIndex)
    {
      m_vpcOnlyTrustedAccounts.push_back(vpcOnlyTrustedAccountsJsonList[vpcOnlyTrustedAccountsIndex].AsString());
    }
    m_vpcOnlyTrustedAccountsHasBeenSet = true;
  }

  return *this;
}

JsonValue DockerSettings::Jsonize() const
{
  JsonValue payload;

  if(m_enableDockerAccessHasBeenSet)
  {
   payload.WithString("EnableDockerAccess", FeatureStatusMapper::GetNameForFeatureStatus(m_enableDockerAccess));
  }

  if(m_vpcOnlyTrustedAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcOnlyTrustedAccountsJsonList(m_vpcOnlyTrustedAccounts.size());
   for(unsigned vpcOnlyTrustedAccountsIndex = 0; vpcOnlyTrustedAccountsIndex < vpcOnlyTrustedAccountsJsonList.GetLength(); ++vpcOnlyTrustedAccountsIndex)
   {
     vpcOnlyTrustedAccountsJsonList[vpcOnlyTrustedAccountsIndex].AsString(m_vpcOnlyTrustedAccounts[vpcOnlyTrustedAccountsIndex]);
   }
   payload.WithArray("VpcOnlyTrustedAccounts", std::move(vpcOnlyTrustedAccountsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
