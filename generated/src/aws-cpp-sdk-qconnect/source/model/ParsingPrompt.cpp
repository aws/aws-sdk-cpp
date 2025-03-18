/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ParsingPrompt.h>
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

ParsingPrompt::ParsingPrompt(JsonView jsonValue)
{
  *this = jsonValue;
}

ParsingPrompt& ParsingPrompt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("parsingPromptText"))
  {
    m_parsingPromptText = jsonValue.GetString("parsingPromptText");
    m_parsingPromptTextHasBeenSet = true;
  }
  return *this;
}

JsonValue ParsingPrompt::Jsonize() const
{
  JsonValue payload;

  if(m_parsingPromptTextHasBeenSet)
  {
   payload.WithString("parsingPromptText", m_parsingPromptText);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
