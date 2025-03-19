/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/OptInFeature.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

OptInFeature::OptInFeature(JsonView jsonValue)
{
  *this = jsonValue;
}

OptInFeature& OptInFeature::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("featureName"))
  {
    m_featureName = OptInFeatureNameMapper::GetOptInFeatureNameForName(jsonValue.GetString("featureName"));
    m_featureNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isEnabled"))
  {
    m_isEnabled = jsonValue.GetBool("isEnabled");
    m_isEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue OptInFeature::Jsonize() const
{
  JsonValue payload;

  if(m_featureNameHasBeenSet)
  {
   payload.WithString("featureName", OptInFeatureNameMapper::GetNameForOptInFeatureName(m_featureName));
  }

  if(m_isEnabledHasBeenSet)
  {
   payload.WithBool("isEnabled", m_isEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
