/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ParsingConfiguration.h>
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

ParsingConfiguration::ParsingConfiguration() : 
    m_bedrockFoundationModelConfigurationHasBeenSet(false),
    m_parsingStrategy(ParsingStrategy::NOT_SET),
    m_parsingStrategyHasBeenSet(false)
{
}

ParsingConfiguration::ParsingConfiguration(JsonView jsonValue)
  : ParsingConfiguration()
{
  *this = jsonValue;
}

ParsingConfiguration& ParsingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bedrockFoundationModelConfiguration"))
  {
    m_bedrockFoundationModelConfiguration = jsonValue.GetObject("bedrockFoundationModelConfiguration");

    m_bedrockFoundationModelConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parsingStrategy"))
  {
    m_parsingStrategy = ParsingStrategyMapper::GetParsingStrategyForName(jsonValue.GetString("parsingStrategy"));

    m_parsingStrategyHasBeenSet = true;
  }

  return *this;
}

JsonValue ParsingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bedrockFoundationModelConfigurationHasBeenSet)
  {
   payload.WithObject("bedrockFoundationModelConfiguration", m_bedrockFoundationModelConfiguration.Jsonize());

  }

  if(m_parsingStrategyHasBeenSet)
  {
   payload.WithString("parsingStrategy", ParsingStrategyMapper::GetNameForParsingStrategy(m_parsingStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
