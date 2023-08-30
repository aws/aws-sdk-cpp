/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/RDFGraphSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace neptunedata
{
namespace Model
{

RDFGraphSummary::RDFGraphSummary() : 
    m_numDistinctSubjects(0),
    m_numDistinctSubjectsHasBeenSet(false),
    m_numDistinctPredicates(0),
    m_numDistinctPredicatesHasBeenSet(false),
    m_numQuads(0),
    m_numQuadsHasBeenSet(false),
    m_numClasses(0),
    m_numClassesHasBeenSet(false),
    m_classesHasBeenSet(false),
    m_predicatesHasBeenSet(false),
    m_subjectStructuresHasBeenSet(false)
{
}

RDFGraphSummary::RDFGraphSummary(JsonView jsonValue) : 
    m_numDistinctSubjects(0),
    m_numDistinctSubjectsHasBeenSet(false),
    m_numDistinctPredicates(0),
    m_numDistinctPredicatesHasBeenSet(false),
    m_numQuads(0),
    m_numQuadsHasBeenSet(false),
    m_numClasses(0),
    m_numClassesHasBeenSet(false),
    m_classesHasBeenSet(false),
    m_predicatesHasBeenSet(false),
    m_subjectStructuresHasBeenSet(false)
{
  *this = jsonValue;
}

RDFGraphSummary& RDFGraphSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("numDistinctSubjects"))
  {
    m_numDistinctSubjects = jsonValue.GetInt64("numDistinctSubjects");

    m_numDistinctSubjectsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numDistinctPredicates"))
  {
    m_numDistinctPredicates = jsonValue.GetInt64("numDistinctPredicates");

    m_numDistinctPredicatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numQuads"))
  {
    m_numQuads = jsonValue.GetInt64("numQuads");

    m_numQuadsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numClasses"))
  {
    m_numClasses = jsonValue.GetInt64("numClasses");

    m_numClassesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("classes"))
  {
    Aws::Utils::Array<JsonView> classesJsonList = jsonValue.GetArray("classes");
    for(unsigned classesIndex = 0; classesIndex < classesJsonList.GetLength(); ++classesIndex)
    {
      m_classes.push_back(classesJsonList[classesIndex].AsString());
    }
    m_classesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("predicates"))
  {
    Aws::Utils::Array<JsonView> predicatesJsonList = jsonValue.GetArray("predicates");
    for(unsigned predicatesIndex = 0; predicatesIndex < predicatesJsonList.GetLength(); ++predicatesIndex)
    {
      Aws::Map<Aws::String, JsonView> longValuedMapJsonMap = predicatesJsonList[predicatesIndex].GetAllObjects();
      Aws::Map<Aws::String, long long> longValuedMapMap;
      for(auto& longValuedMapItem : longValuedMapJsonMap)
      {
        longValuedMapMap[longValuedMapItem.first] = longValuedMapItem.second.AsInt64();
      }
      m_predicates.push_back(std::move(longValuedMapMap));
    }
    m_predicatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subjectStructures"))
  {
    Aws::Utils::Array<JsonView> subjectStructuresJsonList = jsonValue.GetArray("subjectStructures");
    for(unsigned subjectStructuresIndex = 0; subjectStructuresIndex < subjectStructuresJsonList.GetLength(); ++subjectStructuresIndex)
    {
      m_subjectStructures.push_back(subjectStructuresJsonList[subjectStructuresIndex].AsObject());
    }
    m_subjectStructuresHasBeenSet = true;
  }

  return *this;
}

JsonValue RDFGraphSummary::Jsonize() const
{
  JsonValue payload;

  if(m_numDistinctSubjectsHasBeenSet)
  {
   payload.WithInt64("numDistinctSubjects", m_numDistinctSubjects);

  }

  if(m_numDistinctPredicatesHasBeenSet)
  {
   payload.WithInt64("numDistinctPredicates", m_numDistinctPredicates);

  }

  if(m_numQuadsHasBeenSet)
  {
   payload.WithInt64("numQuads", m_numQuads);

  }

  if(m_numClassesHasBeenSet)
  {
   payload.WithInt64("numClasses", m_numClasses);

  }

  if(m_classesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> classesJsonList(m_classes.size());
   for(unsigned classesIndex = 0; classesIndex < classesJsonList.GetLength(); ++classesIndex)
   {
     classesJsonList[classesIndex].AsString(m_classes[classesIndex]);
   }
   payload.WithArray("classes", std::move(classesJsonList));

  }

  if(m_predicatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> predicatesJsonList(m_predicates.size());
   for(unsigned predicatesIndex = 0; predicatesIndex < predicatesJsonList.GetLength(); ++predicatesIndex)
   {
     JsonValue longValuedMapJsonMap;
     for(auto& longValuedMapItem : m_predicates[predicatesIndex])
     {
       longValuedMapJsonMap.WithInt64(longValuedMapItem.first, longValuedMapItem.second);
     }
     predicatesJsonList[predicatesIndex].AsObject(std::move(longValuedMapJsonMap));
   }
   payload.WithArray("predicates", std::move(predicatesJsonList));

  }

  if(m_subjectStructuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subjectStructuresJsonList(m_subjectStructures.size());
   for(unsigned subjectStructuresIndex = 0; subjectStructuresIndex < subjectStructuresJsonList.GetLength(); ++subjectStructuresIndex)
   {
     subjectStructuresJsonList[subjectStructuresIndex].AsObject(m_subjectStructures[subjectStructuresIndex].Jsonize());
   }
   payload.WithArray("subjectStructures", std::move(subjectStructuresJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
