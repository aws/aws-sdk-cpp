/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>

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
namespace TrustedAdvisor
{
namespace Model
{

  /**
   * <p>Aggregation of Recommendation Resources</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/RecommendationResourcesAggregates">AWS
   * API Reference</a></p>
   */
  class RecommendationResourcesAggregates
  {
  public:
    AWS_TRUSTEDADVISOR_API RecommendationResourcesAggregates();
    AWS_TRUSTEDADVISOR_API RecommendationResourcesAggregates(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API RecommendationResourcesAggregates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of AWS resources that were flagged to have errors according to the
     * Trusted Advisor check</p>
     */
    inline long long GetErrorCount() const{ return m_errorCount; }

    /**
     * <p>The number of AWS resources that were flagged to have errors according to the
     * Trusted Advisor check</p>
     */
    inline bool ErrorCountHasBeenSet() const { return m_errorCountHasBeenSet; }

    /**
     * <p>The number of AWS resources that were flagged to have errors according to the
     * Trusted Advisor check</p>
     */
    inline void SetErrorCount(long long value) { m_errorCountHasBeenSet = true; m_errorCount = value; }

    /**
     * <p>The number of AWS resources that were flagged to have errors according to the
     * Trusted Advisor check</p>
     */
    inline RecommendationResourcesAggregates& WithErrorCount(long long value) { SetErrorCount(value); return *this;}


    /**
     * <p>The number of AWS resources that were flagged to be OK according to the
     * Trusted Advisor check</p>
     */
    inline long long GetOkCount() const{ return m_okCount; }

    /**
     * <p>The number of AWS resources that were flagged to be OK according to the
     * Trusted Advisor check</p>
     */
    inline bool OkCountHasBeenSet() const { return m_okCountHasBeenSet; }

    /**
     * <p>The number of AWS resources that were flagged to be OK according to the
     * Trusted Advisor check</p>
     */
    inline void SetOkCount(long long value) { m_okCountHasBeenSet = true; m_okCount = value; }

    /**
     * <p>The number of AWS resources that were flagged to be OK according to the
     * Trusted Advisor check</p>
     */
    inline RecommendationResourcesAggregates& WithOkCount(long long value) { SetOkCount(value); return *this;}


    /**
     * <p>The number of AWS resources that were flagged to have warning according to
     * the Trusted Advisor check </p>
     */
    inline long long GetWarningCount() const{ return m_warningCount; }

    /**
     * <p>The number of AWS resources that were flagged to have warning according to
     * the Trusted Advisor check </p>
     */
    inline bool WarningCountHasBeenSet() const { return m_warningCountHasBeenSet; }

    /**
     * <p>The number of AWS resources that were flagged to have warning according to
     * the Trusted Advisor check </p>
     */
    inline void SetWarningCount(long long value) { m_warningCountHasBeenSet = true; m_warningCount = value; }

    /**
     * <p>The number of AWS resources that were flagged to have warning according to
     * the Trusted Advisor check </p>
     */
    inline RecommendationResourcesAggregates& WithWarningCount(long long value) { SetWarningCount(value); return *this;}

  private:

    long long m_errorCount;
    bool m_errorCountHasBeenSet = false;

    long long m_okCount;
    bool m_okCountHasBeenSet = false;

    long long m_warningCount;
    bool m_warningCountHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
