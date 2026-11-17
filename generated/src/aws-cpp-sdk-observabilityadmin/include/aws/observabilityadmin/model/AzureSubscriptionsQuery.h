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
 * <p>A query that lists Azure subscriptions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureSubscriptionsQuery">AWS
 * API Reference</a></p>
 */
class AzureSubscriptionsQuery {
 public:
  AWS_OBSERVABILITYADMIN_API AzureSubscriptionsQuery() = default;
  AWS_OBSERVABILITYADMIN_API AzureSubscriptionsQuery(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureSubscriptionsQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Limits the results to subscriptions under this management group.</p>
   */
  inline const Aws::String& GetManagementGroupId() const { return m_managementGroupId; }
  inline bool ManagementGroupIdHasBeenSet() const { return m_managementGroupIdHasBeenSet; }
  template <typename ManagementGroupIdT = Aws::String>
  void SetManagementGroupId(ManagementGroupIdT&& value) {
    m_managementGroupIdHasBeenSet = true;
    m_managementGroupId = std::forward<ManagementGroupIdT>(value);
  }
  template <typename ManagementGroupIdT = Aws::String>
  AzureSubscriptionsQuery& WithManagementGroupId(ManagementGroupIdT&& value) {
    SetManagementGroupId(std::forward<ManagementGroupIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_managementGroupId;
  bool m_managementGroupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
