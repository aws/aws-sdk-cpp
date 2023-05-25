/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/EngineWorkflowResourceIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

EngineWorkflowResourceIdentifier::EngineWorkflowResourceIdentifier() : 
    m_uniqueTagHasBeenSet(false)
{
}

EngineWorkflowResourceIdentifier::EngineWorkflowResourceIdentifier(JsonView jsonValue) : 
    m_uniqueTagHasBeenSet(false)
{
  *this = jsonValue;
}

EngineWorkflowResourceIdentifier& EngineWorkflowResourceIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UniqueTag"))
  {
    m_uniqueTag = jsonValue.GetObject("UniqueTag");

    m_uniqueTagHasBeenSet = true;
  }

  return *this;
}

JsonValue EngineWorkflowResourceIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_uniqueTagHasBeenSet)
  {
   payload.WithObject("UniqueTag", m_uniqueTag.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
