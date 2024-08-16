/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Indicates the grouping recommendation you have accepted to include in your
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AcceptGroupingRecommendationEntry">AWS
   * API Reference</a></p>
   */
  class AcceptGroupingRecommendationEntry
  {
  public:
    AWS_RESILIENCEHUB_API AcceptGroupingRecommendationEntry();
    AWS_RESILIENCEHUB_API AcceptGroupingRecommendationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API AcceptGroupingRecommendationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the identifier of the grouping recommendation.</p>
     */
    inline const Aws::String& GetGroupingRecommendationId() const{ return m_groupingRecommendationId; }
    inline bool GroupingRecommendationIdHasBeenSet() const { return m_groupingRecommendationIdHasBeenSet; }
    inline void SetGroupingRecommendationId(const Aws::String& value) { m_groupingRecommendationIdHasBeenSet = true; m_groupingRecommendationId = value; }
    inline void SetGroupingRecommendationId(Aws::String&& value) { m_groupingRecommendationIdHasBeenSet = true; m_groupingRecommendationId = std::move(value); }
    inline void SetGroupingRecommendationId(const char* value) { m_groupingRecommendationIdHasBeenSet = true; m_groupingRecommendationId.assign(value); }
    inline AcceptGroupingRecommendationEntry& WithGroupingRecommendationId(const Aws::String& value) { SetGroupingRecommendationId(value); return *this;}
    inline AcceptGroupingRecommendationEntry& WithGroupingRecommendationId(Aws::String&& value) { SetGroupingRecommendationId(std::move(value)); return *this;}
    inline AcceptGroupingRecommendationEntry& WithGroupingRecommendationId(const char* value) { SetGroupingRecommendationId(value); return *this;}
    ///@}
  private:

    Aws::String m_groupingRecommendationId;
    bool m_groupingRecommendationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
