/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/IamIdentityCenterConfigOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

IamIdentityCenterConfigOptions::IamIdentityCenterConfigOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

IamIdentityCenterConfigOptions& IamIdentityCenterConfigOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceArn"))
  {
    m_instanceArn = jsonValue.GetString("instanceArn");
    m_instanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applicationArn"))
  {
    m_applicationArn = jsonValue.GetString("applicationArn");
    m_applicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applicationName"))
  {
    m_applicationName = jsonValue.GetString("applicationName");
    m_applicationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applicationDescription"))
  {
    m_applicationDescription = jsonValue.GetString("applicationDescription");
    m_applicationDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userAttribute"))
  {
    m_userAttribute = IamIdentityCenterUserAttributeMapper::GetIamIdentityCenterUserAttributeForName(jsonValue.GetString("userAttribute"));
    m_userAttributeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("groupAttribute"))
  {
    m_groupAttribute = IamIdentityCenterGroupAttributeMapper::GetIamIdentityCenterGroupAttributeForName(jsonValue.GetString("groupAttribute"));
    m_groupAttributeHasBeenSet = true;
  }
  return *this;
}

JsonValue IamIdentityCenterConfigOptions::Jsonize() const
{
  JsonValue payload;

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("instanceArn", m_instanceArn);

  }

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("applicationArn", m_applicationArn);

  }

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("applicationName", m_applicationName);

  }

  if(m_applicationDescriptionHasBeenSet)
  {
   payload.WithString("applicationDescription", m_applicationDescription);

  }

  if(m_userAttributeHasBeenSet)
  {
   payload.WithString("userAttribute", IamIdentityCenterUserAttributeMapper::GetNameForIamIdentityCenterUserAttribute(m_userAttribute));
  }

  if(m_groupAttributeHasBeenSet)
  {
   payload.WithString("groupAttribute", IamIdentityCenterGroupAttributeMapper::GetNameForIamIdentityCenterGroupAttribute(m_groupAttribute));
  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
