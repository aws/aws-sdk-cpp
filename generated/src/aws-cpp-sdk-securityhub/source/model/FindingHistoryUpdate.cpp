/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/FindingHistoryUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

FindingHistoryUpdate::FindingHistoryUpdate() : 
    m_updatedFieldHasBeenSet(false),
    m_oldValueHasBeenSet(false),
    m_newValueHasBeenSet(false)
{
}

FindingHistoryUpdate::FindingHistoryUpdate(JsonView jsonValue) : 
    m_updatedFieldHasBeenSet(false),
    m_oldValueHasBeenSet(false),
    m_newValueHasBeenSet(false)
{
  *this = jsonValue;
}

FindingHistoryUpdate& FindingHistoryUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UpdatedField"))
  {
    m_updatedField = jsonValue.GetString("UpdatedField");

    m_updatedFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OldValue"))
  {
    m_oldValue = jsonValue.GetString("OldValue");

    m_oldValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewValue"))
  {
    m_newValue = jsonValue.GetString("NewValue");

    m_newValueHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingHistoryUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_updatedFieldHasBeenSet)
  {
   payload.WithString("UpdatedField", m_updatedField);

  }

  if(m_oldValueHasBeenSet)
  {
   payload.WithString("OldValue", m_oldValue);

  }

  if(m_newValueHasBeenSet)
  {
   payload.WithString("NewValue", m_newValue);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
