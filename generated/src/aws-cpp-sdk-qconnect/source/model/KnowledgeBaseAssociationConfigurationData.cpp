/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/KnowledgeBaseAssociationConfigurationData.h>
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

KnowledgeBaseAssociationConfigurationData::KnowledgeBaseAssociationConfigurationData(JsonView jsonValue)
{
  *this = jsonValue;
}

KnowledgeBaseAssociationConfigurationData& KnowledgeBaseAssociationConfigurationData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contentTagFilter"))
  {
    m_contentTagFilter = jsonValue.GetObject("contentTagFilter");
    m_contentTagFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxResults"))
  {
    m_maxResults = jsonValue.GetInteger("maxResults");
    m_maxResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("overrideKnowledgeBaseSearchType"))
  {
    m_overrideKnowledgeBaseSearchType = KnowledgeBaseSearchTypeMapper::GetKnowledgeBaseSearchTypeForName(jsonValue.GetString("overrideKnowledgeBaseSearchType"));
    m_overrideKnowledgeBaseSearchTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue KnowledgeBaseAssociationConfigurationData::Jsonize() const
{
  JsonValue payload;

  if(m_contentTagFilterHasBeenSet)
  {
   payload.WithObject("contentTagFilter", m_contentTagFilter.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_overrideKnowledgeBaseSearchTypeHasBeenSet)
  {
   payload.WithString("overrideKnowledgeBaseSearchType", KnowledgeBaseSearchTypeMapper::GetNameForKnowledgeBaseSearchType(m_overrideKnowledgeBaseSearchType));
  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
