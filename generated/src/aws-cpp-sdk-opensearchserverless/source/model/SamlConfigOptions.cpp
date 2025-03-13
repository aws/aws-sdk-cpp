/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/SamlConfigOptions.h>
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

SamlConfigOptions::SamlConfigOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

SamlConfigOptions& SamlConfigOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetString("metadata");
    m_metadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userAttribute"))
  {
    m_userAttribute = jsonValue.GetString("userAttribute");
    m_userAttributeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("groupAttribute"))
  {
    m_groupAttribute = jsonValue.GetString("groupAttribute");
    m_groupAttributeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("openSearchServerlessEntityId"))
  {
    m_openSearchServerlessEntityId = jsonValue.GetString("openSearchServerlessEntityId");
    m_openSearchServerlessEntityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionTimeout"))
  {
    m_sessionTimeout = jsonValue.GetInteger("sessionTimeout");
    m_sessionTimeoutHasBeenSet = true;
  }
  return *this;
}

JsonValue SamlConfigOptions::Jsonize() const
{
  JsonValue payload;

  if(m_metadataHasBeenSet)
  {
   payload.WithString("metadata", m_metadata);

  }

  if(m_userAttributeHasBeenSet)
  {
   payload.WithString("userAttribute", m_userAttribute);

  }

  if(m_groupAttributeHasBeenSet)
  {
   payload.WithString("groupAttribute", m_groupAttribute);

  }

  if(m_openSearchServerlessEntityIdHasBeenSet)
  {
   payload.WithString("openSearchServerlessEntityId", m_openSearchServerlessEntityId);

  }

  if(m_sessionTimeoutHasBeenSet)
  {
   payload.WithInteger("sessionTimeout", m_sessionTimeout);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
