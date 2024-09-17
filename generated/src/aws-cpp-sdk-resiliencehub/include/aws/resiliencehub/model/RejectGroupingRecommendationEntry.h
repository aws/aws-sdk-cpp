/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/GroupingRecommendationRejectionReason.h>
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
   * <p>Indicates the rejected grouping recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/RejectGroupingRecommendationEntry">AWS
   * API Reference</a></p>
   */
  class RejectGroupingRecommendationEntry
  {
  public:
    AWS_RESILIENCEHUB_API RejectGroupingRecommendationEntry();
    AWS_RESILIENCEHUB_API RejectGroupingRecommendationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API RejectGroupingRecommendationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline RejectGroupingRecommendationEntry& WithGroupingRecommendationId(const Aws::String& value) { SetGroupingRecommendationId(value); return *this;}
    inline RejectGroupingRecommendationEntry& WithGroupingRecommendationId(Aws::String&& value) { SetGroupingRecommendationId(std::move(value)); return *this;}
    inline RejectGroupingRecommendationEntry& WithGroupingRecommendationId(const char* value) { SetGroupingRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the reason you had selected while rejecting a grouping
     * recommendation.</p>
     */
    inline const GroupingRecommendationRejectionReason& GetRejectionReason() const{ return m_rejectionReason; }
    inline bool RejectionReasonHasBeenSet() const { return m_rejectionReasonHasBeenSet; }
    inline void SetRejectionReason(const GroupingRecommendationRejectionReason& value) { m_rejectionReasonHasBeenSet = true; m_rejectionReason = value; }
    inline void SetRejectionReason(GroupingRecommendationRejectionReason&& value) { m_rejectionReasonHasBeenSet = true; m_rejectionReason = std::move(value); }
    inline RejectGroupingRecommendationEntry& WithRejectionReason(const GroupingRecommendationRejectionReason& value) { SetRejectionReason(value); return *this;}
    inline RejectGroupingRecommendationEntry& WithRejectionReason(GroupingRecommendationRejectionReason&& value) { SetRejectionReason(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupingRecommendationId;
    bool m_groupingRecommendationIdHasBeenSet = false;

    GroupingRecommendationRejectionReason m_rejectionReason;
    bool m_rejectionReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
