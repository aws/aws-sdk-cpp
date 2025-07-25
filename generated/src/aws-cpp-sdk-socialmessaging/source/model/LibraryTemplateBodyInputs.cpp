/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/LibraryTemplateBodyInputs.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SocialMessaging
{
namespace Model
{

LibraryTemplateBodyInputs::LibraryTemplateBodyInputs(JsonView jsonValue)
{
  *this = jsonValue;
}

LibraryTemplateBodyInputs& LibraryTemplateBodyInputs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addContactNumber"))
  {
    m_addContactNumber = jsonValue.GetBool("addContactNumber");
    m_addContactNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("addLearnMoreLink"))
  {
    m_addLearnMoreLink = jsonValue.GetBool("addLearnMoreLink");
    m_addLearnMoreLinkHasBeenSet = true;
  }
  if(jsonValue.ValueExists("addSecurityRecommendation"))
  {
    m_addSecurityRecommendation = jsonValue.GetBool("addSecurityRecommendation");
    m_addSecurityRecommendationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("addTrackPackageLink"))
  {
    m_addTrackPackageLink = jsonValue.GetBool("addTrackPackageLink");
    m_addTrackPackageLinkHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codeExpirationMinutes"))
  {
    m_codeExpirationMinutes = jsonValue.GetInteger("codeExpirationMinutes");
    m_codeExpirationMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue LibraryTemplateBodyInputs::Jsonize() const
{
  JsonValue payload;

  if(m_addContactNumberHasBeenSet)
  {
   payload.WithBool("addContactNumber", m_addContactNumber);

  }

  if(m_addLearnMoreLinkHasBeenSet)
  {
   payload.WithBool("addLearnMoreLink", m_addLearnMoreLink);

  }

  if(m_addSecurityRecommendationHasBeenSet)
  {
   payload.WithBool("addSecurityRecommendation", m_addSecurityRecommendation);

  }

  if(m_addTrackPackageLinkHasBeenSet)
  {
   payload.WithBool("addTrackPackageLink", m_addTrackPackageLink);

  }

  if(m_codeExpirationMinutesHasBeenSet)
  {
   payload.WithInteger("codeExpirationMinutes", m_codeExpirationMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
