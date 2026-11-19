/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AggregatableField.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Groups customer accounts by the values of a field.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AggregationRequest">AWS
 * API Reference</a></p>
 */
class AggregationRequest {
 public:
  AWS_PARTNERCENTRALSELLING_API AggregationRequest() = default;
  AWS_PARTNERCENTRALSELLING_API AggregationRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AggregationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The field to group the customer accounts by. Specify one field.</p>
   */
  inline const Aws::Vector<AggregatableField>& GetGroupBy() const { return m_groupBy; }
  inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
  template <typename GroupByT = Aws::Vector<AggregatableField>>
  void SetGroupBy(GroupByT&& value) {
    m_groupByHasBeenSet = true;
    m_groupBy = std::forward<GroupByT>(value);
  }
  template <typename GroupByT = Aws::Vector<AggregatableField>>
  AggregationRequest& WithGroupBy(GroupByT&& value) {
    SetGroupBy(std::forward<GroupByT>(value));
    return *this;
  }
  inline AggregationRequest& AddGroupBy(AggregatableField value) {
    m_groupByHasBeenSet = true;
    m_groupBy.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AggregatableField> m_groupBy;
  bool m_groupByHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
