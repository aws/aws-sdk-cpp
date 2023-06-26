/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/AssistantAssociationOutputData.h>
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

AssistantAssociationOutputData::AssistantAssociationOutputData() : 
    m_knowledgeBaseAssociationHasBeenSet(false)
{
}

AssistantAssociationOutputData::AssistantAssociationOutputData(JsonView jsonValue) : 
    m_knowledgeBaseAssociationHasBeenSet(false)
{
  *this = jsonValue;
}

AssistantAssociationOutputData& AssistantAssociationOutputData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("knowledgeBaseAssociation"))
  {
    m_knowledgeBaseAssociation = jsonValue.GetObject("knowledgeBaseAssociation");

    m_knowledgeBaseAssociationHasBeenSet = true;
  }

  return *this;
}

JsonValue AssistantAssociationOutputData::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseAssociationHasBeenSet)
  {
   payload.WithObject("knowledgeBaseAssociation", m_knowledgeBaseAssociation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
