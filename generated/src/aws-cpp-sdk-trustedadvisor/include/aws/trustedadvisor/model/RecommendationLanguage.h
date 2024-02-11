/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TrustedAdvisor
{
namespace Model
{
  enum class RecommendationLanguage
  {
    NOT_SET,
    en,
    ja,
    zh,
    fr,
    de,
    ko,
    zh_TW,
    it,
    es,
    pt_BR,
    id
  };

namespace RecommendationLanguageMapper
{
AWS_TRUSTEDADVISOR_API RecommendationLanguage GetRecommendationLanguageForName(const Aws::String& name);

AWS_TRUSTEDADVISOR_API Aws::String GetNameForRecommendationLanguage(RecommendationLanguage value);
} // namespace RecommendationLanguageMapper
} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
