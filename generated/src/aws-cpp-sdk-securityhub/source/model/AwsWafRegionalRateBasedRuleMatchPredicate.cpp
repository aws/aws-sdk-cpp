﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafRegionalRateBasedRuleMatchPredicate.h>
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

AwsWafRegionalRateBasedRuleMatchPredicate::AwsWafRegionalRateBasedRuleMatchPredicate(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsWafRegionalRateBasedRuleMatchPredicate& AwsWafRegionalRateBasedRuleMatchPredicate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataId"))
  {
    m_dataId = jsonValue.GetString("DataId");
    m_dataIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Negated"))
  {
    m_negated = jsonValue.GetBool("Negated");
    m_negatedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsWafRegionalRateBasedRuleMatchPredicate::Jsonize() const
{
  JsonValue payload;

  if(m_dataIdHasBeenSet)
  {
   payload.WithString("DataId", m_dataId);

  }

  if(m_negatedHasBeenSet)
  {
   payload.WithBool("Negated", m_negated);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
