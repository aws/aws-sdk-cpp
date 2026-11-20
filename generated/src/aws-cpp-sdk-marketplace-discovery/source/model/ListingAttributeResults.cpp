/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/ListingAttributeResults.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

ListingAttributeResults::ListingAttributeResults(JsonView jsonValue) { *this = jsonValue; }

ListingAttributeResults& ListingAttributeResults::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("caseStudy")) {
    m_caseStudy = jsonValue.GetObject("caseStudy");
    m_caseStudyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("specializationDetail")) {
    m_specializationDetail = jsonValue.GetObject("specializationDetail");
    m_specializationDetailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trustCenterSource")) {
    m_trustCenterSource = jsonValue.GetObject("trustCenterSource");
    m_trustCenterSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trustCenterCertification")) {
    m_trustCenterCertification = jsonValue.GetObject("trustCenterCertification");
    m_trustCenterCertificationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trustCenterDocument")) {
    m_trustCenterDocument = jsonValue.GetObject("trustCenterDocument");
    m_trustCenterDocumentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trustCenterControl")) {
    m_trustCenterControl = jsonValue.GetObject("trustCenterControl");
    m_trustCenterControlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trustCenterFaq")) {
    m_trustCenterFaq = jsonValue.GetObject("trustCenterFaq");
    m_trustCenterFaqHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trustCenterUpdate")) {
    m_trustCenterUpdate = jsonValue.GetObject("trustCenterUpdate");
    m_trustCenterUpdateHasBeenSet = true;
  }
  return *this;
}

JsonValue ListingAttributeResults::Jsonize() const {
  JsonValue payload;

  if (m_caseStudyHasBeenSet) {
    payload.WithObject("caseStudy", m_caseStudy.Jsonize());
  }

  if (m_specializationDetailHasBeenSet) {
    payload.WithObject("specializationDetail", m_specializationDetail.Jsonize());
  }

  if (m_trustCenterSourceHasBeenSet) {
    payload.WithObject("trustCenterSource", m_trustCenterSource.Jsonize());
  }

  if (m_trustCenterCertificationHasBeenSet) {
    payload.WithObject("trustCenterCertification", m_trustCenterCertification.Jsonize());
  }

  if (m_trustCenterDocumentHasBeenSet) {
    payload.WithObject("trustCenterDocument", m_trustCenterDocument.Jsonize());
  }

  if (m_trustCenterControlHasBeenSet) {
    payload.WithObject("trustCenterControl", m_trustCenterControl.Jsonize());
  }

  if (m_trustCenterFaqHasBeenSet) {
    payload.WithObject("trustCenterFaq", m_trustCenterFaq.Jsonize());
  }

  if (m_trustCenterUpdateHasBeenSet) {
    payload.WithObject("trustCenterUpdate", m_trustCenterUpdate.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
