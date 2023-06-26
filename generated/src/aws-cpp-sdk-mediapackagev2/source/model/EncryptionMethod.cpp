/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/EncryptionMethod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

EncryptionMethod::EncryptionMethod() : 
    m_tsEncryptionMethod(TsEncryptionMethod::NOT_SET),
    m_tsEncryptionMethodHasBeenSet(false),
    m_cmafEncryptionMethod(CmafEncryptionMethod::NOT_SET),
    m_cmafEncryptionMethodHasBeenSet(false)
{
}

EncryptionMethod::EncryptionMethod(JsonView jsonValue) : 
    m_tsEncryptionMethod(TsEncryptionMethod::NOT_SET),
    m_tsEncryptionMethodHasBeenSet(false),
    m_cmafEncryptionMethod(CmafEncryptionMethod::NOT_SET),
    m_cmafEncryptionMethodHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionMethod& EncryptionMethod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TsEncryptionMethod"))
  {
    m_tsEncryptionMethod = TsEncryptionMethodMapper::GetTsEncryptionMethodForName(jsonValue.GetString("TsEncryptionMethod"));

    m_tsEncryptionMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CmafEncryptionMethod"))
  {
    m_cmafEncryptionMethod = CmafEncryptionMethodMapper::GetCmafEncryptionMethodForName(jsonValue.GetString("CmafEncryptionMethod"));

    m_cmafEncryptionMethodHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionMethod::Jsonize() const
{
  JsonValue payload;

  if(m_tsEncryptionMethodHasBeenSet)
  {
   payload.WithString("TsEncryptionMethod", TsEncryptionMethodMapper::GetNameForTsEncryptionMethod(m_tsEncryptionMethod));
  }

  if(m_cmafEncryptionMethodHasBeenSet)
  {
   payload.WithString("CmafEncryptionMethod", CmafEncryptionMethodMapper::GetNameForCmafEncryptionMethod(m_cmafEncryptionMethod));
  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
