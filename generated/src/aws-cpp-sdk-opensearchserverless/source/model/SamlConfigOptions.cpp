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

SamlConfigOptions::SamlConfigOptions() : 
    m_groupAttributeHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_sessionTimeout(0),
    m_sessionTimeoutHasBeenSet(false),
    m_userAttributeHasBeenSet(false)
{
}

SamlConfigOptions::SamlConfigOptions(JsonView jsonValue) : 
    m_groupAttributeHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_sessionTimeout(0),
    m_sessionTimeoutHasBeenSet(false),
    m_userAttributeHasBeenSet(false)
{
  *this = jsonValue;
}

SamlConfigOptions& SamlConfigOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupAttribute"))
  {
    m_groupAttribute = jsonValue.GetString("groupAttribute");

    m_groupAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetString("metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionTimeout"))
  {
    m_sessionTimeout = jsonValue.GetInteger("sessionTimeout");

    m_sessionTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userAttribute"))
  {
    m_userAttribute = jsonValue.GetString("userAttribute");

    m_userAttributeHasBeenSet = true;
  }

  return *this;
}

JsonValue SamlConfigOptions::Jsonize() const
{
  JsonValue payload;

  if(m_groupAttributeHasBeenSet)
  {
   payload.WithString("groupAttribute", m_groupAttribute);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("metadata", m_metadata);

  }

  if(m_sessionTimeoutHasBeenSet)
  {
   payload.WithInteger("sessionTimeout", m_sessionTimeout);

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
