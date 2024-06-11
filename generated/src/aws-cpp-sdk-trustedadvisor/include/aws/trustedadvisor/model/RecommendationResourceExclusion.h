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
    AWS_TRUSTEDADVISOR_API RecommendationResourceExclusion();
    AWS_TRUSTEDADVISOR_API RecommendationResourceExclusion(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API RecommendationResourceExclusion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Recommendation Resource</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline RecommendationResourceExclusion& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RecommendationResourceExclusion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RecommendationResourceExclusion& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusion status</p>
     */
    inline bool GetIsExcluded() const{ return m_isExcluded; }
    inline bool IsExcludedHasBeenSet() const { return m_isExcludedHasBeenSet; }
    inline void SetIsExcluded(bool value) { m_isExcludedHasBeenSet = true; m_isExcluded = value; }
    inline RecommendationResourceExclusion& WithIsExcluded(bool value) { SetIsExcluded(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    bool m_isExcluded;
    bool m_isExcludedHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
