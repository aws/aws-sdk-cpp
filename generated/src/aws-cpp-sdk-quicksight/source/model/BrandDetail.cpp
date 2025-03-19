/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BrandDetail.h>
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

BrandDetail::BrandDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

BrandDetail& BrandDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BrandId"))
  {
    m_brandId = jsonValue.GetString("BrandId");
    m_brandIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BrandStatus"))
  {
    m_brandStatus = BrandStatusMapper::GetBrandStatusForName(jsonValue.GetString("BrandStatus"));
    m_brandStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");
    m_versionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionStatus"))
  {
    m_versionStatus = BrandVersionStatusMapper::GetBrandVersionStatusForName(jsonValue.GetString("VersionStatus"));
    m_versionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsString());
    }
    m_errorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Logo"))
  {
    m_logo = jsonValue.GetObject("Logo");
    m_logoHasBeenSet = true;
  }
  return *this;
}

JsonValue BrandDetail::Jsonize() const
{
  JsonValue payload;

  if(m_brandIdHasBeenSet)
  {
   payload.WithString("BrandId", m_brandId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_brandStatusHasBeenSet)
  {
   payload.WithString("BrandStatus", BrandStatusMapper::GetNameForBrandStatus(m_brandStatus));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  if(m_versionStatusHasBeenSet)
  {
   payload.WithString("VersionStatus", BrandVersionStatusMapper::GetNameForBrandVersionStatus(m_versionStatus));
  }

  if(m_errorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorsJsonList(m_errors.size());
   for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
   {
     errorsJsonList[errorsIndex].AsString(m_errors[errorsIndex]);
   }
   payload.WithArray("Errors", std::move(errorsJsonList));

  }

  if(m_logoHasBeenSet)
  {
   payload.WithObject("Logo", m_logo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
