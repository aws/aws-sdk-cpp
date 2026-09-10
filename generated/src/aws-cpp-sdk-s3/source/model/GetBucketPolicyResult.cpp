/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3/model/GetBucketPolicyResult.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetBucketPolicyResult::GetBucketPolicyResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) { *this = std::move(result); }

GetBucketPolicyResult& GetBucketPolicyResult::operator=(Aws::AmazonWebServiceResult<ResponseStream>&& result) {
  m_HttpResponseCode = result.GetResponseCode();
  m_policy = result.TakeOwnershipOfPayload();
  m_policyHasBeenSet = true;
  // TODO: header-bound member deserialization
  return *this;
}
