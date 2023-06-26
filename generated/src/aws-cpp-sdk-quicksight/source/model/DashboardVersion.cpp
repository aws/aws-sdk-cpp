/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DashboardVersion.h>
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

DashboardVersion::DashboardVersion() : 
    m_createdTimeHasBeenSet(false),
    m_errorsHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_status(ResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_sourceEntityArnHasBeenSet(false),
    m_dataSetArnsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_themeArnHasBeenSet(false),
    m_sheetsHasBeenSet(false)
{
}

DashboardVersion::DashboardVersion(JsonView jsonValue) : 
    m_createdTimeHasBeenSet(false),
    m_errorsHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_status(ResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_sourceEntityArnHasBeenSet(false),
    m_dataSetArnsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_themeArnHasBeenSet(false),
    m_sheetsHasBeenSet(false)
{
  *this = jsonValue;
}

DashboardVersion& DashboardVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("VersionNumber");

    m_versionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceEntityArn"))
  {
    m_sourceEntityArn = jsonValue.GetString("SourceEntityArn");

    m_sourceEntityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetArns"))
  {
    Aws::Utils::Array<JsonView> dataSetArnsJsonList = jsonValue.GetArray("DataSetArns");
    for(unsigned dataSetArnsIndex = 0; dataSetArnsIndex < dataSetArnsJsonList.GetLength(); ++dataSetArnsIndex)
    {
      m_dataSetArns.push_back(dataSetArnsJsonList[dataSetArnsIndex].AsString());
    }
    m_dataSetArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThemeArn"))
  {
    m_themeArn = jsonValue.GetString("ThemeArn");

    m_themeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sheets"))
  {
    Aws::Utils::Array<JsonView> sheetsJsonList = jsonValue.GetArray("Sheets");
    for(unsigned sheetsIndex = 0; sheetsIndex < sheetsJsonList.GetLength(); ++sheetsIndex)
    {
      m_sheets.push_back(sheetsJsonList[sheetsIndex].AsObject());
    }
    m_sheetsHasBeenSet = true;
  }

  return *this;
}

JsonValue DashboardVersion::Jsonize() const
{
  JsonValue payload;

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_errorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorsJsonList(m_errors.size());
   for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
   {
     errorsJsonList[errorsIndex].AsObject(m_errors[errorsIndex].Jsonize());
   }
   payload.WithArray("Errors", std::move(errorsJsonList));

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("VersionNumber", m_versionNumber);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_sourceEntityArnHasBeenSet)
  {
   payload.WithString("SourceEntityArn", m_sourceEntityArn);

  }

  if(m_dataSetArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSetArnsJsonList(m_dataSetArns.size());
   for(unsigned dataSetArnsIndex = 0; dataSetArnsIndex < dataSetArnsJsonList.GetLength(); ++dataSetArnsIndex)
   {
     dataSetArnsJsonList[dataSetArnsIndex].AsString(m_dataSetArns[dataSetArnsIndex]);
   }
   payload.WithArray("DataSetArns", std::move(dataSetArnsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_themeArnHasBeenSet)
  {
   payload.WithString("ThemeArn", m_themeArn);

  }

  if(m_sheetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sheetsJsonList(m_sheets.size());
   for(unsigned sheetsIndex = 0; sheetsIndex < sheetsJsonList.GetLength(); ++sheetsIndex)
   {
     sheetsJsonList[sheetsIndex].AsObject(m_sheets[sheetsIndex].Jsonize());
   }
   payload.WithArray("Sheets", std::move(sheetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
