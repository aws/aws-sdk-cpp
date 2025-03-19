/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/EncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

EncryptionConfiguration::EncryptionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

EncryptionConfiguration& EncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsDataKeyReusePeriodSeconds"))
  {
    m_kmsDataKeyReusePeriodSeconds = jsonValue.GetInteger("kmsDataKeyReusePeriodSeconds");
    m_kmsDataKeyReusePeriodSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_kmsDataKeyReusePeriodSecondsHasBeenSet)
  {
   payload.WithInteger("kmsDataKeyReusePeriodSeconds", m_kmsDataKeyReusePeriodSeconds);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", EncryptionTypeMapper::GetNameForEncryptionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
