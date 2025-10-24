/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ResourceExplorer2 {
namespace Model {

/**
 * <p>Contains information about an Amazon Web Services service that has been
 * granted streaming access to your Resource Explorer data.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/StreamingAccessDetails">AWS
 * API Reference</a></p>
 */
class StreamingAccessDetails {
 public:
  AWS_RESOURCEEXPLORER2_API StreamingAccessDetails() = default;
  AWS_RESOURCEEXPLORER2_API StreamingAccessDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESOURCEEXPLORER2_API StreamingAccessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The service principal of the Amazon Web Services service that has streaming
   * access to your Resource Explorer data. A service principal is a unique
   * identifier for an Amazon Web Services service.</p>
   */
  inline const Aws::String& GetServicePrincipal() const { return m_servicePrincipal; }
  inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }
  template <typename ServicePrincipalT = Aws::String>
  void SetServicePrincipal(ServicePrincipalT&& value) {
    m_servicePrincipalHasBeenSet = true;
    m_servicePrincipal = std::forward<ServicePrincipalT>(value);
  }
  template <typename ServicePrincipalT = Aws::String>
  StreamingAccessDetails& WithServicePrincipal(ServicePrincipalT&& value) {
    SetServicePrincipal(std::forward<ServicePrincipalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when streaming access was granted to the Amazon Web
   * Services service, in ISO 8601 format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  StreamingAccessDetails& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_servicePrincipal;
  bool m_servicePrincipalHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
