/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/LifecyclePolicyResourceIdentifier.h>
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

LifecyclePolicyResourceIdentifier::LifecyclePolicyResourceIdentifier() : 
    m_resourceHasBeenSet(false),
    m_type(LifecyclePolicyType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

LifecyclePolicyResourceIdentifier::LifecyclePolicyResourceIdentifier(JsonView jsonValue) : 
    m_resourceHasBeenSet(false),
    m_type(LifecyclePolicyType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicyResourceIdentifier& LifecyclePolicyResourceIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = LifecyclePolicyTypeMapper::GetLifecyclePolicyTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecyclePolicyResourceIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", LifecyclePolicyTypeMapper::GetNameForLifecyclePolicyType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
