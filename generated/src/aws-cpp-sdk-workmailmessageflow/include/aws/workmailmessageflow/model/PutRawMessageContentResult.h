/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmailmessageflow/WorkMailMessageFlow_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkMailMessageFlow
{
namespace Model
{
  class PutRawMessageContentResult
  {
  public:
    AWS_WORKMAILMESSAGEFLOW_API PutRawMessageContentResult();
    AWS_WORKMAILMESSAGEFLOW_API PutRawMessageContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAILMESSAGEFLOW_API PutRawMessageContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace WorkMailMessageFlow
} // namespace Aws
