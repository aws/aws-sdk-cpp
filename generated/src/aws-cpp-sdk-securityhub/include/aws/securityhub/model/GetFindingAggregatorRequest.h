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
  class GetFindingAggregatorRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API GetFindingAggregatorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindingAggregator"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the finding aggregator to return details for. To obtain the ARN,
     * use <code>ListFindingAggregators</code>.</p>
     */
    inline const Aws::String& GetFindingAggregatorArn() const { return m_findingAggregatorArn; }
    inline bool FindingAggregatorArnHasBeenSet() const { return m_findingAggregatorArnHasBeenSet; }
    template<typename FindingAggregatorArnT = Aws::String>
    void SetFindingAggregatorArn(FindingAggregatorArnT&& value) { m_findingAggregatorArnHasBeenSet = true; m_findingAggregatorArn = std::forward<FindingAggregatorArnT>(value); }
    template<typename FindingAggregatorArnT = Aws::String>
    GetFindingAggregatorRequest& WithFindingAggregatorArn(FindingAggregatorArnT&& value) { SetFindingAggregatorArn(std::forward<FindingAggregatorArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_findingAggregatorArn;
    bool m_findingAggregatorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
