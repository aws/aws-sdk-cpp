/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/StartReadSetActivationJobSourceItem.h>
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

StartReadSetActivationJobSourceItem::StartReadSetActivationJobSourceItem() : 
    m_readSetIdHasBeenSet(false)
{
}

StartReadSetActivationJobSourceItem::StartReadSetActivationJobSourceItem(JsonView jsonValue) : 
    m_readSetIdHasBeenSet(false)
{
  *this = jsonValue;
}

StartReadSetActivationJobSourceItem& StartReadSetActivationJobSourceItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("readSetId"))
  {
    m_readSetId = jsonValue.GetString("readSetId");

    m_readSetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue StartReadSetActivationJobSourceItem::Jsonize() const
{
  JsonValue payload;

  if(m_readSetIdHasBeenSet)
  {
   payload.WithString("readSetId", m_readSetId);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
