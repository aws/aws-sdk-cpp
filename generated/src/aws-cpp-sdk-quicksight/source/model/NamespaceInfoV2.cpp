/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NamespaceInfoV2.h>
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

NamespaceInfoV2::NamespaceInfoV2(JsonView jsonValue)
{
  *this = jsonValue;
}

NamespaceInfoV2& NamespaceInfoV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CapacityRegion"))
  {
    m_capacityRegion = jsonValue.GetString("CapacityRegion");
    m_capacityRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationStatus"))
  {
    m_creationStatus = NamespaceStatusMapper::GetNamespaceStatusForName(jsonValue.GetString("CreationStatus"));
    m_creationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityStore"))
  {
    m_identityStore = IdentityStoreMapper::GetIdentityStoreForName(jsonValue.GetString("IdentityStore"));
    m_identityStoreHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NamespaceError"))
  {
    m_namespaceError = jsonValue.GetObject("NamespaceError");
    m_namespaceErrorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IamIdentityCenterApplicationArn"))
  {
    m_iamIdentityCenterApplicationArn = jsonValue.GetString("IamIdentityCenterApplicationArn");
    m_iamIdentityCenterApplicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IamIdentityCenterInstanceArn"))
  {
    m_iamIdentityCenterInstanceArn = jsonValue.GetString("IamIdentityCenterInstanceArn");
    m_iamIdentityCenterInstanceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue NamespaceInfoV2::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_capacityRegionHasBeenSet)
  {
   payload.WithString("CapacityRegion", m_capacityRegion);

  }

  if(m_creationStatusHasBeenSet)
  {
   payload.WithString("CreationStatus", NamespaceStatusMapper::GetNameForNamespaceStatus(m_creationStatus));
  }

  if(m_identityStoreHasBeenSet)
  {
   payload.WithString("IdentityStore", IdentityStoreMapper::GetNameForIdentityStore(m_identityStore));
  }

  if(m_namespaceErrorHasBeenSet)
  {
   payload.WithObject("NamespaceError", m_namespaceError.Jsonize());

  }

  if(m_iamIdentityCenterApplicationArnHasBeenSet)
  {
   payload.WithString("IamIdentityCenterApplicationArn", m_iamIdentityCenterApplicationArn);

  }

  if(m_iamIdentityCenterInstanceArnHasBeenSet)
  {
   payload.WithString("IamIdentityCenterInstanceArn", m_iamIdentityCenterInstanceArn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
