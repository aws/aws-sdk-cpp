/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AggregatableField.h>
#include <aws/partnercentral-selling/model/Bucket.h>

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
 * <p>The result of an aggregation. It includes the grouped field, the number of
 * customer accounts for each value, and the number of accounts with other
 * values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AggregationResult">AWS
 * API Reference</a></p>
 */
class AggregationResult {
 public:
  AWS_PARTNERCENTRALSELLING_API AggregationResult() = default;
  AWS_PARTNERCENTRALSELLING_API AggregationResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AggregationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The field that the customer accounts are grouped by.</p>
   */
  inline const Aws::Vector<AggregatableField>& GetGroupBy() const { return m_groupBy; }
  inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
  template <typename GroupByT = Aws::Vector<AggregatableField>>
  void SetGroupBy(GroupByT&& value) {
    m_groupByHasBeenSet = true;
    m_groupBy = std::forward<GroupByT>(value);
  }
  template <typename GroupByT = Aws::Vector<AggregatableField>>
  AggregationResult& WithGroupBy(GroupByT&& value) {
    SetGroupBy(std::forward<GroupByT>(value));
    return *this;
  }
  inline AggregationResult& AddGroupBy(AggregatableField value) {
    m_groupByHasBeenSet = true;
    m_groupBy.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The groups of customer accounts, one for each value of the field, with the
   * number of accounts in each group.</p>
   */
  inline const Aws::Vector<Bucket>& GetBuckets() const { return m_buckets; }
  inline bool BucketsHasBeenSet() const { return m_bucketsHasBeenSet; }
  template <typename BucketsT = Aws::Vector<Bucket>>
  void SetBuckets(BucketsT&& value) {
    m_bucketsHasBeenSet = true;
    m_buckets = std::forward<BucketsT>(value);
  }
  template <typename BucketsT = Aws::Vector<Bucket>>
  AggregationResult& WithBuckets(BucketsT&& value) {
    SetBuckets(std::forward<BucketsT>(value));
    return *this;
  }
  template <typename BucketsT = Bucket>
  AggregationResult& AddBuckets(BucketsT&& value) {
    m_bucketsHasBeenSet = true;
    m_buckets.emplace_back(std::forward<BucketsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of customer accounts that have a value not included in
   * <code>Buckets</code>.</p>
   */
  inline int GetOtherCount() const { return m_otherCount; }
  inline bool OtherCountHasBeenSet() const { return m_otherCountHasBeenSet; }
  inline void SetOtherCount(int value) {
    m_otherCountHasBeenSet = true;
    m_otherCount = value;
  }
  inline AggregationResult& WithOtherCount(int value) {
    SetOtherCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AggregatableField> m_groupBy;

  Aws::Vector<Bucket> m_buckets;

  int m_otherCount{0};
  bool m_groupByHasBeenSet = false;
  bool m_bucketsHasBeenSet = false;
  bool m_otherCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
