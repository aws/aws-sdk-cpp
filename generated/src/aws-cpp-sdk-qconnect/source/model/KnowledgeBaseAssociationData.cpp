/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/KnowledgeBaseAssociationData.h>
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

KnowledgeBaseAssociationData::KnowledgeBaseAssociationData() : 
    m_knowledgeBaseArnHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false)
{
}

KnowledgeBaseAssociationData::KnowledgeBaseAssociationData(JsonView jsonValue) : 
    m_knowledgeBaseArnHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false)
{
  *this = jsonValue;
}

KnowledgeBaseAssociationData& KnowledgeBaseAssociationData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("knowledgeBaseArn"))
  {
    m_knowledgeBaseArn = jsonValue.GetString("knowledgeBaseArn");

    m_knowledgeBaseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");

    m_knowledgeBaseIdHasBeenSet = true;
  }

  return *this;
}

JsonValue KnowledgeBaseAssociationData::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseArnHasBeenSet)
  {
   payload.WithString("knowledgeBaseArn", m_knowledgeBaseArn);

  }

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
