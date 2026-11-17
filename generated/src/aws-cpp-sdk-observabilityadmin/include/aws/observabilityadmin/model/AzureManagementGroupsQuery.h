/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>A query that lists Azure management groups.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureManagementGroupsQuery">AWS
 * API Reference</a></p>
 */
class AzureManagementGroupsQuery {
 public:
  AWS_OBSERVABILITYADMIN_API AzureManagementGroupsQuery() = default;
  AWS_OBSERVABILITYADMIN_API AzureManagementGroupsQuery(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureManagementGroupsQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Lists the management groups under this management group. If you omit this
   * value, the query starts at the tenant root group.</p>
   */
  inline const Aws::String& GetParentManagementGroupId() const { return m_parentManagementGroupId; }
  inline bool ParentManagementGroupIdHasBeenSet() const { return m_parentManagementGroupIdHasBeenSet; }
  template <typename ParentManagementGroupIdT = Aws::String>
  void SetParentManagementGroupId(ParentManagementGroupIdT&& value) {
    m_parentManagementGroupIdHasBeenSet = true;
    m_parentManagementGroupId = std::forward<ParentManagementGroupIdT>(value);
  }
  template <typename ParentManagementGroupIdT = Aws::String>
  AzureManagementGroupsQuery& WithParentManagementGroupId(ParentManagementGroupIdT&& value) {
    SetParentManagementGroupId(std::forward<ParentManagementGroupIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_parentManagementGroupId;
  bool m_parentManagementGroupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
