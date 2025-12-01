/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-account/model/CreatePartnerResult.h>

#include <utility>

using namespace Aws::PartnerCentralAccount::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePartnerResult::CreatePartnerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreatePartnerResult& CreatePartnerResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
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
  if (jsonValue.ValueExists("LegalName")) {
    m_legalName = jsonValue.GetString("LegalName");
    m_legalNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Profile")) {
    m_profile = jsonValue.GetObject("Profile");
    m_profileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AwsTrainingCertificationEmailDomains")) {
    Aws::Utils::Array<JsonView> awsTrainingCertificationEmailDomainsJsonList = jsonValue.GetArray("AwsTrainingCertificationEmailDomains");
    for (unsigned awsTrainingCertificationEmailDomainsIndex = 0;
         awsTrainingCertificationEmailDomainsIndex < awsTrainingCertificationEmailDomainsJsonList.GetLength();
         ++awsTrainingCertificationEmailDomainsIndex) {
      m_awsTrainingCertificationEmailDomains.push_back(
          awsTrainingCertificationEmailDomainsJsonList[awsTrainingCertificationEmailDomainsIndex].AsObject());
    }
    m_awsTrainingCertificationEmailDomainsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllianceLeadContact")) {
    m_allianceLeadContact = jsonValue.GetObject("AllianceLeadContact");
    m_allianceLeadContactHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
