﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Compliance.h>
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

Compliance::Compliance() : 
    m_status(ComplianceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_relatedRequirementsHasBeenSet(false),
    m_statusReasonsHasBeenSet(false),
    m_securityControlIdHasBeenSet(false),
    m_associatedStandardsHasBeenSet(false)
{
}

Compliance::Compliance(JsonView jsonValue) : 
    m_status(ComplianceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_relatedRequirementsHasBeenSet(false),
    m_statusReasonsHasBeenSet(false),
    m_securityControlIdHasBeenSet(false),
    m_associatedStandardsHasBeenSet(false)
{
  *this = jsonValue;
}

Compliance& Compliance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ComplianceStatusMapper::GetComplianceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelatedRequirements"))
  {
    Aws::Utils::Array<JsonView> relatedRequirementsJsonList = jsonValue.GetArray("RelatedRequirements");
    for(unsigned relatedRequirementsIndex = 0; relatedRequirementsIndex < relatedRequirementsJsonList.GetLength(); ++relatedRequirementsIndex)
    {
      m_relatedRequirements.push_back(relatedRequirementsJsonList[relatedRequirementsIndex].AsString());
    }
    m_relatedRequirementsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReasons"))
  {
    Aws::Utils::Array<JsonView> statusReasonsJsonList = jsonValue.GetArray("StatusReasons");
    for(unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex)
    {
      m_statusReasons.push_back(statusReasonsJsonList[statusReasonsIndex].AsObject());
    }
    m_statusReasonsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityControlId"))
  {
    m_securityControlId = jsonValue.GetString("SecurityControlId");

    m_securityControlIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociatedStandards"))
  {
    Aws::Utils::Array<JsonView> associatedStandardsJsonList = jsonValue.GetArray("AssociatedStandards");
    for(unsigned associatedStandardsIndex = 0; associatedStandardsIndex < associatedStandardsJsonList.GetLength(); ++associatedStandardsIndex)
    {
      m_associatedStandards.push_back(associatedStandardsJsonList[associatedStandardsIndex].AsObject());
    }
    m_associatedStandardsHasBeenSet = true;
  }

  return *this;
}

JsonValue Compliance::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ComplianceStatusMapper::GetNameForComplianceStatus(m_status));
  }

  if(m_relatedRequirementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedRequirementsJsonList(m_relatedRequirements.size());
   for(unsigned relatedRequirementsIndex = 0; relatedRequirementsIndex < relatedRequirementsJsonList.GetLength(); ++relatedRequirementsIndex)
   {
     relatedRequirementsJsonList[relatedRequirementsIndex].AsString(m_relatedRequirements[relatedRequirementsIndex]);
   }
   payload.WithArray("RelatedRequirements", std::move(relatedRequirementsJsonList));

  }

  if(m_statusReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusReasonsJsonList(m_statusReasons.size());
   for(unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex)
   {
     statusReasonsJsonList[statusReasonsIndex].AsObject(m_statusReasons[statusReasonsIndex].Jsonize());
   }
   payload.WithArray("StatusReasons", std::move(statusReasonsJsonList));

  }

  if(m_securityControlIdHasBeenSet)
  {
   payload.WithString("SecurityControlId", m_securityControlId);

  }

  if(m_associatedStandardsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedStandardsJsonList(m_associatedStandards.size());
   for(unsigned associatedStandardsIndex = 0; associatedStandardsIndex < associatedStandardsJsonList.GetLength(); ++associatedStandardsIndex)
   {
     associatedStandardsJsonList[associatedStandardsIndex].AsObject(m_associatedStandards[associatedStandardsIndex].Jsonize());
   }
   payload.WithArray("AssociatedStandards", std::move(associatedStandardsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
