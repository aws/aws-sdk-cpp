/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/EmbeddedTag.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesThinClient
{
namespace Model
{

EmbeddedTag::EmbeddedTag() : 
    m_resourceArnHasBeenSet(false),
    m_internalIdHasBeenSet(false)
{
}

EmbeddedTag::EmbeddedTag(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_internalIdHasBeenSet(false)
{
  *this = jsonValue;
}

EmbeddedTag& EmbeddedTag::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("internalId"))
  {
    m_internalId = jsonValue.GetString("internalId");

    m_internalIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EmbeddedTag::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_internalIdHasBeenSet)
  {
   payload.WithString("internalId", m_internalId);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
