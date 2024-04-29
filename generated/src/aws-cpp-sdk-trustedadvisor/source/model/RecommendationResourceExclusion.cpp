/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/RecommendationResourceExclusion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TrustedAdvisor
{
namespace Model
{

RecommendationResourceExclusion::RecommendationResourceExclusion() : 
    m_arnHasBeenSet(false),
    m_isExcluded(false),
    m_isExcludedHasBeenSet(false)
{
}

RecommendationResourceExclusion::RecommendationResourceExclusion(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_isExcluded(false),
    m_isExcludedHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationResourceExclusion& RecommendationResourceExclusion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isExcluded"))
  {
    m_isExcluded = jsonValue.GetBool("isExcluded");

    m_isExcludedHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationResourceExclusion::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_isExcludedHasBeenSet)
  {
   payload.WithBool("isExcluded", m_isExcluded);

  }

  return payload;
}

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
