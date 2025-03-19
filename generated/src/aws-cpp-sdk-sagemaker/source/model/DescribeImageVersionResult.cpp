/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeImageVersionResult.h>
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

DescribeImageVersionResult::DescribeImageVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeImageVersionResult& DescribeImageVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BaseImage"))
  {
    m_baseImage = jsonValue.GetString("BaseImage");
    m_baseImageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContainerImage"))
  {
    m_containerImage = jsonValue.GetString("ContainerImage");
    m_containerImageHasBeenSet = true;
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
  if(jsonValue.ValueExists("ImageArn"))
  {
    m_imageArn = jsonValue.GetString("ImageArn");
    m_imageArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageVersionArn"))
  {
    m_imageVersionArn = jsonValue.GetString("ImageVersionArn");
    m_imageVersionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageVersionStatus"))
  {
    m_imageVersionStatus = ImageVersionStatusMapper::GetImageVersionStatusForName(jsonValue.GetString("ImageVersionStatus"));
    m_imageVersionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInteger("Version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VendorGuidance"))
  {
    m_vendorGuidance = VendorGuidanceMapper::GetVendorGuidanceForName(jsonValue.GetString("VendorGuidance"));
    m_vendorGuidanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobType"))
  {
    m_jobType = JobTypeMapper::GetJobTypeForName(jsonValue.GetString("JobType"));
    m_jobTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MLFramework"))
  {
    m_mLFramework = jsonValue.GetString("MLFramework");
    m_mLFrameworkHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProgrammingLang"))
  {
    m_programmingLang = jsonValue.GetString("ProgrammingLang");
    m_programmingLangHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Processor"))
  {
    m_processor = ProcessorMapper::GetProcessorForName(jsonValue.GetString("Processor"));
    m_processorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Horovod"))
  {
    m_horovod = jsonValue.GetBool("Horovod");
    m_horovodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReleaseNotes"))
  {
    m_releaseNotes = jsonValue.GetString("ReleaseNotes");
    m_releaseNotesHasBeenSet = true;
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
