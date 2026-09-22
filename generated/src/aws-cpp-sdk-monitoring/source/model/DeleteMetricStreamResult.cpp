/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/DeleteMetricStreamResult.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;
using namespace Aws::Utils::Cbor;
using namespace Aws;

DeleteMetricStreamResult::DeleteMetricStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result) {
  *this = result;
}

DeleteMetricStreamResult& DeleteMetricStreamResult::operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result) {
  return *this;
}
