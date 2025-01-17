/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notifications/model/SummarizationDimensionDetail.h>
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
namespace Notifications
{
namespace Model
{

  /**
   * <p>Provides detailed information about the dimensions used for
   * aggregation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/AggregationDetail">AWS
   * API Reference</a></p>
   */
  class AggregationDetail
  {
  public:
    AWS_NOTIFICATIONS_API AggregationDetail();
    AWS_NOTIFICATIONS_API AggregationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API AggregationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Properties used to summarize aggregated events.</p>
     */
    inline const Aws::Vector<SummarizationDimensionDetail>& GetSummarizationDimensions() const{ return m_summarizationDimensions; }
    inline bool SummarizationDimensionsHasBeenSet() const { return m_summarizationDimensionsHasBeenSet; }
    inline void SetSummarizationDimensions(const Aws::Vector<SummarizationDimensionDetail>& value) { m_summarizationDimensionsHasBeenSet = true; m_summarizationDimensions = value; }
    inline void SetSummarizationDimensions(Aws::Vector<SummarizationDimensionDetail>&& value) { m_summarizationDimensionsHasBeenSet = true; m_summarizationDimensions = std::move(value); }
    inline AggregationDetail& WithSummarizationDimensions(const Aws::Vector<SummarizationDimensionDetail>& value) { SetSummarizationDimensions(value); return *this;}
    inline AggregationDetail& WithSummarizationDimensions(Aws::Vector<SummarizationDimensionDetail>&& value) { SetSummarizationDimensions(std::move(value)); return *this;}
    inline AggregationDetail& AddSummarizationDimensions(const SummarizationDimensionDetail& value) { m_summarizationDimensionsHasBeenSet = true; m_summarizationDimensions.push_back(value); return *this; }
    inline AggregationDetail& AddSummarizationDimensions(SummarizationDimensionDetail&& value) { m_summarizationDimensionsHasBeenSet = true; m_summarizationDimensions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SummarizationDimensionDetail> m_summarizationDimensions;
    bool m_summarizationDimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
