/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/BedrockFoundationModelConfigurationForParsing.h>
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

BedrockFoundationModelConfigurationForParsing::BedrockFoundationModelConfigurationForParsing(JsonView jsonValue)
{
  *this = jsonValue;
}

BedrockFoundationModelConfigurationForParsing& BedrockFoundationModelConfigurationForParsing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");
    m_modelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parsingPrompt"))
  {
    m_parsingPrompt = jsonValue.GetObject("parsingPrompt");
    m_parsingPromptHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockFoundationModelConfigurationForParsing::Jsonize() const
{
  JsonValue payload;

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("modelArn", m_modelArn);

  }

  if(m_parsingPromptHasBeenSet)
  {
   payload.WithObject("parsingPrompt", m_parsingPrompt.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
