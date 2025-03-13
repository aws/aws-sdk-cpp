/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/SearchSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

SearchSummary::SearchSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchSummary& SearchSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SearchId"))
  {
    m_searchId = jsonValue.GetString("SearchId");
    m_searchIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchSummary::Jsonize() const
{
  JsonValue payload;

  if(m_searchIdHasBeenSet)
  {
   payload.WithString("SearchId", m_searchId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
