/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/Recommendation.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about the remediation steps for a finding.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Remediation">AWS
   * API Reference</a></p>
   */
  class Remediation
  {
  public:
    AWS_SECURITYHUB_API Remediation();
    AWS_SECURITYHUB_API Remediation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Remediation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A recommendation on the steps to take to remediate the issue identified by a
     * finding.</p>
     */
    inline const Recommendation& GetRecommendation() const{ return m_recommendation; }

    /**
     * <p>A recommendation on the steps to take to remediate the issue identified by a
     * finding.</p>
     */
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }

    /**
     * <p>A recommendation on the steps to take to remediate the issue identified by a
     * finding.</p>
     */
    inline void SetRecommendation(const Recommendation& value) { m_recommendationHasBeenSet = true; m_recommendation = value; }

    /**
     * <p>A recommendation on the steps to take to remediate the issue identified by a
     * finding.</p>
     */
    inline void SetRecommendation(Recommendation&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::move(value); }

    /**
     * <p>A recommendation on the steps to take to remediate the issue identified by a
     * finding.</p>
     */
    inline Remediation& WithRecommendation(const Recommendation& value) { SetRecommendation(value); return *this;}

    /**
     * <p>A recommendation on the steps to take to remediate the issue identified by a
     * finding.</p>
     */
    inline Remediation& WithRecommendation(Recommendation&& value) { SetRecommendation(std::move(value)); return *this;}

  private:

    Recommendation m_recommendation;
    bool m_recommendationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
