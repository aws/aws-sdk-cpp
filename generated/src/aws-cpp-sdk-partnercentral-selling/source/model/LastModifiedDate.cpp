/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/LastModifiedDate.h>
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

LastModifiedDate::LastModifiedDate(JsonView jsonValue)
{
  *this = jsonValue;
}

LastModifiedDate& LastModifiedDate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AfterLastModifiedDate"))
  {
    m_afterLastModifiedDate = jsonValue.GetString("AfterLastModifiedDate");
    m_afterLastModifiedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BeforeLastModifiedDate"))
  {
    m_beforeLastModifiedDate = jsonValue.GetString("BeforeLastModifiedDate");
    m_beforeLastModifiedDateHasBeenSet = true;
  }
  return *this;
}

JsonValue LastModifiedDate::Jsonize() const
{
  JsonValue payload;

  if(m_afterLastModifiedDateHasBeenSet)
  {
   payload.WithString("AfterLastModifiedDate", m_afterLastModifiedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_beforeLastModifiedDateHasBeenSet)
  {
   payload.WithString("BeforeLastModifiedDate", m_beforeLastModifiedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
