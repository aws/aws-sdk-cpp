/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClarifyTextConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ClarifyTextConfig::ClarifyTextConfig() : 
    m_language(ClarifyTextLanguage::NOT_SET),
    m_languageHasBeenSet(false),
    m_granularity(ClarifyTextGranularity::NOT_SET),
    m_granularityHasBeenSet(false)
{
}

ClarifyTextConfig::ClarifyTextConfig(JsonView jsonValue) : 
    m_language(ClarifyTextLanguage::NOT_SET),
    m_languageHasBeenSet(false),
    m_granularity(ClarifyTextGranularity::NOT_SET),
    m_granularityHasBeenSet(false)
{
  *this = jsonValue;
}

ClarifyTextConfig& ClarifyTextConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Language"))
  {
    m_language = ClarifyTextLanguageMapper::GetClarifyTextLanguageForName(jsonValue.GetString("Language"));

    m_languageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Granularity"))
  {
    m_granularity = ClarifyTextGranularityMapper::GetClarifyTextGranularityForName(jsonValue.GetString("Granularity"));

    m_granularityHasBeenSet = true;
  }

  return *this;
}

JsonValue ClarifyTextConfig::Jsonize() const
{
  JsonValue payload;

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", ClarifyTextLanguageMapper::GetNameForClarifyTextLanguage(m_language));
  }

  if(m_granularityHasBeenSet)
  {
   payload.WithString("Granularity", ClarifyTextGranularityMapper::GetNameForClarifyTextGranularity(m_granularity));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
