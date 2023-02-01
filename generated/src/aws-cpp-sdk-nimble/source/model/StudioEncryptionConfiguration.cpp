/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StudioEncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

StudioEncryptionConfiguration::StudioEncryptionConfiguration() : 
    m_keyArnHasBeenSet(false),
    m_keyType(StudioEncryptionConfigurationKeyType::NOT_SET),
    m_keyTypeHasBeenSet(false)
{
}

StudioEncryptionConfiguration::StudioEncryptionConfiguration(JsonView jsonValue) : 
    m_keyArnHasBeenSet(false),
    m_keyType(StudioEncryptionConfigurationKeyType::NOT_SET),
    m_keyTypeHasBeenSet(false)
{
  *this = jsonValue;
}

StudioEncryptionConfiguration& StudioEncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("keyArn"))
  {
    m_keyArn = jsonValue.GetString("keyArn");

    m_keyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyType"))
  {
    m_keyType = StudioEncryptionConfigurationKeyTypeMapper::GetStudioEncryptionConfigurationKeyTypeForName(jsonValue.GetString("keyType"));

    m_keyTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue StudioEncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_keyArnHasBeenSet)
  {
   payload.WithString("keyArn", m_keyArn);

  }

  if(m_keyTypeHasBeenSet)
  {
   payload.WithString("keyType", StudioEncryptionConfigurationKeyTypeMapper::GetNameForStudioEncryptionConfigurationKeyType(m_keyType));
  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
