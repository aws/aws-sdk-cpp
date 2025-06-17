/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AutomationRulesFindingFieldsUpdateV2.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AutomationRulesFindingFieldsUpdateV2::AutomationRulesFindingFieldsUpdateV2(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomationRulesFindingFieldsUpdateV2& AutomationRulesFindingFieldsUpdateV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SeverityId"))
  {
    m_severityId = jsonValue.GetInteger("SeverityId");
    m_severityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Comment"))
  {
    m_comment = jsonValue.GetString("Comment");
    m_commentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusId"))
  {
    m_statusId = jsonValue.GetInteger("StatusId");
    m_statusIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomationRulesFindingFieldsUpdateV2::Jsonize() const
{
  JsonValue payload;

  if(m_severityIdHasBeenSet)
  {
   payload.WithInteger("SeverityId", m_severityId);

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("Comment", m_comment);

  }

  if(m_statusIdHasBeenSet)
  {
   payload.WithInteger("StatusId", m_statusId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
