/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnalysisDefaults.h>
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

AnalysisDefaults::AnalysisDefaults() : 
    m_defaultNewSheetConfigurationHasBeenSet(false)
{
}

AnalysisDefaults::AnalysisDefaults(JsonView jsonValue) : 
    m_defaultNewSheetConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AnalysisDefaults& AnalysisDefaults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultNewSheetConfiguration"))
  {
    m_defaultNewSheetConfiguration = jsonValue.GetObject("DefaultNewSheetConfiguration");

    m_defaultNewSheetConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalysisDefaults::Jsonize() const
{
  JsonValue payload;

  if(m_defaultNewSheetConfigurationHasBeenSet)
  {
   payload.WithObject("DefaultNewSheetConfiguration", m_defaultNewSheetConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
