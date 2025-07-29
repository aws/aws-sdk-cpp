/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/IamFederationConfigOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

IamFederationConfigOptions::IamFederationConfigOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

IamFederationConfigOptions& IamFederationConfigOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupAttribute"))
  {
    m_groupAttribute = jsonValue.GetString("groupAttribute");
    m_groupAttributeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userAttribute"))
  {
    m_userAttribute = jsonValue.GetString("userAttribute");
    m_userAttributeHasBeenSet = true;
  }
  return *this;
}

JsonValue IamFederationConfigOptions::Jsonize() const
{
  JsonValue payload;

  if(m_groupAttributeHasBeenSet)
  {
   payload.WithString("groupAttribute", m_groupAttribute);

  }

  if(m_userAttributeHasBeenSet)
  {
   payload.WithString("userAttribute", m_userAttribute);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
