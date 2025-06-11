/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ClientSideAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ClientSideAction::ClientSideAction(JsonView jsonValue)
{
  *this = jsonValue;
}

ClientSideAction& ClientSideAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UsageOfAction"))
  {
    m_usageOfAction = UsageOfActionMapper::GetUsageOfActionForName(jsonValue.GetString("UsageOfAction"));
    m_usageOfActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sensitivity"))
  {
    m_sensitivity = SensitivityToActMapper::GetSensitivityToActForName(jsonValue.GetString("Sensitivity"));
    m_sensitivityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExemptUriRegularExpressions"))
  {
    Aws::Utils::Array<JsonView> exemptUriRegularExpressionsJsonList = jsonValue.GetArray("ExemptUriRegularExpressions");
    for(unsigned exemptUriRegularExpressionsIndex = 0; exemptUriRegularExpressionsIndex < exemptUriRegularExpressionsJsonList.GetLength(); ++exemptUriRegularExpressionsIndex)
    {
      m_exemptUriRegularExpressions.push_back(exemptUriRegularExpressionsJsonList[exemptUriRegularExpressionsIndex].AsObject());
    }
    m_exemptUriRegularExpressionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientSideAction::Jsonize() const
{
  JsonValue payload;

  if(m_usageOfActionHasBeenSet)
  {
   payload.WithString("UsageOfAction", UsageOfActionMapper::GetNameForUsageOfAction(m_usageOfAction));
  }

  if(m_sensitivityHasBeenSet)
  {
   payload.WithString("Sensitivity", SensitivityToActMapper::GetNameForSensitivityToAct(m_sensitivity));
  }

  if(m_exemptUriRegularExpressionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exemptUriRegularExpressionsJsonList(m_exemptUriRegularExpressions.size());
   for(unsigned exemptUriRegularExpressionsIndex = 0; exemptUriRegularExpressionsIndex < exemptUriRegularExpressionsJsonList.GetLength(); ++exemptUriRegularExpressionsIndex)
   {
     exemptUriRegularExpressionsJsonList[exemptUriRegularExpressionsIndex].AsObject(m_exemptUriRegularExpressions[exemptUriRegularExpressionsIndex].Jsonize());
   }
   payload.WithArray("ExemptUriRegularExpressions", std::move(exemptUriRegularExpressionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
