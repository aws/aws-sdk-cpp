/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>

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
namespace Route53RecoveryControlConfig
{
namespace Model
{
  class UntagResourceResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UntagResourceResult();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UntagResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UntagResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
