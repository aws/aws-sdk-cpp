/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/AssistantAssociationInputData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

AssistantAssociationInputData::AssistantAssociationInputData() : 
    m_knowledgeBaseIdHasBeenSet(false)
{
}

AssistantAssociationInputData::AssistantAssociationInputData(JsonView jsonValue) : 
    m_knowledgeBaseIdHasBeenSet(false)
{
  *this = jsonValue;
}

AssistantAssociationInputData& AssistantAssociationInputData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");

    m_knowledgeBaseIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AssistantAssociationInputData::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
