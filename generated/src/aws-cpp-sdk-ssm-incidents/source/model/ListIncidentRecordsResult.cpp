/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ListIncidentRecordsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIncidentRecordsResult::ListIncidentRecordsResult()
{
}

ListIncidentRecordsResult::ListIncidentRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIncidentRecordsResult& ListIncidentRecordsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("incidentRecordSummaries"))
  {
    Aws::Utils::Array<JsonView> incidentRecordSummariesJsonList = jsonValue.GetArray("incidentRecordSummaries");
    for(unsigned incidentRecordSummariesIndex = 0; incidentRecordSummariesIndex < incidentRecordSummariesJsonList.GetLength(); ++incidentRecordSummariesIndex)
    {
      m_incidentRecordSummaries.push_back(incidentRecordSummariesJsonList[incidentRecordSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
