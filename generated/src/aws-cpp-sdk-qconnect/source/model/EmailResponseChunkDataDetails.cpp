/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/EmailResponseChunkDataDetails.h>
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

EmailResponseChunkDataDetails::EmailResponseChunkDataDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

EmailResponseChunkDataDetails& EmailResponseChunkDataDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("completion"))
  {
    m_completion = jsonValue.GetString("completion");
    m_completionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextChunkToken"))
  {
    m_nextChunkToken = jsonValue.GetString("nextChunkToken");
    m_nextChunkTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailResponseChunkDataDetails::Jsonize() const
{
  JsonValue payload;

  if(m_completionHasBeenSet)
  {
   payload.WithString("completion", m_completion);

  }

  if(m_nextChunkTokenHasBeenSet)
  {
   payload.WithString("nextChunkToken", m_nextChunkToken);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
