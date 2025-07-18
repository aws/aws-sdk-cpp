/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleSet.h>
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

RuleSet::RuleSet(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleSet& RuleSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleSetId"))
  {
    m_ruleSetId = jsonValue.GetString("RuleSetId");
    m_ruleSetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleSetName"))
  {
    m_ruleSetName = jsonValue.GetString("RuleSetName");
    m_ruleSetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModificationDate"))
  {
    m_lastModificationDate = jsonValue.GetDouble("LastModificationDate");
    m_lastModificationDateHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleSet::Jsonize() const
{
  JsonValue payload;

  if(m_ruleSetIdHasBeenSet)
  {
   payload.WithString("RuleSetId", m_ruleSetId);

  }

  if(m_ruleSetNameHasBeenSet)
  {
   payload.WithString("RuleSetName", m_ruleSetName);

  }

  if(m_lastModificationDateHasBeenSet)
  {
   payload.WithDouble("LastModificationDate", m_lastModificationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
