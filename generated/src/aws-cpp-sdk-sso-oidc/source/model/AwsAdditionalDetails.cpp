/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/AwsAdditionalDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOOIDC
{
namespace Model
{

AwsAdditionalDetails::AwsAdditionalDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsAdditionalDetails& AwsAdditionalDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identityContext"))
  {
    m_identityContext = jsonValue.GetString("identityContext");
    m_identityContextHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsAdditionalDetails::Jsonize() const
{
  JsonValue payload;

  if(m_identityContextHasBeenSet)
  {
   payload.WithString("identityContext", m_identityContext);

  }

  return payload;
}

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
