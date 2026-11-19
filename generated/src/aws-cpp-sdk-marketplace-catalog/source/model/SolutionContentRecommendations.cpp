/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/SolutionContentRecommendations.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

SolutionContentRecommendations::SolutionContentRecommendations(JsonView jsonValue) { *this = jsonValue; }

SolutionContentRecommendations& SolutionContentRecommendations::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Title")) {
    m_title = jsonValue.GetObject("Title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShortDescription")) {
    m_shortDescription = jsonValue.GetObject("ShortDescription");
    m_shortDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LongDescription")) {
    m_longDescription = jsonValue.GetObject("LongDescription");
    m_longDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IntegrationDetails")) {
    m_integrationDetails = jsonValue.GetObject("IntegrationDetails");
    m_integrationDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AdditionalResources")) {
    m_additionalResources = jsonValue.GetObject("AdditionalResources");
    m_additionalResourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseCases")) {
    m_useCases = jsonValue.GetObject("UseCases");
    m_useCasesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CaseStudies")) {
    m_caseStudies = jsonValue.GetObject("CaseStudies");
    m_caseStudiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Citations")) {
    Aws::Utils::Array<JsonView> citationsJsonList = jsonValue.GetArray("Citations");
    for (unsigned citationsIndex = 0; citationsIndex < citationsJsonList.GetLength(); ++citationsIndex) {
      m_citations.push_back(citationsJsonList[citationsIndex].AsObject());
    }
    m_citationsHasBeenSet = true;
  }
  return *this;
}

JsonValue SolutionContentRecommendations::Jsonize() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithObject("Title", m_title.Jsonize());
  }

  if (m_shortDescriptionHasBeenSet) {
    payload.WithObject("ShortDescription", m_shortDescription.Jsonize());
  }

  if (m_longDescriptionHasBeenSet) {
    payload.WithObject("LongDescription", m_longDescription.Jsonize());
  }

  if (m_integrationDetailsHasBeenSet) {
    payload.WithObject("IntegrationDetails", m_integrationDetails.Jsonize());
  }

  if (m_additionalResourcesHasBeenSet) {
    payload.WithObject("AdditionalResources", m_additionalResources.Jsonize());
  }

  if (m_useCasesHasBeenSet) {
    payload.WithObject("UseCases", m_useCases.Jsonize());
  }

  if (m_caseStudiesHasBeenSet) {
    payload.WithObject("CaseStudies", m_caseStudies.Jsonize());
  }

  if (m_citationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> citationsJsonList(m_citations.size());
    for (unsigned citationsIndex = 0; citationsIndex < citationsJsonList.GetLength(); ++citationsIndex) {
      citationsJsonList[citationsIndex].AsObject(m_citations[citationsIndex].Jsonize());
    }
    payload.WithArray("Citations", std::move(citationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
