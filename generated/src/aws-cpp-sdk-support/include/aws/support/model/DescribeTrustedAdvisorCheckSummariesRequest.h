/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   */
  class DescribeTrustedAdvisorCheckSummariesRequest : public SupportRequest
  {
  public:
    AWS_SUPPORT_API DescribeTrustedAdvisorCheckSummariesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrustedAdvisorCheckSummaries"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The IDs of the Trusted Advisor checks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCheckIds() const { return m_checkIds; }
    inline bool CheckIdsHasBeenSet() const { return m_checkIdsHasBeenSet; }
    template<typename CheckIdsT = Aws::Vector<Aws::String>>
    void SetCheckIds(CheckIdsT&& value) { m_checkIdsHasBeenSet = true; m_checkIds = std::forward<CheckIdsT>(value); }
    template<typename CheckIdsT = Aws::Vector<Aws::String>>
    DescribeTrustedAdvisorCheckSummariesRequest& WithCheckIds(CheckIdsT&& value) { SetCheckIds(std::forward<CheckIdsT>(value)); return *this;}
    template<typename CheckIdsT = Aws::String>
    DescribeTrustedAdvisorCheckSummariesRequest& AddCheckIds(CheckIdsT&& value) { m_checkIdsHasBeenSet = true; m_checkIds.emplace_back(std::forward<CheckIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_checkIds;
    bool m_checkIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
