/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/EngagementContextDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

EngagementContextDetails::EngagementContextDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

EngagementContextDetails& EngagementContextDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = EngagementContextTypeMapper::GetEngagementContextTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Payload"))
  {
    m_payload = jsonValue.GetObject("Payload");
    m_payloadHasBeenSet = true;
  }
  return *this;
}

JsonValue EngagementContextDetails::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EngagementContextTypeMapper::GetNameForEngagementContextType(m_type));
  }

  if(m_payloadHasBeenSet)
  {
   payload.WithObject("Payload", m_payload.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
