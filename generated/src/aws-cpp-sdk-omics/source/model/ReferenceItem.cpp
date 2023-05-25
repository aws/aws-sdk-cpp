/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReferenceItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

ReferenceItem::ReferenceItem() : 
    m_referenceArnHasBeenSet(false)
{
}

ReferenceItem::ReferenceItem(JsonView jsonValue) : 
    m_referenceArnHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceItem& ReferenceItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("referenceArn"))
  {
    m_referenceArn = jsonValue.GetString("referenceArn");

    m_referenceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferenceItem::Jsonize() const
{
  JsonValue payload;

  if(m_referenceArnHasBeenSet)
  {
   payload.WithString("referenceArn", m_referenceArn);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
