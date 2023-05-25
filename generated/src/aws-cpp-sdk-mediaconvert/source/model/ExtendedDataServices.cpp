/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ExtendedDataServices.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

ExtendedDataServices::ExtendedDataServices() : 
    m_copyProtectionAction(CopyProtectionAction::NOT_SET),
    m_copyProtectionActionHasBeenSet(false),
    m_vchipAction(VchipAction::NOT_SET),
    m_vchipActionHasBeenSet(false)
{
}

ExtendedDataServices::ExtendedDataServices(JsonView jsonValue) : 
    m_copyProtectionAction(CopyProtectionAction::NOT_SET),
    m_copyProtectionActionHasBeenSet(false),
    m_vchipAction(VchipAction::NOT_SET),
    m_vchipActionHasBeenSet(false)
{
  *this = jsonValue;
}

ExtendedDataServices& ExtendedDataServices::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("copyProtectionAction"))
  {
    m_copyProtectionAction = CopyProtectionActionMapper::GetCopyProtectionActionForName(jsonValue.GetString("copyProtectionAction"));

    m_copyProtectionActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vchipAction"))
  {
    m_vchipAction = VchipActionMapper::GetVchipActionForName(jsonValue.GetString("vchipAction"));

    m_vchipActionHasBeenSet = true;
  }

  return *this;
}

JsonValue ExtendedDataServices::Jsonize() const
{
  JsonValue payload;

  if(m_copyProtectionActionHasBeenSet)
  {
   payload.WithString("copyProtectionAction", CopyProtectionActionMapper::GetNameForCopyProtectionAction(m_copyProtectionAction));
  }

  if(m_vchipActionHasBeenSet)
  {
   payload.WithString("vchipAction", VchipActionMapper::GetNameForVchipAction(m_vchipAction));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
