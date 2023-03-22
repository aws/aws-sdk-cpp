/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AppInputSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

AppInputSource::AppInputSource() : 
    m_eksSourceClusterNamespaceHasBeenSet(false),
    m_importType(ResourceMappingType::NOT_SET),
    m_importTypeHasBeenSet(false),
    m_resourceCount(0),
    m_resourceCountHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_terraformSourceHasBeenSet(false)
{
}

AppInputSource::AppInputSource(JsonView jsonValue) : 
    m_eksSourceClusterNamespaceHasBeenSet(false),
    m_importType(ResourceMappingType::NOT_SET),
    m_importTypeHasBeenSet(false),
    m_resourceCount(0),
    m_resourceCountHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_terraformSourceHasBeenSet(false)
{
  *this = jsonValue;
}

AppInputSource& AppInputSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eksSourceClusterNamespace"))
  {
    m_eksSourceClusterNamespace = jsonValue.GetObject("eksSourceClusterNamespace");

    m_eksSourceClusterNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importType"))
  {
    m_importType = ResourceMappingTypeMapper::GetResourceMappingTypeForName(jsonValue.GetString("importType"));

    m_importTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceCount"))
  {
    m_resourceCount = jsonValue.GetInteger("resourceCount");

    m_resourceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceArn"))
  {
    m_sourceArn = jsonValue.GetString("sourceArn");

    m_sourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceName"))
  {
    m_sourceName = jsonValue.GetString("sourceName");

    m_sourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("terraformSource"))
  {
    m_terraformSource = jsonValue.GetObject("terraformSource");

    m_terraformSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue AppInputSource::Jsonize() const
{
  JsonValue payload;

  if(m_eksSourceClusterNamespaceHasBeenSet)
  {
   payload.WithObject("eksSourceClusterNamespace", m_eksSourceClusterNamespace.Jsonize());

  }

  if(m_importTypeHasBeenSet)
  {
   payload.WithString("importType", ResourceMappingTypeMapper::GetNameForResourceMappingType(m_importType));
  }

  if(m_resourceCountHasBeenSet)
  {
   payload.WithInteger("resourceCount", m_resourceCount);

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("sourceArn", m_sourceArn);

  }

  if(m_sourceNameHasBeenSet)
  {
   payload.WithString("sourceName", m_sourceName);

  }

  if(m_terraformSourceHasBeenSet)
  {
   payload.WithObject("terraformSource", m_terraformSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
