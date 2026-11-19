/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ContentAlternatives.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ContentAlternatives::ContentAlternatives(JsonView jsonValue) { *this = jsonValue; }

ContentAlternatives& ContentAlternatives::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Text")) {
    Aws::Utils::Array<JsonView> textJsonList = jsonValue.GetArray("Text");
    for (unsigned textIndex = 0; textIndex < textJsonList.GetLength(); ++textIndex) {
      m_text.push_back(textJsonList[textIndex].AsObject());
    }
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextList")) {
    Aws::Utils::Array<JsonView> textListJsonList = jsonValue.GetArray("TextList");
    for (unsigned textListIndex = 0; textListIndex < textListJsonList.GetLength(); ++textListIndex) {
      m_textList.push_back(textListJsonList[textListIndex].AsObject());
    }
    m_textListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AdditionalResources")) {
    Aws::Utils::Array<JsonView> additionalResourcesJsonList = jsonValue.GetArray("AdditionalResources");
    for (unsigned additionalResourcesIndex = 0; additionalResourcesIndex < additionalResourcesJsonList.GetLength();
         ++additionalResourcesIndex) {
      m_additionalResources.push_back(additionalResourcesJsonList[additionalResourcesIndex].AsObject());
    }
    m_additionalResourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseCases")) {
    Aws::Utils::Array<JsonView> useCasesJsonList = jsonValue.GetArray("UseCases");
    for (unsigned useCasesIndex = 0; useCasesIndex < useCasesJsonList.GetLength(); ++useCasesIndex) {
      m_useCases.push_back(useCasesJsonList[useCasesIndex].AsObject());
    }
    m_useCasesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CaseStudies")) {
    Aws::Utils::Array<JsonView> caseStudiesJsonList = jsonValue.GetArray("CaseStudies");
    for (unsigned caseStudiesIndex = 0; caseStudiesIndex < caseStudiesJsonList.GetLength(); ++caseStudiesIndex) {
      m_caseStudies.push_back(caseStudiesJsonList[caseStudiesIndex].AsObject());
    }
    m_caseStudiesHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentAlternatives::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    Aws::Utils::Array<JsonValue> textJsonList(m_text.size());
    for (unsigned textIndex = 0; textIndex < textJsonList.GetLength(); ++textIndex) {
      textJsonList[textIndex].AsObject(m_text[textIndex].Jsonize());
    }
    payload.WithArray("Text", std::move(textJsonList));
  }

  if (m_textListHasBeenSet) {
    Aws::Utils::Array<JsonValue> textListJsonList(m_textList.size());
    for (unsigned textListIndex = 0; textListIndex < textListJsonList.GetLength(); ++textListIndex) {
      textListJsonList[textListIndex].AsObject(m_textList[textListIndex].Jsonize());
    }
    payload.WithArray("TextList", std::move(textListJsonList));
  }

  if (m_additionalResourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> additionalResourcesJsonList(m_additionalResources.size());
    for (unsigned additionalResourcesIndex = 0; additionalResourcesIndex < additionalResourcesJsonList.GetLength();
         ++additionalResourcesIndex) {
      additionalResourcesJsonList[additionalResourcesIndex].AsObject(m_additionalResources[additionalResourcesIndex].Jsonize());
    }
    payload.WithArray("AdditionalResources", std::move(additionalResourcesJsonList));
  }

  if (m_useCasesHasBeenSet) {
    Aws::Utils::Array<JsonValue> useCasesJsonList(m_useCases.size());
    for (unsigned useCasesIndex = 0; useCasesIndex < useCasesJsonList.GetLength(); ++useCasesIndex) {
      useCasesJsonList[useCasesIndex].AsObject(m_useCases[useCasesIndex].Jsonize());
    }
    payload.WithArray("UseCases", std::move(useCasesJsonList));
  }

  if (m_caseStudiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> caseStudiesJsonList(m_caseStudies.size());
    for (unsigned caseStudiesIndex = 0; caseStudiesIndex < caseStudiesJsonList.GetLength(); ++caseStudiesIndex) {
      caseStudiesJsonList[caseStudiesIndex].AsObject(m_caseStudies[caseStudiesIndex].Jsonize());
    }
    payload.WithArray("CaseStudies", std::move(caseStudiesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
