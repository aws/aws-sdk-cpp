/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/InsightType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Filters for listing network migration insights.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationInsightsFilters">AWS
 * API Reference</a></p>
 */
class ListNetworkMigrationInsightsFilters {
 public:
  AWS_MGN_API ListNetworkMigrationInsightsFilters() = default;
  AWS_MGN_API ListNetworkMigrationInsightsFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API ListNetworkMigrationInsightsFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The insight types to include in the results.</p>
   */
  inline const Aws::Vector<InsightType>& GetInsightTypes() const { return m_insightTypes; }
  inline bool InsightTypesHasBeenSet() const { return m_insightTypesHasBeenSet; }
  template <typename InsightTypesT = Aws::Vector<InsightType>>
  void SetInsightTypes(InsightTypesT&& value) {
    m_insightTypesHasBeenSet = true;
    m_insightTypes = std::forward<InsightTypesT>(value);
  }
  template <typename InsightTypesT = Aws::Vector<InsightType>>
  ListNetworkMigrationInsightsFilters& WithInsightTypes(InsightTypesT&& value) {
    SetInsightTypes(std::forward<InsightTypesT>(value));
    return *this;
  }
  inline ListNetworkMigrationInsightsFilters& AddInsightTypes(InsightType value) {
    m_insightTypesHasBeenSet = true;
    m_insightTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<InsightType> m_insightTypes;
  bool m_insightTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
