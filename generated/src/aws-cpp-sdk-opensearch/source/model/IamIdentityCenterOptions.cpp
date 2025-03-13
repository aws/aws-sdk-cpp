/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/IamIdentityCenterOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

IamIdentityCenterOptions::IamIdentityCenterOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

IamIdentityCenterOptions& IamIdentityCenterOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iamIdentityCenterInstanceArn"))
  {
    m_iamIdentityCenterInstanceArn = jsonValue.GetString("iamIdentityCenterInstanceArn");
    m_iamIdentityCenterInstanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iamRoleForIdentityCenterApplicationArn"))
  {
    m_iamRoleForIdentityCenterApplicationArn = jsonValue.GetString("iamRoleForIdentityCenterApplicationArn");
    m_iamRoleForIdentityCenterApplicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iamIdentityCenterApplicationArn"))
  {
    m_iamIdentityCenterApplicationArn = jsonValue.GetString("iamIdentityCenterApplicationArn");
    m_iamIdentityCenterApplicationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IamIdentityCenterOptions::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_iamIdentityCenterInstanceArnHasBeenSet)
  {
   payload.WithString("iamIdentityCenterInstanceArn", m_iamIdentityCenterInstanceArn);

  }

  if(m_iamRoleForIdentityCenterApplicationArnHasBeenSet)
  {
   payload.WithString("iamRoleForIdentityCenterApplicationArn", m_iamRoleForIdentityCenterApplicationArn);

  }

  if(m_iamIdentityCenterApplicationArnHasBeenSet)
  {
   payload.WithString("iamIdentityCenterApplicationArn", m_iamIdentityCenterApplicationArn);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
