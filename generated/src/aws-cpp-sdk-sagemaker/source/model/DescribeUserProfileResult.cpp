/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeUserProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeUserProfileResult::DescribeUserProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeUserProfileResult& DescribeUserProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserProfileArn"))
  {
    m_userProfileArn = jsonValue.GetString("UserProfileArn");
    m_userProfileArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserProfileName"))
  {
    m_userProfileName = jsonValue.GetString("UserProfileName");
    m_userProfileNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HomeEfsFileSystemUid"))
  {
    m_homeEfsFileSystemUid = jsonValue.GetString("HomeEfsFileSystemUid");
    m_homeEfsFileSystemUidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = UserProfileStatusMapper::GetUserProfileStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SingleSignOnUserIdentifier"))
  {
    m_singleSignOnUserIdentifier = jsonValue.GetString("SingleSignOnUserIdentifier");
    m_singleSignOnUserIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SingleSignOnUserValue"))
  {
    m_singleSignOnUserValue = jsonValue.GetString("SingleSignOnUserValue");
    m_singleSignOnUserValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserSettings"))
  {
    m_userSettings = jsonValue.GetObject("UserSettings");
    m_userSettingsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
