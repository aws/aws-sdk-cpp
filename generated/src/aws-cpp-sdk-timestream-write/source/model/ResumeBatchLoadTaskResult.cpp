/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/ResumeBatchLoadTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::TimestreamWrite::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ResumeBatchLoadTaskResult::ResumeBatchLoadTaskResult()
{
}

ResumeBatchLoadTaskResult::ResumeBatchLoadTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ResumeBatchLoadTaskResult& ResumeBatchLoadTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);


  return *this;
}
