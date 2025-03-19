/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/EngagementContextPayload.h>
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

EngagementContextPayload::EngagementContextPayload(JsonView jsonValue)
{
  *this = jsonValue;
}

EngagementContextPayload& EngagementContextPayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomerProject"))
  {
    m_customerProject = jsonValue.GetObject("CustomerProject");
    m_customerProjectHasBeenSet = true;
  }
  return *this;
}

JsonValue EngagementContextPayload::Jsonize() const
{
  JsonValue payload;

  if(m_customerProjectHasBeenSet)
  {
   payload.WithObject("CustomerProject", m_customerProject.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
