/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/UpdateIamIdentityCenterConfigOptions.h>
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

UpdateIamIdentityCenterConfigOptions::UpdateIamIdentityCenterConfigOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateIamIdentityCenterConfigOptions& UpdateIamIdentityCenterConfigOptions::operator =(JsonView jsonValue)
{
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

JsonValue UpdateIamIdentityCenterConfigOptions::Jsonize() const
{
  JsonValue payload;

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
