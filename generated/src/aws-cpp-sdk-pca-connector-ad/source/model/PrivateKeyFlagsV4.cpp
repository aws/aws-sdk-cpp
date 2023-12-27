/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/PrivateKeyFlagsV4.h>
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

PrivateKeyFlagsV4::PrivateKeyFlagsV4() : 
    m_clientVersion(ClientCompatibilityV4::NOT_SET),
    m_clientVersionHasBeenSet(false),
    m_exportableKey(false),
    m_exportableKeyHasBeenSet(false),
    m_requireAlternateSignatureAlgorithm(false),
    m_requireAlternateSignatureAlgorithmHasBeenSet(false),
    m_requireSameKeyRenewal(false),
    m_requireSameKeyRenewalHasBeenSet(false),
    m_strongKeyProtectionRequired(false),
    m_strongKeyProtectionRequiredHasBeenSet(false),
    m_useLegacyProvider(false),
    m_useLegacyProviderHasBeenSet(false)
{
}

PrivateKeyFlagsV4::PrivateKeyFlagsV4(JsonView jsonValue) : 
    m_clientVersion(ClientCompatibilityV4::NOT_SET),
    m_clientVersionHasBeenSet(false),
    m_exportableKey(false),
    m_exportableKeyHasBeenSet(false),
    m_requireAlternateSignatureAlgorithm(false),
    m_requireAlternateSignatureAlgorithmHasBeenSet(false),
    m_requireSameKeyRenewal(false),
    m_requireSameKeyRenewalHasBeenSet(false),
    m_strongKeyProtectionRequired(false),
    m_strongKeyProtectionRequiredHasBeenSet(false),
    m_useLegacyProvider(false),
    m_useLegacyProviderHasBeenSet(false)
{
  *this = jsonValue;
}

PrivateKeyFlagsV4& PrivateKeyFlagsV4::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientVersion"))
  {
    m_clientVersion = ClientCompatibilityV4Mapper::GetClientCompatibilityV4ForName(jsonValue.GetString("ClientVersion"));

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

  if(jsonValue.ValueExists("RequireSameKeyRenewal"))
  {
    m_requireSameKeyRenewal = jsonValue.GetBool("RequireSameKeyRenewal");

    m_requireSameKeyRenewalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StrongKeyProtectionRequired"))
  {
    m_strongKeyProtectionRequired = jsonValue.GetBool("StrongKeyProtectionRequired");

    m_strongKeyProtectionRequiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseLegacyProvider"))
  {
    m_useLegacyProvider = jsonValue.GetBool("UseLegacyProvider");

    m_useLegacyProviderHasBeenSet = true;
  }

  return *this;
}

JsonValue PrivateKeyFlagsV4::Jsonize() const
{
  JsonValue payload;

  if(m_clientVersionHasBeenSet)
  {
   payload.WithString("ClientVersion", ClientCompatibilityV4Mapper::GetNameForClientCompatibilityV4(m_clientVersion));
  }

  if(m_exportableKeyHasBeenSet)
  {
   payload.WithBool("ExportableKey", m_exportableKey);

  }

  if(m_requireAlternateSignatureAlgorithmHasBeenSet)
  {
   payload.WithBool("RequireAlternateSignatureAlgorithm", m_requireAlternateSignatureAlgorithm);

  }

  if(m_requireSameKeyRenewalHasBeenSet)
  {
   payload.WithBool("RequireSameKeyRenewal", m_requireSameKeyRenewal);

  }

  if(m_strongKeyProtectionRequiredHasBeenSet)
  {
   payload.WithBool("StrongKeyProtectionRequired", m_strongKeyProtectionRequired);

  }

  if(m_useLegacyProviderHasBeenSet)
  {
   payload.WithBool("UseLegacyProvider", m_useLegacyProvider);

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
