/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ResourceServerScopeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

ResourceServerScopeDetails::ResourceServerScopeDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceServerScopeDetails& ResourceServerScopeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LongDescription"))
  {
    m_longDescription = jsonValue.GetString("LongDescription");
    m_longDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DetailedTitle"))
  {
    m_detailedTitle = jsonValue.GetString("DetailedTitle");
    m_detailedTitleHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceServerScopeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_longDescriptionHasBeenSet)
  {
   payload.WithString("LongDescription", m_longDescription);

  }

  if(m_detailedTitleHasBeenSet)
  {
   payload.WithString("DetailedTitle", m_detailedTitle);

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
