/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
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
namespace TrustedAdvisor
{
namespace Model
{

  /**
   * <p>The request entry for Recommendation Resource exclusion. Each entry is a
   * combination of Recommendation Resource ARN and corresponding exclusion
   * status</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/RecommendationResourceExclusion">AWS
   * API Reference</a></p>
   */
  class RecommendationResourceExclusion
  {
  public:
    AWS_TRUSTEDADVISOR_API RecommendationResourceExclusion() = default;
    AWS_TRUSTEDADVISOR_API RecommendationResourceExclusion(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API RecommendationResourceExclusion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Recommendation Resource</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RecommendationResourceExclusion& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusion status</p>
     */
    inline bool GetIsExcluded() const { return m_isExcluded; }
    inline bool IsExcludedHasBeenSet() const { return m_isExcludedHasBeenSet; }
    inline void SetIsExcluded(bool value) { m_isExcludedHasBeenSet = true; m_isExcluded = value; }
    inline RecommendationResourceExclusion& WithIsExcluded(bool value) { SetIsExcluded(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    bool m_isExcluded{false};
    bool m_isExcludedHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
