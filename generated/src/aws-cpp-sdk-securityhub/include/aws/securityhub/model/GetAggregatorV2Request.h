/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class GetAggregatorV2Request : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API GetAggregatorV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAggregatorV2"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the Aggregator V2.</p>
     */
    inline const Aws::String& GetAggregatorV2Arn() const { return m_aggregatorV2Arn; }
    inline bool AggregatorV2ArnHasBeenSet() const { return m_aggregatorV2ArnHasBeenSet; }
    template<typename AggregatorV2ArnT = Aws::String>
    void SetAggregatorV2Arn(AggregatorV2ArnT&& value) { m_aggregatorV2ArnHasBeenSet = true; m_aggregatorV2Arn = std::forward<AggregatorV2ArnT>(value); }
    template<typename AggregatorV2ArnT = Aws::String>
    GetAggregatorV2Request& WithAggregatorV2Arn(AggregatorV2ArnT&& value) { SetAggregatorV2Arn(std::forward<AggregatorV2ArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aggregatorV2Arn;
    bool m_aggregatorV2ArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
