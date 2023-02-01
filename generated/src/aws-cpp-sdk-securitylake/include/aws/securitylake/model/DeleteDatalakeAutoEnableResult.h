/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>

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
namespace SecurityLake
{
namespace Model
{
  class DeleteDatalakeAutoEnableResult
  {
  public:
    AWS_SECURITYLAKE_API DeleteDatalakeAutoEnableResult();
    AWS_SECURITYLAKE_API DeleteDatalakeAutoEnableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API DeleteDatalakeAutoEnableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
