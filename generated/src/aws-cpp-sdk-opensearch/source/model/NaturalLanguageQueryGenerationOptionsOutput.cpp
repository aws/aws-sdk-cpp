/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/NaturalLanguageQueryGenerationOptionsOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

NaturalLanguageQueryGenerationOptionsOutput::NaturalLanguageQueryGenerationOptionsOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

NaturalLanguageQueryGenerationOptionsOutput& NaturalLanguageQueryGenerationOptionsOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DesiredState"))
  {
    m_desiredState = NaturalLanguageQueryGenerationDesiredStateMapper::GetNaturalLanguageQueryGenerationDesiredStateForName(jsonValue.GetString("DesiredState"));
    m_desiredStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentState"))
  {
    m_currentState = NaturalLanguageQueryGenerationCurrentStateMapper::GetNaturalLanguageQueryGenerationCurrentStateForName(jsonValue.GetString("CurrentState"));
    m_currentStateHasBeenSet = true;
  }
  return *this;
}

JsonValue NaturalLanguageQueryGenerationOptionsOutput::Jsonize() const
{
  JsonValue payload;

  if(m_desiredStateHasBeenSet)
  {
   payload.WithString("DesiredState", NaturalLanguageQueryGenerationDesiredStateMapper::GetNameForNaturalLanguageQueryGenerationDesiredState(m_desiredState));
  }

  if(m_currentStateHasBeenSet)
  {
   payload.WithString("CurrentState", NaturalLanguageQueryGenerationCurrentStateMapper::GetNameForNaturalLanguageQueryGenerationCurrentState(m_currentState));
  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
