/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/PrivateKeyFlagsV3.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

PrivateKeyFlagsV3::PrivateKeyFlagsV3() : 
    m_clientVersion(ClientCompatibilityV3::NOT_SET),
    m_clientVersionHasBeenSet(false),
    m_exportableKey(false),
    m_exportableKeyHasBeenSet(false),
    m_requireAlternateSignatureAlgorithm(false),
    m_requireAlternateSignatureAlgorithmHasBeenSet(false),
    m_strongKeyProtectionRequired(false),
    m_strongKeyProtectionRequiredHasBeenSet(false)
{
}

PrivateKeyFlagsV3::PrivateKeyFlagsV3(JsonView jsonValue) : 
    m_clientVersion(ClientCompatibilityV3::NOT_SET),
    m_clientVersionHasBeenSet(false),
    m_exportableKey(false),
    m_exportableKeyHasBeenSet(false),
    m_requireAlternateSignatureAlgorithm(false),
    m_requireAlternateSignatureAlgorithmHasBeenSet(false),
    m_strongKeyProtectionRequired(false),
    m_strongKeyProtectionRequiredHasBeenSet(false)
{
  *this = jsonValue;
}

PrivateKeyFlagsV3& PrivateKeyFlagsV3::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientVersion"))
  {
    m_clientVersion = ClientCompatibilityV3Mapper::GetClientCompatibilityV3ForName(jsonValue.GetString("ClientVersion"));

    m_clientVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportableKey"))
  {
    m_exportableKey = jsonValue.GetBool("ExportableKey");

    m_exportableKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequireAlternateSignatureAlgorithm"))
  {
    m_requireAlternateSignatureAlgorithm = jsonValue.GetBool("RequireAlternateSignatureAlgorithm");

    m_requireAlternateSignatureAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StrongKeyProtectionRequired"))
  {
    m_strongKeyProtectionRequired = jsonValue.GetBool("StrongKeyProtectionRequired");

    m_strongKeyProtectionRequiredHasBeenSet = true;
  }

  return *this;
}

JsonValue PrivateKeyFlagsV3::Jsonize() const
{
  JsonValue payload;

  if(m_clientVersionHasBeenSet)
  {
   payload.WithString("ClientVersion", ClientCompatibilityV3Mapper::GetNameForClientCompatibilityV3(m_clientVersion));
  }

  if(m_exportableKeyHasBeenSet)
  {
   payload.WithBool("ExportableKey", m_exportableKey);

  }

  if(m_requireAlternateSignatureAlgorithmHasBeenSet)
  {
   payload.WithBool("RequireAlternateSignatureAlgorithm", m_requireAlternateSignatureAlgorithm);

  }

  if(m_strongKeyProtectionRequiredHasBeenSet)
  {
   payload.WithBool("StrongKeyProtectionRequired", m_strongKeyProtectionRequired);

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
