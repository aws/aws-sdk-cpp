/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/HistoryEventExecutionDataDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

HistoryEventExecutionDataDetails::HistoryEventExecutionDataDetails() : 
    m_truncated(false),
    m_truncatedHasBeenSet(false)
{
}

HistoryEventExecutionDataDetails::HistoryEventExecutionDataDetails(JsonView jsonValue) : 
    m_truncated(false),
    m_truncatedHasBeenSet(false)
{
  *this = jsonValue;
}

HistoryEventExecutionDataDetails& HistoryEventExecutionDataDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("truncated"))
  {
    m_truncated = jsonValue.GetBool("truncated");

    m_truncatedHasBeenSet = true;
  }

  return *this;
}

JsonValue HistoryEventExecutionDataDetails::Jsonize() const
{
  JsonValue payload;

  if(m_truncatedHasBeenSet)
  {
   payload.WithBool("truncated", m_truncated);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
