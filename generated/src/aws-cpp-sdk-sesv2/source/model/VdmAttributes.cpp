/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/VdmAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

VdmAttributes::VdmAttributes() : 
    m_vdmEnabled(FeatureStatus::NOT_SET),
    m_vdmEnabledHasBeenSet(false),
    m_dashboardAttributesHasBeenSet(false),
    m_guardianAttributesHasBeenSet(false)
{
}

VdmAttributes::VdmAttributes(JsonView jsonValue) : 
    m_vdmEnabled(FeatureStatus::NOT_SET),
    m_vdmEnabledHasBeenSet(false),
    m_dashboardAttributesHasBeenSet(false),
    m_guardianAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

VdmAttributes& VdmAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VdmEnabled"))
  {
    m_vdmEnabled = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("VdmEnabled"));

    m_vdmEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DashboardAttributes"))
  {
    m_dashboardAttributes = jsonValue.GetObject("DashboardAttributes");

    m_dashboardAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GuardianAttributes"))
  {
    m_guardianAttributes = jsonValue.GetObject("GuardianAttributes");

    m_guardianAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue VdmAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_vdmEnabledHasBeenSet)
  {
   payload.WithString("VdmEnabled", FeatureStatusMapper::GetNameForFeatureStatus(m_vdmEnabled));
  }

  if(m_dashboardAttributesHasBeenSet)
  {
   payload.WithObject("DashboardAttributes", m_dashboardAttributes.Jsonize());

  }

  if(m_guardianAttributesHasBeenSet)
  {
   payload.WithObject("GuardianAttributes", m_guardianAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
