/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DashboardVisualPublishOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DashboardVisualPublishOptions::DashboardVisualPublishOptions() : 
    m_exportHiddenFieldsOptionHasBeenSet(false)
{
}

DashboardVisualPublishOptions::DashboardVisualPublishOptions(JsonView jsonValue) : 
    m_exportHiddenFieldsOptionHasBeenSet(false)
{
  *this = jsonValue;
}

DashboardVisualPublishOptions& DashboardVisualPublishOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExportHiddenFieldsOption"))
  {
    m_exportHiddenFieldsOption = jsonValue.GetObject("ExportHiddenFieldsOption");

    m_exportHiddenFieldsOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue DashboardVisualPublishOptions::Jsonize() const
{
  JsonValue payload;

  if(m_exportHiddenFieldsOptionHasBeenSet)
  {
   payload.WithObject("ExportHiddenFieldsOption", m_exportHiddenFieldsOption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
