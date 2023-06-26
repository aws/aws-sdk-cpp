/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/ListSolNetworkInstanceInfo.h>
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

ListSolNetworkInstanceInfo::ListSolNetworkInstanceInfo() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_nsInstanceDescriptionHasBeenSet(false),
    m_nsInstanceNameHasBeenSet(false),
    m_nsState(NsState::NOT_SET),
    m_nsStateHasBeenSet(false),
    m_nsdIdHasBeenSet(false),
    m_nsdInfoIdHasBeenSet(false)
{
}

ListSolNetworkInstanceInfo::ListSolNetworkInstanceInfo(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_nsInstanceDescriptionHasBeenSet(false),
    m_nsInstanceNameHasBeenSet(false),
    m_nsState(NsState::NOT_SET),
    m_nsStateHasBeenSet(false),
    m_nsdIdHasBeenSet(false),
    m_nsdInfoIdHasBeenSet(false)
{
  *this = jsonValue;
}

ListSolNetworkInstanceInfo& ListSolNetworkInstanceInfo::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nsInstanceDescription"))
  {
    m_nsInstanceDescription = jsonValue.GetString("nsInstanceDescription");

    m_nsInstanceDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nsInstanceName"))
  {
    m_nsInstanceName = jsonValue.GetString("nsInstanceName");

    m_nsInstanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nsState"))
  {
    m_nsState = NsStateMapper::GetNsStateForName(jsonValue.GetString("nsState"));

    m_nsStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nsdId"))
  {
    m_nsdId = jsonValue.GetString("nsdId");

    m_nsdIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nsdInfoId"))
  {
    m_nsdInfoId = jsonValue.GetString("nsdInfoId");

    m_nsdInfoIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ListSolNetworkInstanceInfo::Jsonize() const
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

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  if(m_nsInstanceDescriptionHasBeenSet)
  {
   payload.WithString("nsInstanceDescription", m_nsInstanceDescription);

  }

  if(m_nsInstanceNameHasBeenSet)
  {
   payload.WithString("nsInstanceName", m_nsInstanceName);

  }

  if(m_nsStateHasBeenSet)
  {
   payload.WithString("nsState", NsStateMapper::GetNameForNsState(m_nsState));
  }

  if(m_nsdIdHasBeenSet)
  {
   payload.WithString("nsdId", m_nsdId);

  }

  if(m_nsdInfoIdHasBeenSet)
  {
   payload.WithString("nsdInfoId", m_nsdInfoId);

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
