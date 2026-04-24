/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sustainability/SustainabilityRequest.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>
#include <aws/sustainability/model/Dimension.h>
#include <aws/sustainability/model/TimePeriod.h>

#include <utility>

namespace Aws {
namespace Sustainability {
namespace Model {

/**
 */
class GetEstimatedCarbonEmissionsDimensionValuesRequest : public SustainabilityRequest {
 public:
  AWS_SUSTAINABILITY_API GetEstimatedCarbonEmissionsDimensionValuesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetEstimatedCarbonEmissionsDimensionValues"; }

  AWS_SUSTAINABILITY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The date range for fetching the dimension values.</p>
   */
  inline const TimePeriod& GetTimePeriod() const { return m_timePeriod; }
  inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
  template <typename TimePeriodT = TimePeriod>
  void SetTimePeriod(TimePeriodT&& value) {
    m_timePeriodHasBeenSet = true;
    m_timePeriod = std::forward<TimePeriodT>(value);
  }
  template <typename TimePeriodT = TimePeriod>
  GetEstimatedCarbonEmissionsDimensionValuesRequest& WithTimePeriod(TimePeriodT&& value) {
    SetTimePeriod(std::forward<TimePeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dimensions available for grouping estimated carbon emissions.</p>
   */
  inline const Aws::Vector<Dimension>& GetDimensions() const { return m_dimensions; }
  inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
  template <typename DimensionsT = Aws::Vector<Dimension>>
  void SetDimensions(DimensionsT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions = std::forward<DimensionsT>(value);
  }
  template <typename DimensionsT = Aws::Vector<Dimension>>
  GetEstimatedCarbonEmissionsDimensionValuesRequest& WithDimensions(DimensionsT&& value) {
    SetDimensions(std::forward<DimensionsT>(value));
    return *this;
  }
  inline GetEstimatedCarbonEmissionsDimensionValuesRequest& AddDimensions(Dimension value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. Default is 40.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetEstimatedCarbonEmissionsDimensionValuesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token specifying which page of results to return in the
   * response. If no token is provided, the default page is the first page. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetEstimatedCarbonEmissionsDimensionValuesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  TimePeriod m_timePeriod;

  Aws::Vector<Dimension> m_dimensions;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_timePeriodHasBeenSet = false;
  bool m_dimensionsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
