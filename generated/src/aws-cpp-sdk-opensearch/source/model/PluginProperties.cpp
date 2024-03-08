/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/PluginProperties.h>
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

PluginProperties::PluginProperties() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_classNameHasBeenSet(false),
    m_uncompressedSizeInBytes(0),
    m_uncompressedSizeInBytesHasBeenSet(false)
{
}

PluginProperties::PluginProperties(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_classNameHasBeenSet(false),
    m_uncompressedSizeInBytes(0),
    m_uncompressedSizeInBytesHasBeenSet(false)
{
  *this = jsonValue;
}

PluginProperties& PluginProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClassName"))
  {
    m_className = jsonValue.GetString("ClassName");

    m_classNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UncompressedSizeInBytes"))
  {
    m_uncompressedSizeInBytes = jsonValue.GetInt64("UncompressedSizeInBytes");

    m_uncompressedSizeInBytesHasBeenSet = true;
  }

  return *this;
}

JsonValue PluginProperties::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_classNameHasBeenSet)
  {
   payload.WithString("ClassName", m_className);

  }

  if(m_uncompressedSizeInBytesHasBeenSet)
  {
   payload.WithInt64("UncompressedSizeInBytes", m_uncompressedSizeInBytes);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
