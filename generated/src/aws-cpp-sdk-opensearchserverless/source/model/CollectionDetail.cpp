/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/CollectionDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

CollectionDetail::CollectionDetail() : 
    m_arnHasBeenSet(false),
    m_collectionEndpointHasBeenSet(false),
    m_createdDate(0),
    m_createdDateHasBeenSet(false),
    m_dashboardEndpointHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_lastModifiedDate(0),
    m_lastModifiedDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(CollectionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(CollectionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

CollectionDetail::CollectionDetail(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_collectionEndpointHasBeenSet(false),
    m_createdDate(0),
    m_createdDateHasBeenSet(false),
    m_dashboardEndpointHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_lastModifiedDate(0),
    m_lastModifiedDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(CollectionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(CollectionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

CollectionDetail& CollectionDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("collectionEndpoint"))
  {
    m_collectionEndpoint = jsonValue.GetString("collectionEndpoint");

    m_collectionEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetInt64("createdDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dashboardEndpoint"))
  {
    m_dashboardEndpoint = jsonValue.GetString("dashboardEndpoint");

    m_dashboardEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetInt64("lastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = CollectionStatusMapper::GetCollectionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = CollectionTypeMapper::GetCollectionTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue CollectionDetail::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_collectionEndpointHasBeenSet)
  {
   payload.WithString("collectionEndpoint", m_collectionEndpoint);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithInt64("createdDate", m_createdDate);

  }

  if(m_dashboardEndpointHasBeenSet)
  {
   payload.WithString("dashboardEndpoint", m_dashboardEndpoint);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithInt64("lastModifiedDate", m_lastModifiedDate);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CollectionStatusMapper::GetNameForCollectionStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CollectionTypeMapper::GetNameForCollectionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
