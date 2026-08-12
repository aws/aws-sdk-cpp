/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>Configuration settings that define the scope of Amazon Web Services resources
 * to analyze for optimization recommendations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AggregationConfiguration">AWS
 * API Reference</a></p>
 */
class AggregationConfiguration {
 public:
  AWS_WELLARCHITECTED_API AggregationConfiguration() = default;
  AWS_WELLARCHITECTED_API AggregationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API AggregationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services account ID to analyze.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  AggregationConfiguration& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of Amazon Web Services Regions to include in the analysis.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  AggregationConfiguration& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  AggregationConfiguration& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of an IAM role to assume for resource analysis in this account.</p>
   */
  inline const Aws::String& GetAccessRoleArn() const { return m_accessRoleArn; }
  inline bool AccessRoleArnHasBeenSet() const { return m_accessRoleArnHasBeenSet; }
  template <typename AccessRoleArnT = Aws::String>
  void SetAccessRoleArn(AccessRoleArnT&& value) {
    m_accessRoleArnHasBeenSet = true;
    m_accessRoleArn = std::forward<AccessRoleArnT>(value);
  }
  template <typename AccessRoleArnT = Aws::String>
  AggregationConfiguration& WithAccessRoleArn(AccessRoleArnT&& value) {
    SetAccessRoleArn(std::forward<AccessRoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::Vector<Aws::String> m_regions;

  Aws::String m_accessRoleArn;
  bool m_accountIdHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
  bool m_accessRoleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
