/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DocumentAcl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

DocumentAcl::DocumentAcl(JsonView jsonValue)
{
  *this = jsonValue;
}

DocumentAcl& DocumentAcl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowlist"))
  {
    m_allowlist = jsonValue.GetObject("allowlist");
    m_allowlistHasBeenSet = true;
  }
  if(jsonValue.ValueExists("denyList"))
  {
    m_denyList = jsonValue.GetObject("denyList");
    m_denyListHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentAcl::Jsonize() const
{
  JsonValue payload;

  if(m_allowlistHasBeenSet)
  {
   payload.WithObject("allowlist", m_allowlist.Jsonize());

  }

  if(m_denyListHasBeenSet)
  {
   payload.WithObject("denyList", m_denyList.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
