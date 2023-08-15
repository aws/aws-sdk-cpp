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
    AWS_PI_API Recommendation();
    AWS_PI_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p>The unique identifier for the recommendation.</p>
     */
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the recommendation.</p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }

    /**
     * <p>The unique identifier for the recommendation.</p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }

    /**
     * <p>The unique identifier for the recommendation.</p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }

    /**
     * <p>The unique identifier for the recommendation.</p>
     */
    inline Recommendation& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The unique identifier for the recommendation.</p>
     */
    inline Recommendation& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the recommendation.</p>
     */
    inline Recommendation& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    /**
     * <p>The recommendation details to help resolve the performance issue. For
     * example, <code>Investigate the following SQLs that contributed to 100% of the
     * total DBLoad during that time period: sql-id</code> </p>
     */
    inline const Aws::String& GetRecommendationDescription() const{ return m_recommendationDescription; }

    /**
     * <p>The recommendation details to help resolve the performance issue. For
     * example, <code>Investigate the following SQLs that contributed to 100% of the
     * total DBLoad during that time period: sql-id</code> </p>
     */
    inline bool RecommendationDescriptionHasBeenSet() const { return m_recommendationDescriptionHasBeenSet; }

    /**
     * <p>The recommendation details to help resolve the performance issue. For
     * example, <code>Investigate the following SQLs that contributed to 100% of the
     * total DBLoad during that time period: sql-id</code> </p>
     */
    inline void SetRecommendationDescription(const Aws::String& value) { m_recommendationDescriptionHasBeenSet = true; m_recommendationDescription = value; }

    /**
     * <p>The recommendation details to help resolve the performance issue. For
     * example, <code>Investigate the following SQLs that contributed to 100% of the
     * total DBLoad during that time period: sql-id</code> </p>
     */
    inline void SetRecommendationDescription(Aws::String&& value) { m_recommendationDescriptionHasBeenSet = true; m_recommendationDescription = std::move(value); }

    /**
     * <p>The recommendation details to help resolve the performance issue. For
     * example, <code>Investigate the following SQLs that contributed to 100% of the
     * total DBLoad during that time period: sql-id</code> </p>
     */
    inline void SetRecommendationDescription(const char* value) { m_recommendationDescriptionHasBeenSet = true; m_recommendationDescription.assign(value); }

    /**
     * <p>The recommendation details to help resolve the performance issue. For
     * example, <code>Investigate the following SQLs that contributed to 100% of the
     * total DBLoad during that time period: sql-id</code> </p>
     */
    inline Recommendation& WithRecommendationDescription(const Aws::String& value) { SetRecommendationDescription(value); return *this;}

    /**
     * <p>The recommendation details to help resolve the performance issue. For
     * example, <code>Investigate the following SQLs that contributed to 100% of the
     * total DBLoad during that time period: sql-id</code> </p>
     */
    inline Recommendation& WithRecommendationDescription(Aws::String&& value) { SetRecommendationDescription(std::move(value)); return *this;}

    /**
     * <p>The recommendation details to help resolve the performance issue. For
     * example, <code>Investigate the following SQLs that contributed to 100% of the
     * total DBLoad during that time period: sql-id</code> </p>
     */
    inline Recommendation& WithRecommendationDescription(const char* value) { SetRecommendationDescription(value); return *this;}

  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_recommendationDescription;
    bool m_recommendationDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
