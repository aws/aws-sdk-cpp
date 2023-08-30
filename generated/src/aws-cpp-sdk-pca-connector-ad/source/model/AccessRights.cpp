/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/AccessRights.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

AccessRights::AccessRights() : 
    m_autoEnroll(AccessRight::NOT_SET),
    m_autoEnrollHasBeenSet(false),
    m_enroll(AccessRight::NOT_SET),
    m_enrollHasBeenSet(false)
{
}

AccessRights::AccessRights(JsonView jsonValue) : 
    m_autoEnroll(AccessRight::NOT_SET),
    m_autoEnrollHasBeenSet(false),
    m_enroll(AccessRight::NOT_SET),
    m_enrollHasBeenSet(false)
{
  *this = jsonValue;
}

AccessRights& AccessRights::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoEnroll"))
  {
    m_autoEnroll = AccessRightMapper::GetAccessRightForName(jsonValue.GetString("AutoEnroll"));

    m_autoEnrollHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enroll"))
  {
    m_enroll = AccessRightMapper::GetAccessRightForName(jsonValue.GetString("Enroll"));

    m_enrollHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessRights::Jsonize() const
{
  JsonValue payload;

  if(m_autoEnrollHasBeenSet)
  {
   payload.WithString("AutoEnroll", AccessRightMapper::GetNameForAccessRight(m_autoEnroll));
  }

  if(m_enrollHasBeenSet)
  {
   payload.WithString("Enroll", AccessRightMapper::GetNameForAccessRight(m_enroll));
  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
