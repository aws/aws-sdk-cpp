/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/CustomerAccountSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

CustomerAccountSummary::CustomerAccountSummary(JsonView jsonValue) { *this = jsonValue; }

CustomerAccountSummary& CustomerAccountSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Catalog")) {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnrichmentStatus")) {
    m_enrichmentStatus = EnrichmentStatusMapper::GetEnrichmentStatusForName(jsonValue.GetString("EnrichmentStatus"));
    m_enrichmentStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PartnerAccountIdentifier")) {
    m_partnerAccountIdentifier = jsonValue.GetString("PartnerAccountIdentifier");
    m_partnerAccountIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedDate")) {
    m_createdDate = jsonValue.GetString("CreatedDate");
    m_createdDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedDate")) {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomerAccount")) {
    m_customerAccount = jsonValue.GetObject("CustomerAccount");
    m_customerAccountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AwsEnrichment")) {
    m_awsEnrichment = jsonValue.GetObject("AwsEnrichment");
    m_awsEnrichmentHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerAccountSummary::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_enrichmentStatusHasBeenSet) {
    payload.WithString("EnrichmentStatus", EnrichmentStatusMapper::GetNameForEnrichmentStatus(m_enrichmentStatus));
  }

  if (m_partnerAccountIdentifierHasBeenSet) {
    payload.WithString("PartnerAccountIdentifier", m_partnerAccountIdentifier);
  }

  if (m_createdDateHasBeenSet) {
    payload.WithString("CreatedDate", m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastModifiedDateHasBeenSet) {
    payload.WithString("LastModifiedDate", m_lastModifiedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_customerAccountHasBeenSet) {
    payload.WithObject("CustomerAccount", m_customerAccount.Jsonize());
  }

  if (m_awsEnrichmentHasBeenSet) {
    payload.WithObject("AwsEnrichment", m_awsEnrichment.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
