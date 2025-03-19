/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/MetadataCopies.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

MetadataCopies::MetadataCopies(JsonView jsonValue)
{
  *this = jsonValue;
}

MetadataCopies& MetadataCopies::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("copiableAttributes"))
  {
    m_copiableAttributes = jsonValue.GetString("copiableAttributes");
    m_copiableAttributesHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataCopies::Jsonize() const
{
  JsonValue payload;

  if(m_copiableAttributesHasBeenSet)
  {
   payload.WithString("copiableAttributes", m_copiableAttributes);

  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
