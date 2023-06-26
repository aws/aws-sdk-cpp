/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{

BatchGetRecordIdentifier::BatchGetRecordIdentifier() : 
    m_featureGroupNameHasBeenSet(false),
    m_recordIdentifiersValueAsStringHasBeenSet(false),
    m_featureNamesHasBeenSet(false)
{
}

BatchGetRecordIdentifier::BatchGetRecordIdentifier(JsonView jsonValue) : 
    m_featureGroupNameHasBeenSet(false),
    m_recordIdentifiersValueAsStringHasBeenSet(false),
    m_featureNamesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetRecordIdentifier& BatchGetRecordIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeatureGroupName"))
  {
    m_featureGroupName = jsonValue.GetString("FeatureGroupName");

    m_featureGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordIdentifiersValueAsString"))
  {
    Aws::Utils::Array<JsonView> recordIdentifiersValueAsStringJsonList = jsonValue.GetArray("RecordIdentifiersValueAsString");
    for(unsigned recordIdentifiersValueAsStringIndex = 0; recordIdentifiersValueAsStringIndex < recordIdentifiersValueAsStringJsonList.GetLength(); ++recordIdentifiersValueAsStringIndex)
    {
      m_recordIdentifiersValueAsString.push_back(recordIdentifiersValueAsStringJsonList[recordIdentifiersValueAsStringIndex].AsString());
    }
    m_recordIdentifiersValueAsStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureNames"))
  {
    Aws::Utils::Array<JsonView> featureNamesJsonList = jsonValue.GetArray("FeatureNames");
    for(unsigned featureNamesIndex = 0; featureNamesIndex < featureNamesJsonList.GetLength(); ++featureNamesIndex)
    {
      m_featureNames.push_back(featureNamesJsonList[featureNamesIndex].AsString());
    }
    m_featureNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetRecordIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_featureGroupNameHasBeenSet)
  {
   payload.WithString("FeatureGroupName", m_featureGroupName);

  }

  if(m_recordIdentifiersValueAsStringHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordIdentifiersValueAsStringJsonList(m_recordIdentifiersValueAsString.size());
   for(unsigned recordIdentifiersValueAsStringIndex = 0; recordIdentifiersValueAsStringIndex < recordIdentifiersValueAsStringJsonList.GetLength(); ++recordIdentifiersValueAsStringIndex)
   {
     recordIdentifiersValueAsStringJsonList[recordIdentifiersValueAsStringIndex].AsString(m_recordIdentifiersValueAsString[recordIdentifiersValueAsStringIndex]);
   }
   payload.WithArray("RecordIdentifiersValueAsString", std::move(recordIdentifiersValueAsStringJsonList));

  }

  if(m_featureNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featureNamesJsonList(m_featureNames.size());
   for(unsigned featureNamesIndex = 0; featureNamesIndex < featureNamesJsonList.GetLength(); ++featureNamesIndex)
   {
     featureNamesJsonList[featureNamesIndex].AsString(m_featureNames[featureNamesIndex]);
   }
   payload.WithArray("FeatureNames", std::move(featureNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
