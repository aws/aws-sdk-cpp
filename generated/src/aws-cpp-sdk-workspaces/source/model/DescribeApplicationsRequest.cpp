/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeApplicationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeApplicationsRequest::DescribeApplicationsRequest() : 
    m_applicationIdsHasBeenSet(false),
    m_computeTypeNamesHasBeenSet(false),
    m_licenseType(WorkSpaceApplicationLicenseType::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_operatingSystemNamesHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeApplicationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationIdsJsonList(m_applicationIds.size());
   for(unsigned applicationIdsIndex = 0; applicationIdsIndex < applicationIdsJsonList.GetLength(); ++applicationIdsIndex)
   {
     applicationIdsJsonList[applicationIdsIndex].AsString(m_applicationIds[applicationIdsIndex]);
   }
   payload.WithArray("ApplicationIds", std::move(applicationIdsJsonList));

  }

  if(m_computeTypeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> computeTypeNamesJsonList(m_computeTypeNames.size());
   for(unsigned computeTypeNamesIndex = 0; computeTypeNamesIndex < computeTypeNamesJsonList.GetLength(); ++computeTypeNamesIndex)
   {
     computeTypeNamesJsonList[computeTypeNamesIndex].AsString(ComputeMapper::GetNameForCompute(m_computeTypeNames[computeTypeNamesIndex]));
   }
   payload.WithArray("ComputeTypeNames", std::move(computeTypeNamesJsonList));

  }

  if(m_licenseTypeHasBeenSet)
  {
   payload.WithString("LicenseType", WorkSpaceApplicationLicenseTypeMapper::GetNameForWorkSpaceApplicationLicenseType(m_licenseType));
  }

  if(m_operatingSystemNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> operatingSystemNamesJsonList(m_operatingSystemNames.size());
   for(unsigned operatingSystemNamesIndex = 0; operatingSystemNamesIndex < operatingSystemNamesJsonList.GetLength(); ++operatingSystemNamesIndex)
   {
     operatingSystemNamesJsonList[operatingSystemNamesIndex].AsString(OperatingSystemNameMapper::GetNameForOperatingSystemName(m_operatingSystemNames[operatingSystemNamesIndex]));
   }
   payload.WithArray("OperatingSystemNames", std::move(operatingSystemNamesJsonList));

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeApplicationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DescribeApplications"));
  return headers;

}




