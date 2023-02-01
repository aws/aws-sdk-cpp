/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/JobProgress.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VoiceID
{
namespace Model
{

JobProgress::JobProgress() : 
    m_percentComplete(0),
    m_percentCompleteHasBeenSet(false)
{
}

JobProgress::JobProgress(JsonView jsonValue) : 
    m_percentComplete(0),
    m_percentCompleteHasBeenSet(false)
{
  *this = jsonValue;
}

JobProgress& JobProgress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PercentComplete"))
  {
    m_percentComplete = jsonValue.GetInteger("PercentComplete");

    m_percentCompleteHasBeenSet = true;
  }

  return *this;
}

JsonValue JobProgress::Jsonize() const
{
  JsonValue payload;

  if(m_percentCompleteHasBeenSet)
  {
   payload.WithInteger("PercentComplete", m_percentComplete);

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
