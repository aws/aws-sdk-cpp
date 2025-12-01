/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/PartnerProfile.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

PartnerProfile::PartnerProfile(JsonView jsonValue) { *this = jsonValue; }

PartnerProfile& PartnerProfile::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DisplayName")) {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WebsiteUrl")) {
    m_websiteUrl = jsonValue.GetString("WebsiteUrl");
    m_websiteUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogoUrl")) {
    m_logoUrl = jsonValue.GetString("LogoUrl");
    m_logoUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrimarySolutionType")) {
    m_primarySolutionType = PrimarySolutionTypeMapper::GetPrimarySolutionTypeForName(jsonValue.GetString("PrimarySolutionType"));
    m_primarySolutionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IndustrySegments")) {
    Aws::Utils::Array<JsonView> industrySegmentsJsonList = jsonValue.GetArray("IndustrySegments");
    for (unsigned industrySegmentsIndex = 0; industrySegmentsIndex < industrySegmentsJsonList.GetLength(); ++industrySegmentsIndex) {
      m_industrySegments.push_back(
          IndustrySegmentMapper::GetIndustrySegmentForName(industrySegmentsJsonList[industrySegmentsIndex].AsString()));
    }
    m_industrySegmentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TranslationSourceLocale")) {
    m_translationSourceLocale = jsonValue.GetString("TranslationSourceLocale");
    m_translationSourceLocaleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LocalizedContents")) {
    Aws::Utils::Array<JsonView> localizedContentsJsonList = jsonValue.GetArray("LocalizedContents");
    for (unsigned localizedContentsIndex = 0; localizedContentsIndex < localizedContentsJsonList.GetLength(); ++localizedContentsIndex) {
      m_localizedContents.push_back(localizedContentsJsonList[localizedContentsIndex].AsObject());
    }
    m_localizedContentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProfileId")) {
    m_profileId = jsonValue.GetString("ProfileId");
    m_profileIdHasBeenSet = true;
  }
  return *this;
}

JsonValue PartnerProfile::Jsonize() const {
  JsonValue payload;

  if (m_displayNameHasBeenSet) {
    payload.WithString("DisplayName", m_displayName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_websiteUrlHasBeenSet) {
    payload.WithString("WebsiteUrl", m_websiteUrl);
  }

  if (m_logoUrlHasBeenSet) {
    payload.WithString("LogoUrl", m_logoUrl);
  }

  if (m_primarySolutionTypeHasBeenSet) {
    payload.WithString("PrimarySolutionType", PrimarySolutionTypeMapper::GetNameForPrimarySolutionType(m_primarySolutionType));
  }

  if (m_industrySegmentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> industrySegmentsJsonList(m_industrySegments.size());
    for (unsigned industrySegmentsIndex = 0; industrySegmentsIndex < industrySegmentsJsonList.GetLength(); ++industrySegmentsIndex) {
      industrySegmentsJsonList[industrySegmentsIndex].AsString(
          IndustrySegmentMapper::GetNameForIndustrySegment(m_industrySegments[industrySegmentsIndex]));
    }
    payload.WithArray("IndustrySegments", std::move(industrySegmentsJsonList));
  }

  if (m_translationSourceLocaleHasBeenSet) {
    payload.WithString("TranslationSourceLocale", m_translationSourceLocale);
  }

  if (m_localizedContentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> localizedContentsJsonList(m_localizedContents.size());
    for (unsigned localizedContentsIndex = 0; localizedContentsIndex < localizedContentsJsonList.GetLength(); ++localizedContentsIndex) {
      localizedContentsJsonList[localizedContentsIndex].AsObject(m_localizedContents[localizedContentsIndex].Jsonize());
    }
    payload.WithArray("LocalizedContents", std::move(localizedContentsJsonList));
  }

  if (m_profileIdHasBeenSet) {
    payload.WithString("ProfileId", m_profileId);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
