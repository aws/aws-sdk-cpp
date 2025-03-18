/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeSpaceResult.h>
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

DescribeSpaceResult::DescribeSpaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSpaceResult& DescribeSpaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpaceArn"))
  {
    m_spaceArn = jsonValue.GetString("SpaceArn");
    m_spaceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpaceName"))
  {
    m_spaceName = jsonValue.GetString("SpaceName");
    m_spaceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HomeEfsFileSystemUid"))
  {
    m_homeEfsFileSystemUid = jsonValue.GetString("HomeEfsFileSystemUid");
    m_homeEfsFileSystemUidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SpaceStatusMapper::GetSpaceStatusForName(jsonValue.GetString("Status"));
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
  if(jsonValue.ValueExists("SpaceSettings"))
  {
    m_spaceSettings = jsonValue.GetObject("SpaceSettings");
    m_spaceSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OwnershipSettings"))
  {
    m_ownershipSettings = jsonValue.GetObject("OwnershipSettings");
    m_ownershipSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpaceSharingSettings"))
  {
    m_spaceSharingSettings = jsonValue.GetObject("SpaceSharingSettings");
    m_spaceSharingSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpaceDisplayName"))
  {
    m_spaceDisplayName = jsonValue.GetString("SpaceDisplayName");
    m_spaceDisplayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
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
