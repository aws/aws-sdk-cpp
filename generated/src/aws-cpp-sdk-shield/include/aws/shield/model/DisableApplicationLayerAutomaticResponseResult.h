/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>

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
namespace Shield
{
namespace Model
{
  class DisableApplicationLayerAutomaticResponseResult
  {
  public:
    AWS_SHIELD_API DisableApplicationLayerAutomaticResponseResult();
    AWS_SHIELD_API DisableApplicationLayerAutomaticResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API DisableApplicationLayerAutomaticResponseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace Shield
} // namespace Aws
