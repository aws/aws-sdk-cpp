/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/PackageEncryptionOptions.h>
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

PackageEncryptionOptions::PackageEncryptionOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

PackageEncryptionOptions& PackageEncryptionOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsKeyIdentifier"))
  {
    m_kmsKeyIdentifier = jsonValue.GetString("KmsKeyIdentifier");
    m_kmsKeyIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionEnabled"))
  {
    m_encryptionEnabled = jsonValue.GetBool("EncryptionEnabled");
    m_encryptionEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue PackageEncryptionOptions::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdentifierHasBeenSet)
  {
   payload.WithString("KmsKeyIdentifier", m_kmsKeyIdentifier);

  }

  if(m_encryptionEnabledHasBeenSet)
  {
   payload.WithBool("EncryptionEnabled", m_encryptionEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
