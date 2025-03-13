/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
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
namespace PI
{
namespace Model
{

  /**
   * <p>The list of recommendations for the insight.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/Recommendation">AWS
   * API Reference</a></p>
   */
  class Recommendation
  {
  public:
    AWS_PI_API Recommendation() = default;
    AWS_PI_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    Recommendation& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation details to help resolve the performance issue. For
     * example, <code>Investigate the following SQLs that contributed to 100% of the
     * total DBLoad during that time period: sql-id</code> </p>
     */
    inline const Aws::String& GetRecommendationDescription() const { return m_recommendationDescription; }
    inline bool RecommendationDescriptionHasBeenSet() const { return m_recommendationDescriptionHasBeenSet; }
    template<typename RecommendationDescriptionT = Aws::String>
    void SetRecommendationDescription(RecommendationDescriptionT&& value) { m_recommendationDescriptionHasBeenSet = true; m_recommendationDescription = std::forward<RecommendationDescriptionT>(value); }
    template<typename RecommendationDescriptionT = Aws::String>
    Recommendation& WithRecommendationDescription(RecommendationDescriptionT&& value) { SetRecommendationDescription(std::forward<RecommendationDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_recommendationDescription;
    bool m_recommendationDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
