/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/RegionScope.h>

#include <utility>

namespace Aws {
namespace SSOAdmin {
namespace Model {

/**
 */
class ListInstancesRequest : public SSOAdminRequest {
 public:
  AWS_SSOADMIN_API ListInstancesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListInstances"; }

  AWS_SSOADMIN_API Aws::String SerializePayload() const override;

  AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The maximum number of results to display for the instance.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListInstancesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token for the list API. Initially the value is null. Use the
   * output of previous API calls to make subsequent calls.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListInstancesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which Amazon Web Services Regions to list IAM Identity Center
   * instances from. Valid values:</p> <ul> <li> <p> <code>CURRENT_REGION</code> -
   * Lists only the instances in the Region that you call this API from.</p> </li>
   * <li> <p> <code>ALL_REGIONS</code> - Lists the instances that the caller owns or
   * that are shared with the caller across all Regions.</p> </li> </ul> <p>If you
   * don't specify a value, the default is <code>CURRENT_REGION</code>.</p>
   */
  inline RegionScope GetRegionScope() const { return m_regionScope; }
  inline bool RegionScopeHasBeenSet() const { return m_regionScopeHasBeenSet; }
  inline void SetRegionScope(RegionScope value) {
    m_regionScopeHasBeenSet = true;
    m_regionScope = value;
  }
  inline ListInstancesRequest& WithRegionScope(RegionScope value) {
    SetRegionScope(value);
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  RegionScope m_regionScope{RegionScope::NOT_SET};
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_regionScopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSOAdmin
}  // namespace Aws
