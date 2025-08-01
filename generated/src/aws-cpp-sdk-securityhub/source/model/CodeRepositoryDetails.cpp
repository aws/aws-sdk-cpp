/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/CodeRepositoryDetails.h>
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

CodeRepositoryDetails::CodeRepositoryDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeRepositoryDetails& CodeRepositoryDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProviderType"))
  {
    m_providerType = jsonValue.GetString("ProviderType");
    m_providerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProjectName"))
  {
    m_projectName = jsonValue.GetString("ProjectName");
    m_projectNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CodeSecurityIntegrationArn"))
  {
    m_codeSecurityIntegrationArn = jsonValue.GetString("CodeSecurityIntegrationArn");
    m_codeSecurityIntegrationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeRepositoryDetails::Jsonize() const
{
  JsonValue payload;

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("ProviderType", m_providerType);

  }

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("ProjectName", m_projectName);

  }

  if(m_codeSecurityIntegrationArnHasBeenSet)
  {
   payload.WithString("CodeSecurityIntegrationArn", m_codeSecurityIntegrationArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
