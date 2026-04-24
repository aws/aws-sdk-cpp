/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RedshiftServerless {
namespace Model {

/**
 */
class GetIdentityCenterAuthTokenRequest : public RedshiftServerlessRequest {
 public:
  AWS_REDSHIFTSERVERLESS_API GetIdentityCenterAuthTokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetIdentityCenterAuthToken"; }

  AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

  AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A list of workgroup names for which to generate the Identity Center
   * authentication token.</p> <p>Constraints:</p> <ul> <li> <p>Must contain between
   * 1 and 20 workgroup names.</p> </li> <li> <p>Each workgroup name must be a valid
   * Amazon Redshift Serverless workgroup identifier.</p> </li> <li> <p>All specified
   * workgroups must have Identity Center integration enabled.</p> </li> </ul>
   */
  inline const Aws::Vector<Aws::String>& GetWorkgroupNames() const { return m_workgroupNames; }
  inline bool WorkgroupNamesHasBeenSet() const { return m_workgroupNamesHasBeenSet; }
  template <typename WorkgroupNamesT = Aws::Vector<Aws::String>>
  void SetWorkgroupNames(WorkgroupNamesT&& value) {
    m_workgroupNamesHasBeenSet = true;
    m_workgroupNames = std::forward<WorkgroupNamesT>(value);
  }
  template <typename WorkgroupNamesT = Aws::Vector<Aws::String>>
  GetIdentityCenterAuthTokenRequest& WithWorkgroupNames(WorkgroupNamesT&& value) {
    SetWorkgroupNames(std::forward<WorkgroupNamesT>(value));
    return *this;
  }
  template <typename WorkgroupNamesT = Aws::String>
  GetIdentityCenterAuthTokenRequest& AddWorkgroupNames(WorkgroupNamesT&& value) {
    m_workgroupNamesHasBeenSet = true;
    m_workgroupNames.emplace_back(std::forward<WorkgroupNamesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_workgroupNames;
  bool m_workgroupNamesHasBeenSet = false;
};

}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
