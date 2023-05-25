/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsSsmPatch.h>
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

AwsSsmPatch::AwsSsmPatch() : 
    m_complianceSummaryHasBeenSet(false)
{
}

AwsSsmPatch::AwsSsmPatch(JsonView jsonValue) : 
    m_complianceSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

AwsSsmPatch& AwsSsmPatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComplianceSummary"))
  {
    m_complianceSummary = jsonValue.GetObject("ComplianceSummary");

    m_complianceSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsSsmPatch::Jsonize() const
{
  JsonValue payload;

  if(m_complianceSummaryHasBeenSet)
  {
   payload.WithObject("ComplianceSummary", m_complianceSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
