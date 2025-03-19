/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/PolicySummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains rules to be applied to the affected accounts. Policies can be
   * attached directly to accounts, or to roots and OUs to affect all accounts in
   * those hierarchies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/Policy">AWS
   * API Reference</a></p>
   */
  class Policy
  {
  public:
    AWS_ORGANIZATIONS_API Policy() = default;
    AWS_ORGANIZATIONS_API Policy(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Policy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that contains additional details about the policy.</p>
     */
    inline const PolicySummary& GetPolicySummary() const { return m_policySummary; }
    inline bool PolicySummaryHasBeenSet() const { return m_policySummaryHasBeenSet; }
    template<typename PolicySummaryT = PolicySummary>
    void SetPolicySummary(PolicySummaryT&& value) { m_policySummaryHasBeenSet = true; m_policySummary = std::forward<PolicySummaryT>(value); }
    template<typename PolicySummaryT = PolicySummary>
    Policy& WithPolicySummary(PolicySummaryT&& value) { SetPolicySummary(std::forward<PolicySummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text content of the policy.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    Policy& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}
  private:

    PolicySummary m_policySummary;
    bool m_policySummaryHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
