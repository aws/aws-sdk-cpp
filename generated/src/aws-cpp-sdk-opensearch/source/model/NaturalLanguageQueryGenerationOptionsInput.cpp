/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/NaturalLanguageQueryGenerationOptionsInput.h>
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

NaturalLanguageQueryGenerationOptionsInput::NaturalLanguageQueryGenerationOptionsInput(JsonView jsonValue)
{
  *this = jsonValue;
}

NaturalLanguageQueryGenerationOptionsInput& NaturalLanguageQueryGenerationOptionsInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DesiredState"))
  {
    m_desiredState = NaturalLanguageQueryGenerationDesiredStateMapper::GetNaturalLanguageQueryGenerationDesiredStateForName(jsonValue.GetString("DesiredState"));
    m_desiredStateHasBeenSet = true;
  }
  return *this;
}

JsonValue NaturalLanguageQueryGenerationOptionsInput::Jsonize() const
{
  JsonValue payload;

  if(m_desiredStateHasBeenSet)
  {
   payload.WithString("DesiredState", NaturalLanguageQueryGenerationDesiredStateMapper::GetNameForNaturalLanguageQueryGenerationDesiredState(m_desiredState));
  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
