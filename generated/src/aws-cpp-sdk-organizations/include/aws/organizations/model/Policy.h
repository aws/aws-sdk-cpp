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
    AWS_ORGANIZATIONS_API Policy();
    AWS_ORGANIZATIONS_API Policy(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Policy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that contains additional details about the policy.</p>
     */
    inline const PolicySummary& GetPolicySummary() const{ return m_policySummary; }
    inline bool PolicySummaryHasBeenSet() const { return m_policySummaryHasBeenSet; }
    inline void SetPolicySummary(const PolicySummary& value) { m_policySummaryHasBeenSet = true; m_policySummary = value; }
    inline void SetPolicySummary(PolicySummary&& value) { m_policySummaryHasBeenSet = true; m_policySummary = std::move(value); }
    inline Policy& WithPolicySummary(const PolicySummary& value) { SetPolicySummary(value); return *this;}
    inline Policy& WithPolicySummary(PolicySummary&& value) { SetPolicySummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text content of the policy.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline Policy& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline Policy& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline Policy& WithContent(const char* value) { SetContent(value); return *this;}
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
