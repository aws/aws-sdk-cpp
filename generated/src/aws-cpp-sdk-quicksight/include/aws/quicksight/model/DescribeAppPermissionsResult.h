/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ResourcePermission.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class DescribeAppPermissionsResult {
 public:
  AWS_QUICKSIGHT_API DescribeAppPermissionsResult() = default;
  AWS_QUICKSIGHT_API DescribeAppPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API DescribeAppPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the app.</p>
   */
  inline const Aws::String& GetAppId() const { return m_appId; }
  template <typename AppIdT = Aws::String>
  void SetAppId(AppIdT&& value) {
    m_appIdHasBeenSet = true;
    m_appId = std::forward<AppIdT>(value);
  }
  template <typename AppIdT = Aws::String>
  DescribeAppPermissionsResult& WithAppId(AppIdT&& value) {
    SetAppId(std::forward<AppIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the app.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DescribeAppPermissionsResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource permissions for the app.</p>
   */
  inline const Aws::Vector<ResourcePermission>& GetPermissions() const { return m_permissions; }
  template <typename PermissionsT = Aws::Vector<ResourcePermission>>
  void SetPermissions(PermissionsT&& value) {
    m_permissionsHasBeenSet = true;
    m_permissions = std::forward<PermissionsT>(value);
  }
  template <typename PermissionsT = Aws::Vector<ResourcePermission>>
  DescribeAppPermissionsResult& WithPermissions(PermissionsT&& value) {
    SetPermissions(std::forward<PermissionsT>(value));
    return *this;
  }
  template <typename PermissionsT = ResourcePermission>
  DescribeAppPermissionsResult& AddPermissions(PermissionsT&& value) {
    m_permissionsHasBeenSet = true;
    m_permissions.emplace_back(std::forward<PermissionsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeAppPermissionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_appId;

  Aws::String m_arn;

  Aws::Vector<ResourcePermission> m_permissions;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_appIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_permissionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
