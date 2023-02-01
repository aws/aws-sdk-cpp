/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DashboardSourceTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DashboardSourceTemplate::DashboardSourceTemplate() : 
    m_dataSetReferencesHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

DashboardSourceTemplate::DashboardSourceTemplate(JsonView jsonValue) : 
    m_dataSetReferencesHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

DashboardSourceTemplate& DashboardSourceTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetReferences"))
  {
    Aws::Utils::Array<JsonView> dataSetReferencesJsonList = jsonValue.GetArray("DataSetReferences");
    for(unsigned dataSetReferencesIndex = 0; dataSetReferencesIndex < dataSetReferencesJsonList.GetLength(); ++dataSetReferencesIndex)
    {
      m_dataSetReferences.push_back(dataSetReferencesJsonList[dataSetReferencesIndex].AsObject());
    }
    m_dataSetReferencesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue DashboardSourceTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetReferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSetReferencesJsonList(m_dataSetReferences.size());
   for(unsigned dataSetReferencesIndex = 0; dataSetReferencesIndex < dataSetReferencesJsonList.GetLength(); ++dataSetReferencesIndex)
   {
     dataSetReferencesJsonList[dataSetReferencesIndex].AsObject(m_dataSetReferences[dataSetReferencesIndex].Jsonize());
   }
   payload.WithArray("DataSetReferences", std::move(dataSetReferencesJsonList));

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
