/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>

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
namespace Support
{
namespace Model
{

  /**
   * <p>Details about Amazon Web Services resources that were analyzed in a call to
   * Trusted Advisor <a>DescribeTrustedAdvisorCheckSummaries</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/TrustedAdvisorResourcesSummary">AWS
   * API Reference</a></p>
   */
  class TrustedAdvisorResourcesSummary
  {
  public:
    AWS_SUPPORT_API TrustedAdvisorResourcesSummary() = default;
    AWS_SUPPORT_API TrustedAdvisorResourcesSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API TrustedAdvisorResourcesSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of Amazon Web Services resources that were analyzed by the Trusted
     * Advisor check.</p>
     */
    inline long long GetResourcesProcessed() const { return m_resourcesProcessed; }
    inline bool ResourcesProcessedHasBeenSet() const { return m_resourcesProcessedHasBeenSet; }
    inline void SetResourcesProcessed(long long value) { m_resourcesProcessedHasBeenSet = true; m_resourcesProcessed = value; }
    inline TrustedAdvisorResourcesSummary& WithResourcesProcessed(long long value) { SetResourcesProcessed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Amazon Web Services resources that were flagged (listed) by the
     * Trusted Advisor check.</p>
     */
    inline long long GetResourcesFlagged() const { return m_resourcesFlagged; }
    inline bool ResourcesFlaggedHasBeenSet() const { return m_resourcesFlaggedHasBeenSet; }
    inline void SetResourcesFlagged(long long value) { m_resourcesFlaggedHasBeenSet = true; m_resourcesFlagged = value; }
    inline TrustedAdvisorResourcesSummary& WithResourcesFlagged(long long value) { SetResourcesFlagged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Amazon Web Services resources ignored by Trusted Advisor
     * because information was unavailable.</p>
     */
    inline long long GetResourcesIgnored() const { return m_resourcesIgnored; }
    inline bool ResourcesIgnoredHasBeenSet() const { return m_resourcesIgnoredHasBeenSet; }
    inline void SetResourcesIgnored(long long value) { m_resourcesIgnoredHasBeenSet = true; m_resourcesIgnored = value; }
    inline TrustedAdvisorResourcesSummary& WithResourcesIgnored(long long value) { SetResourcesIgnored(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Amazon Web Services resources ignored by Trusted Advisor
     * because they were marked as suppressed by the user.</p>
     */
    inline long long GetResourcesSuppressed() const { return m_resourcesSuppressed; }
    inline bool ResourcesSuppressedHasBeenSet() const { return m_resourcesSuppressedHasBeenSet; }
    inline void SetResourcesSuppressed(long long value) { m_resourcesSuppressedHasBeenSet = true; m_resourcesSuppressed = value; }
    inline TrustedAdvisorResourcesSummary& WithResourcesSuppressed(long long value) { SetResourcesSuppressed(value); return *this;}
    ///@}
  private:

    long long m_resourcesProcessed{0};
    bool m_resourcesProcessedHasBeenSet = false;

    long long m_resourcesFlagged{0};
    bool m_resourcesFlaggedHasBeenSet = false;

    long long m_resourcesIgnored{0};
    bool m_resourcesIgnoredHasBeenSet = false;

    long long m_resourcesSuppressed{0};
    bool m_resourcesSuppressedHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
