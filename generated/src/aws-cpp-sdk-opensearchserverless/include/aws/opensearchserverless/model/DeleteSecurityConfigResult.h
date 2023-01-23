/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>

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
namespace OpenSearchServerless
{
namespace Model
{
  class DeleteSecurityConfigResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API DeleteSecurityConfigResult();
    AWS_OPENSEARCHSERVERLESS_API DeleteSecurityConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API DeleteSecurityConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
