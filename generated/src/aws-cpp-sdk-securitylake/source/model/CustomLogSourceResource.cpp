/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CustomLogSourceResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

CustomLogSourceResource::CustomLogSourceResource() : 
    m_attributesHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceVersionHasBeenSet(false)
{
}

CustomLogSourceResource::CustomLogSourceResource(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceVersionHasBeenSet(false)
{
  *this = jsonValue;
}

CustomLogSourceResource& CustomLogSourceResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributes"))
  {
    m_attributes = jsonValue.GetObject("attributes");

    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provider"))
  {
    m_provider = jsonValue.GetObject("provider");

    m_providerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceName"))
  {
    m_sourceName = jsonValue.GetString("sourceName");

    m_sourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceVersion"))
  {
    m_sourceVersion = jsonValue.GetString("sourceVersion");

    m_sourceVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomLogSourceResource::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   payload.WithObject("attributes", m_attributes.Jsonize());

  }

  if(m_providerHasBeenSet)
  {
   payload.WithObject("provider", m_provider.Jsonize());

  }

  if(m_sourceNameHasBeenSet)
  {
   payload.WithString("sourceName", m_sourceName);

  }

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("sourceVersion", m_sourceVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
