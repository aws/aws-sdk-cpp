/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/DefinitionRepository.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

DefinitionRepository::DefinitionRepository(JsonView jsonValue)
{
  *this = jsonValue;
}

DefinitionRepository& DefinitionRepository::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectionArn"))
  {
    m_connectionArn = jsonValue.GetString("connectionArn");
    m_connectionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fullRepositoryId"))
  {
    m_fullRepositoryId = jsonValue.GetString("fullRepositoryId");
    m_fullRepositoryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceReference"))
  {
    m_sourceReference = jsonValue.GetObject("sourceReference");
    m_sourceReferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("excludeFilePatterns"))
  {
    Aws::Utils::Array<JsonView> excludeFilePatternsJsonList = jsonValue.GetArray("excludeFilePatterns");
    for(unsigned excludeFilePatternsIndex = 0; excludeFilePatternsIndex < excludeFilePatternsJsonList.GetLength(); ++excludeFilePatternsIndex)
    {
      m_excludeFilePatterns.push_back(excludeFilePatternsJsonList[excludeFilePatternsIndex].AsString());
    }
    m_excludeFilePatternsHasBeenSet = true;
  }
  return *this;
}

JsonValue DefinitionRepository::Jsonize() const
{
  JsonValue payload;

  if(m_connectionArnHasBeenSet)
  {
   payload.WithString("connectionArn", m_connectionArn);

  }

  if(m_fullRepositoryIdHasBeenSet)
  {
   payload.WithString("fullRepositoryId", m_fullRepositoryId);

  }

  if(m_sourceReferenceHasBeenSet)
  {
   payload.WithObject("sourceReference", m_sourceReference.Jsonize());

  }

  if(m_excludeFilePatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeFilePatternsJsonList(m_excludeFilePatterns.size());
   for(unsigned excludeFilePatternsIndex = 0; excludeFilePatternsIndex < excludeFilePatternsJsonList.GetLength(); ++excludeFilePatternsIndex)
   {
     excludeFilePatternsJsonList[excludeFilePatternsIndex].AsString(m_excludeFilePatterns[excludeFilePatternsIndex]);
   }
   payload.WithArray("excludeFilePatterns", std::move(excludeFilePatternsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
