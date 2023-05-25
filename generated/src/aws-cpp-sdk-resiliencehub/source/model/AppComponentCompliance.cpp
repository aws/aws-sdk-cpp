/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AppComponentCompliance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

AppComponentCompliance::AppComponentCompliance() : 
    m_appComponentNameHasBeenSet(false),
    m_complianceHasBeenSet(false),
    m_costHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resiliencyScoreHasBeenSet(false),
    m_status(ComplianceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

AppComponentCompliance::AppComponentCompliance(JsonView jsonValue) : 
    m_appComponentNameHasBeenSet(false),
    m_complianceHasBeenSet(false),
    m_costHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resiliencyScoreHasBeenSet(false),
    m_status(ComplianceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AppComponentCompliance& AppComponentCompliance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appComponentName"))
  {
    m_appComponentName = jsonValue.GetString("appComponentName");

    m_appComponentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("compliance"))
  {
    Aws::Map<Aws::String, JsonView> complianceJsonMap = jsonValue.GetObject("compliance").GetAllObjects();
    for(auto& complianceItem : complianceJsonMap)
    {
      m_compliance[DisruptionTypeMapper::GetDisruptionTypeForName(complianceItem.first)] = complianceItem.second.AsObject();
    }
    m_complianceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cost"))
  {
    m_cost = jsonValue.GetObject("cost");

    m_costHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resiliencyScore"))
  {
    m_resiliencyScore = jsonValue.GetObject("resiliencyScore");

    m_resiliencyScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ComplianceStatusMapper::GetComplianceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AppComponentCompliance::Jsonize() const
{
  JsonValue payload;

  if(m_appComponentNameHasBeenSet)
  {
   payload.WithString("appComponentName", m_appComponentName);

  }

  if(m_complianceHasBeenSet)
  {
   JsonValue complianceJsonMap;
   for(auto& complianceItem : m_compliance)
   {
     complianceJsonMap.WithObject(DisruptionTypeMapper::GetNameForDisruptionType(complianceItem.first), complianceItem.second.Jsonize());
   }
   payload.WithObject("compliance", std::move(complianceJsonMap));

  }

  if(m_costHasBeenSet)
  {
   payload.WithObject("cost", m_cost.Jsonize());

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_resiliencyScoreHasBeenSet)
  {
   payload.WithObject("resiliencyScore", m_resiliencyScore.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ComplianceStatusMapper::GetNameForComplianceStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
