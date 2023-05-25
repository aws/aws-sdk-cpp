/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/ListSolFunctionInstanceInfo.h>
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

ListSolFunctionInstanceInfo::ListSolFunctionInstanceInfo() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_instantiatedVnfInfoHasBeenSet(false),
    m_instantiationState(VnfInstantiationState::NOT_SET),
    m_instantiationStateHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_nsInstanceIdHasBeenSet(false),
    m_vnfPkgIdHasBeenSet(false),
    m_vnfPkgNameHasBeenSet(false)
{
}

ListSolFunctionInstanceInfo::ListSolFunctionInstanceInfo(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_instantiatedVnfInfoHasBeenSet(false),
    m_instantiationState(VnfInstantiationState::NOT_SET),
    m_instantiationStateHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_nsInstanceIdHasBeenSet(false),
    m_vnfPkgIdHasBeenSet(false),
    m_vnfPkgNameHasBeenSet(false)
{
  *this = jsonValue;
}

ListSolFunctionInstanceInfo& ListSolFunctionInstanceInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instantiatedVnfInfo"))
  {
    m_instantiatedVnfInfo = jsonValue.GetObject("instantiatedVnfInfo");

    m_instantiatedVnfInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instantiationState"))
  {
    m_instantiationState = VnfInstantiationStateMapper::GetVnfInstantiationStateForName(jsonValue.GetString("instantiationState"));

    m_instantiationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nsInstanceId"))
  {
    m_nsInstanceId = jsonValue.GetString("nsInstanceId");

    m_nsInstanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vnfPkgId"))
  {
    m_vnfPkgId = jsonValue.GetString("vnfPkgId");

    m_vnfPkgIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vnfPkgName"))
  {
    m_vnfPkgName = jsonValue.GetString("vnfPkgName");

    m_vnfPkgNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ListSolFunctionInstanceInfo::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_instantiatedVnfInfoHasBeenSet)
  {
   payload.WithObject("instantiatedVnfInfo", m_instantiatedVnfInfo.Jsonize());

  }

  if(m_instantiationStateHasBeenSet)
  {
   payload.WithString("instantiationState", VnfInstantiationStateMapper::GetNameForVnfInstantiationState(m_instantiationState));
  }

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  if(m_nsInstanceIdHasBeenSet)
  {
   payload.WithString("nsInstanceId", m_nsInstanceId);

  }

  if(m_vnfPkgIdHasBeenSet)
  {
   payload.WithString("vnfPkgId", m_vnfPkgId);

  }

  if(m_vnfPkgNameHasBeenSet)
  {
   payload.WithString("vnfPkgName", m_vnfPkgName);

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
