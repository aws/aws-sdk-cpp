/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ComplianceItemEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ComplianceItemEntry::ComplianceItemEntry() : 
    m_idHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_severity(ComplianceSeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_status(ComplianceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

ComplianceItemEntry::ComplianceItemEntry(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_severity(ComplianceSeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_status(ComplianceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceItemEntry& ComplianceItemEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = ComplianceSeverityMapper::GetComplianceSeverityForName(jsonValue.GetString("Severity"));

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ComplianceStatusMapper::GetComplianceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Details"))
  {
    Aws::Map<Aws::String, JsonView> detailsJsonMap = jsonValue.GetObject("Details").GetAllObjects();
    for(auto& detailsItem : detailsJsonMap)
    {
      m_details[detailsItem.first] = detailsItem.second.AsString();
    }
    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceItemEntry::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", ComplianceSeverityMapper::GetNameForComplianceSeverity(m_severity));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ComplianceStatusMapper::GetNameForComplianceStatus(m_status));
  }

  if(m_detailsHasBeenSet)
  {
   JsonValue detailsJsonMap;
   for(auto& detailsItem : m_details)
   {
     detailsJsonMap.WithString(detailsItem.first, detailsItem.second);
   }
   payload.WithObject("Details", std::move(detailsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
