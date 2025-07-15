/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/AIMLOptionsInput.h>
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

AIMLOptionsInput::AIMLOptionsInput(JsonView jsonValue)
{
  *this = jsonValue;
}

AIMLOptionsInput& AIMLOptionsInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NaturalLanguageQueryGenerationOptions"))
  {
    m_naturalLanguageQueryGenerationOptions = jsonValue.GetObject("NaturalLanguageQueryGenerationOptions");
    m_naturalLanguageQueryGenerationOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3VectorsEngine"))
  {
    m_s3VectorsEngine = jsonValue.GetObject("S3VectorsEngine");
    m_s3VectorsEngineHasBeenSet = true;
  }
  return *this;
}

JsonValue AIMLOptionsInput::Jsonize() const
{
  JsonValue payload;

  if(m_naturalLanguageQueryGenerationOptionsHasBeenSet)
  {
   payload.WithObject("NaturalLanguageQueryGenerationOptions", m_naturalLanguageQueryGenerationOptions.Jsonize());

  }

  if(m_s3VectorsEngineHasBeenSet)
  {
   payload.WithObject("S3VectorsEngine", m_s3VectorsEngine.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
