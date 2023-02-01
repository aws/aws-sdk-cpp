/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>

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
namespace Route53RecoveryCluster
{
namespace Model
{
  class UpdateRoutingControlStatesResult
  {
  public:
    AWS_ROUTE53RECOVERYCLUSTER_API UpdateRoutingControlStatesResult();
    AWS_ROUTE53RECOVERYCLUSTER_API UpdateRoutingControlStatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCLUSTER_API UpdateRoutingControlStatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
