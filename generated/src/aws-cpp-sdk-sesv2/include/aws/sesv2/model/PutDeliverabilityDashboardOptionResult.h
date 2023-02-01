/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>

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
namespace SESV2
{
namespace Model
{
  /**
   * <p>A response that indicates whether the Deliverability dashboard is
   * enabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDeliverabilityDashboardOptionResponse">AWS
   * API Reference</a></p>
   */
  class PutDeliverabilityDashboardOptionResult
  {
  public:
    AWS_SESV2_API PutDeliverabilityDashboardOptionResult();
    AWS_SESV2_API PutDeliverabilityDashboardOptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API PutDeliverabilityDashboardOptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
