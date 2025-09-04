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

CollectionDetail::CollectionDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

CollectionDetail& CollectionDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
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
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("standbyReplicas"))
  {
    m_standbyReplicas = StandbyReplicasMapper::GetStandbyReplicasForName(jsonValue.GetString("standbyReplicas"));
    m_standbyReplicasHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetInt64("createdDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetInt64("lastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collectionEndpoint"))
  {
    m_collectionEndpoint = jsonValue.GetString("collectionEndpoint");
    m_collectionEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dashboardEndpoint"))
  {
    m_dashboardEndpoint = jsonValue.GetString("dashboardEndpoint");
    m_dashboardEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fipsEndpoints"))
  {
    m_fipsEndpoints = jsonValue.GetObject("fipsEndpoints");
    m_fipsEndpointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = jsonValue.GetString("failureCode");
    m_failureCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");
    m_failureMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue CollectionDetail::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_standbyReplicasHasBeenSet)
  {
   payload.WithString("standbyReplicas", StandbyReplicasMapper::GetNameForStandbyReplicas(m_standbyReplicas));
  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithInt64("createdDate", m_createdDate);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithInt64("lastModifiedDate", m_lastModifiedDate);

  }

  if(m_collectionEndpointHasBeenSet)
  {
   payload.WithString("collectionEndpoint", m_collectionEndpoint);

  }

  if(m_dashboardEndpointHasBeenSet)
  {
   payload.WithString("dashboardEndpoint", m_dashboardEndpoint);

  }

  if(m_fipsEndpointsHasBeenSet)
  {
   payload.WithObject("fipsEndpoints", m_fipsEndpoints.Jsonize());

  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", m_failureCode);

  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("failureMessage", m_failureMessage);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
