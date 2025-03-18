/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/ListSolNetworkOperationsMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace tnb
{
namespace Model
{

ListSolNetworkOperationsMetadata::ListSolNetworkOperationsMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

ListSolNetworkOperationsMetadata& ListSolNetworkOperationsMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModified"))
  {
    m_lastModified = jsonValue.GetString("lastModified");
    m_lastModifiedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsdInfoId"))
  {
    m_nsdInfoId = jsonValue.GetString("nsdInfoId");
    m_nsdInfoIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vnfInstanceId"))
  {
    m_vnfInstanceId = jsonValue.GetString("vnfInstanceId");
    m_vnfInstanceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ListSolNetworkOperationsMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithString("lastModified", m_lastModified.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_nsdInfoIdHasBeenSet)
  {
   payload.WithString("nsdInfoId", m_nsdInfoId);

  }

  if(m_vnfInstanceIdHasBeenSet)
  {
   payload.WithString("vnfInstanceId", m_vnfInstanceId);

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
