/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/DatastoreProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

DatastoreProperties::DatastoreProperties() : 
    m_datastoreIdHasBeenSet(false),
    m_datastoreNameHasBeenSet(false),
    m_datastoreStatus(DatastoreStatus::NOT_SET),
    m_datastoreStatusHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_datastoreArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

DatastoreProperties::DatastoreProperties(JsonView jsonValue) : 
    m_datastoreIdHasBeenSet(false),
    m_datastoreNameHasBeenSet(false),
    m_datastoreStatus(DatastoreStatus::NOT_SET),
    m_datastoreStatusHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_datastoreArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

DatastoreProperties& DatastoreProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("datastoreId"))
  {
    m_datastoreId = jsonValue.GetString("datastoreId");

    m_datastoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datastoreName"))
  {
    m_datastoreName = jsonValue.GetString("datastoreName");

    m_datastoreNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datastoreStatus"))
  {
    m_datastoreStatus = DatastoreStatusMapper::GetDatastoreStatusForName(jsonValue.GetString("datastoreStatus"));

    m_datastoreStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datastoreArn"))
  {
    m_datastoreArn = jsonValue.GetString("datastoreArn");

    m_datastoreArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue DatastoreProperties::Jsonize() const
{
  JsonValue payload;

  if(m_datastoreIdHasBeenSet)
  {
   payload.WithString("datastoreId", m_datastoreId);

  }

  if(m_datastoreNameHasBeenSet)
  {
   payload.WithString("datastoreName", m_datastoreName);

  }

  if(m_datastoreStatusHasBeenSet)
  {
   payload.WithString("datastoreStatus", DatastoreStatusMapper::GetNameForDatastoreStatus(m_datastoreStatus));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_datastoreArnHasBeenSet)
  {
   payload.WithString("datastoreArn", m_datastoreArn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
