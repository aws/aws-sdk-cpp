/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/TrustedTokenIssuerMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

TrustedTokenIssuerMetadata::TrustedTokenIssuerMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

TrustedTokenIssuerMetadata& TrustedTokenIssuerMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrustedTokenIssuerArn"))
  {
    m_trustedTokenIssuerArn = jsonValue.GetString("TrustedTokenIssuerArn");
    m_trustedTokenIssuerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrustedTokenIssuerType"))
  {
    m_trustedTokenIssuerType = TrustedTokenIssuerTypeMapper::GetTrustedTokenIssuerTypeForName(jsonValue.GetString("TrustedTokenIssuerType"));
    m_trustedTokenIssuerTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustedTokenIssuerMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_trustedTokenIssuerArnHasBeenSet)
  {
   payload.WithString("TrustedTokenIssuerArn", m_trustedTokenIssuerArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_trustedTokenIssuerTypeHasBeenSet)
  {
   payload.WithString("TrustedTokenIssuerType", TrustedTokenIssuerTypeMapper::GetNameForTrustedTokenIssuerType(m_trustedTokenIssuerType));
  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
