/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/EncryptionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

EncryptionConfig::EncryptionConfig() : 
    m_keyIdHasBeenSet(false),
    m_status(EncryptionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(EncryptionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

EncryptionConfig::EncryptionConfig(JsonView jsonValue) : 
    m_keyIdHasBeenSet(false),
    m_status(EncryptionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(EncryptionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionConfig& EncryptionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

    m_keyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EncryptionStatusMapper::GetEncryptionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EncryptionStatusMapper::GetNameForEncryptionStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EncryptionTypeMapper::GetNameForEncryptionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
