/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-account/model/GetQualificationsAssociationDetailsResult.h>

#include <utility>

using namespace Aws::PartnerCentralAccount::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQualificationsAssociationDetailsResult::GetQualificationsAssociationDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetQualificationsAssociationDetailsResult& GetQualificationsAssociationDetailsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Catalog")) {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = QualificationsAssociationStatusMapper::GetQualificationsAssociationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrimaryPartner")) {
    m_primaryPartner = jsonValue.GetObject("PrimaryPartner");
    m_primaryPartnerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssociatedPartners")) {
    Aws::Utils::Array<JsonView> associatedPartnersJsonList = jsonValue.GetArray("AssociatedPartners");
    for (unsigned associatedPartnersIndex = 0; associatedPartnersIndex < associatedPartnersJsonList.GetLength();
         ++associatedPartnersIndex) {
      m_associatedPartners.push_back(associatedPartnersJsonList[associatedPartnersIndex].AsObject());
    }
    m_associatedPartnersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
