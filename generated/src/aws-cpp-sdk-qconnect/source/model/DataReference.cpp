/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/DataReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

DataReference::DataReference() : 
    m_contentReferenceHasBeenSet(false),
    m_generativeReferenceHasBeenSet(false)
{
}

DataReference::DataReference(JsonView jsonValue) : 
    m_contentReferenceHasBeenSet(false),
    m_generativeReferenceHasBeenSet(false)
{
  *this = jsonValue;
}

DataReference& DataReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contentReference"))
  {
    m_contentReference = jsonValue.GetObject("contentReference");

    m_contentReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("generativeReference"))
  {
    m_generativeReference = jsonValue.GetObject("generativeReference");

    m_generativeReferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue DataReference::Jsonize() const
{
  JsonValue payload;

  if(m_contentReferenceHasBeenSet)
  {
   payload.WithObject("contentReference", m_contentReference.Jsonize());

  }

  if(m_generativeReferenceHasBeenSet)
  {
   payload.WithObject("generativeReference", m_generativeReference.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
