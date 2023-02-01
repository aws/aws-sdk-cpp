/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeSpaceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSpaceResult::DescribeSpaceResult() : 
    m_status(SpaceStatus::NOT_SET)
{
}

DescribeSpaceResult::DescribeSpaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(SpaceStatus::NOT_SET)
{
  *this = result;
}

DescribeSpaceResult& DescribeSpaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");

  }

  if(jsonValue.ValueExists("SpaceArn"))
  {
    m_spaceArn = jsonValue.GetString("SpaceArn");

  }

  if(jsonValue.ValueExists("SpaceName"))
  {
    m_spaceName = jsonValue.GetString("SpaceName");

  }

  if(jsonValue.ValueExists("HomeEfsFileSystemUid"))
  {
    m_homeEfsFileSystemUid = jsonValue.GetString("HomeEfsFileSystemUid");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SpaceStatusMapper::GetSpaceStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("SpaceSettings"))
  {
    m_spaceSettings = jsonValue.GetObject("SpaceSettings");

  }



  return *this;
}
