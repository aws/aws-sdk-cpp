/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsOrganizationScope.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Defines the data boundary for a resources query. Scopes determine which
 * organizational units or organizations to retrieve data from.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourceScopes">AWS
 * API Reference</a></p>
 */
class ResourceScopes {
 public:
  AWS_SECURITYHUB_API ResourceScopes() = default;
  AWS_SECURITYHUB_API ResourceScopes(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ResourceScopes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of Organizations scopes to include in the query results. Each entry in
   * the list specifies an organization or organizational unit to include for the
   * delegated administrator's account. If the list specifies multiple entries, the
   * entries are combined using OR logic.</p>
   */
  inline const Aws::Vector<AwsOrganizationScope>& GetAwsOrganizations() const { return m_awsOrganizations; }
  inline bool AwsOrganizationsHasBeenSet() const { return m_awsOrganizationsHasBeenSet; }
  template <typename AwsOrganizationsT = Aws::Vector<AwsOrganizationScope>>
  void SetAwsOrganizations(AwsOrganizationsT&& value) {
    m_awsOrganizationsHasBeenSet = true;
    m_awsOrganizations = std::forward<AwsOrganizationsT>(value);
  }
  template <typename AwsOrganizationsT = Aws::Vector<AwsOrganizationScope>>
  ResourceScopes& WithAwsOrganizations(AwsOrganizationsT&& value) {
    SetAwsOrganizations(std::forward<AwsOrganizationsT>(value));
    return *this;
  }
  template <typename AwsOrganizationsT = AwsOrganizationScope>
  ResourceScopes& AddAwsOrganizations(AwsOrganizationsT&& value) {
    m_awsOrganizationsHasBeenSet = true;
    m_awsOrganizations.emplace_back(std::forward<AwsOrganizationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AwsOrganizationScope> m_awsOrganizations;
  bool m_awsOrganizationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
