/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/PredictQAppInputOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QApps
{
namespace Model
{

PredictQAppInputOptions::PredictQAppInputOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

PredictQAppInputOptions& PredictQAppInputOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conversation"))
  {
    Aws::Utils::Array<JsonView> conversationJsonList = jsonValue.GetArray("conversation");
    for(unsigned conversationIndex = 0; conversationIndex < conversationJsonList.GetLength(); ++conversationIndex)
    {
      m_conversation.push_back(conversationJsonList[conversationIndex].AsObject());
    }
    m_conversationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("problemStatement"))
  {
    m_problemStatement = jsonValue.GetString("problemStatement");
    m_problemStatementHasBeenSet = true;
  }
  return *this;
}

JsonValue PredictQAppInputOptions::Jsonize() const
{
  JsonValue payload;

  if(m_conversationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conversationJsonList(m_conversation.size());
   for(unsigned conversationIndex = 0; conversationIndex < conversationJsonList.GetLength(); ++conversationIndex)
   {
     conversationJsonList[conversationIndex].AsObject(m_conversation[conversationIndex].Jsonize());
   }
   payload.WithArray("conversation", std::move(conversationJsonList));

  }

  if(m_problemStatementHasBeenSet)
  {
   payload.WithString("problemStatement", m_problemStatement);

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
