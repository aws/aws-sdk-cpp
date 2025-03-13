/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/KeyStoreAccessOption.h>
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

KeyStoreAccessOption::KeyStoreAccessOption(JsonView jsonValue)
{
  *this = jsonValue;
}

KeyStoreAccessOption& KeyStoreAccessOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyAccessRoleArn"))
  {
    m_keyAccessRoleArn = jsonValue.GetString("KeyAccessRoleArn");
    m_keyAccessRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyStoreAccessEnabled"))
  {
    m_keyStoreAccessEnabled = jsonValue.GetBool("KeyStoreAccessEnabled");
    m_keyStoreAccessEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue KeyStoreAccessOption::Jsonize() const
{
  JsonValue payload;

  if(m_keyAccessRoleArnHasBeenSet)
  {
   payload.WithString("KeyAccessRoleArn", m_keyAccessRoleArn);

  }

  if(m_keyStoreAccessEnabledHasBeenSet)
  {
   payload.WithBool("KeyStoreAccessEnabled", m_keyStoreAccessEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
