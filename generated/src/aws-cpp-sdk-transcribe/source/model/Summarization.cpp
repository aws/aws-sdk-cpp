/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/Summarization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

Summarization::Summarization() : 
    m_generateAbstractiveSummary(false),
    m_generateAbstractiveSummaryHasBeenSet(false)
{
}

Summarization::Summarization(JsonView jsonValue) : 
    m_generateAbstractiveSummary(false),
    m_generateAbstractiveSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

Summarization& Summarization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GenerateAbstractiveSummary"))
  {
    m_generateAbstractiveSummary = jsonValue.GetBool("GenerateAbstractiveSummary");

    m_generateAbstractiveSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue Summarization::Jsonize() const
{
  JsonValue payload;

  if(m_generateAbstractiveSummaryHasBeenSet)
  {
   payload.WithBool("GenerateAbstractiveSummary", m_generateAbstractiveSummary);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
