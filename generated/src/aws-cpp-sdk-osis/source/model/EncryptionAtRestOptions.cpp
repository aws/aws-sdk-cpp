/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/EncryptionAtRestOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OSIS
{
namespace Model
{

EncryptionAtRestOptions::EncryptionAtRestOptions() : 
    m_kmsKeyArnHasBeenSet(false)
{
}

EncryptionAtRestOptions::EncryptionAtRestOptions(JsonView jsonValue) : 
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionAtRestOptions& EncryptionAtRestOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionAtRestOptions::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace OSIS
} // namespace Aws
