/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>

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
 * <p>Filters for listing network migration analysis results.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationAnalysisResultsFilters">AWS
 * API Reference</a></p>
 */
class ListNetworkMigrationAnalysisResultsFilters {
 public:
  AWS_MGN_API ListNetworkMigrationAnalysisResultsFilters() = default;
  AWS_MGN_API ListNetworkMigrationAnalysisResultsFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API ListNetworkMigrationAnalysisResultsFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of VPC IDs to filter results by.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVpcIDs() const { return m_vpcIDs; }
  inline bool VpcIDsHasBeenSet() const { return m_vpcIDsHasBeenSet; }
  template <typename VpcIDsT = Aws::Vector<Aws::String>>
  void SetVpcIDs(VpcIDsT&& value) {
    m_vpcIDsHasBeenSet = true;
    m_vpcIDs = std::forward<VpcIDsT>(value);
  }
  template <typename VpcIDsT = Aws::Vector<Aws::String>>
  ListNetworkMigrationAnalysisResultsFilters& WithVpcIDs(VpcIDsT&& value) {
    SetVpcIDs(std::forward<VpcIDsT>(value));
    return *this;
  }
  template <typename VpcIDsT = Aws::String>
  ListNetworkMigrationAnalysisResultsFilters& AddVpcIDs(VpcIDsT&& value) {
    m_vpcIDsHasBeenSet = true;
    m_vpcIDs.emplace_back(std::forward<VpcIDsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_vpcIDs;
  bool m_vpcIDsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
