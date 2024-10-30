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

UpdateIamIdentityCenterConfigOptions::UpdateIamIdentityCenterConfigOptions() : 
    m_groupAttribute(IamIdentityCenterGroupAttribute::NOT_SET),
    m_groupAttributeHasBeenSet(false),
    m_userAttribute(IamIdentityCenterUserAttribute::NOT_SET),
    m_userAttributeHasBeenSet(false)
{
}

UpdateIamIdentityCenterConfigOptions::UpdateIamIdentityCenterConfigOptions(JsonView jsonValue)
  : UpdateIamIdentityCenterConfigOptions()
{
  *this = jsonValue;
}

UpdateIamIdentityCenterConfigOptions& UpdateIamIdentityCenterConfigOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupAttribute"))
  {
    m_groupAttribute = IamIdentityCenterGroupAttributeMapper::GetIamIdentityCenterGroupAttributeForName(jsonValue.GetString("groupAttribute"));

    m_groupAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userAttribute"))
  {
    m_userAttribute = IamIdentityCenterUserAttributeMapper::GetIamIdentityCenterUserAttributeForName(jsonValue.GetString("userAttribute"));

    m_userAttributeHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateIamIdentityCenterConfigOptions::Jsonize() const
{
  JsonValue payload;

  if(m_groupAttributeHasBeenSet)
  {
   payload.WithString("groupAttribute", IamIdentityCenterGroupAttributeMapper::GetNameForIamIdentityCenterGroupAttribute(m_groupAttribute));
  }

  if(m_userAttributeHasBeenSet)
  {
   payload.WithString("userAttribute", IamIdentityCenterUserAttributeMapper::GetNameForIamIdentityCenterUserAttribute(m_userAttribute));
  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
