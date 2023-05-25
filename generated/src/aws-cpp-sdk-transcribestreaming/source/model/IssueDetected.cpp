/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/IssueDetected.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

IssueDetected::IssueDetected() : 
    m_characterOffsetsHasBeenSet(false)
{
}

IssueDetected::IssueDetected(JsonView jsonValue) : 
    m_characterOffsetsHasBeenSet(false)
{
  *this = jsonValue;
}

IssueDetected& IssueDetected::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CharacterOffsets"))
  {
    m_characterOffsets = jsonValue.GetObject("CharacterOffsets");

    m_characterOffsetsHasBeenSet = true;
  }

  return *this;
}

JsonValue IssueDetected::Jsonize() const
{
  JsonValue payload;

  if(m_characterOffsetsHasBeenSet)
  {
   payload.WithObject("CharacterOffsets", m_characterOffsets.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
