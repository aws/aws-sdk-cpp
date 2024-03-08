/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/TokenExchangeGrant.h>
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

TokenExchangeGrant::TokenExchangeGrant()
{
}

TokenExchangeGrant::TokenExchangeGrant(JsonView jsonValue)
{
  *this = jsonValue;
}

TokenExchangeGrant& TokenExchangeGrant::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue TokenExchangeGrant::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
