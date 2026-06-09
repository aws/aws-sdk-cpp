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
class UpdateSpacePermissionsResult {
 public:
  AWS_QUICKSIGHT_API UpdateSpacePermissionsResult() = default;
  AWS_QUICKSIGHT_API UpdateSpacePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API UpdateSpacePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the space.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  UpdateSpacePermissionsResult& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the space.</p>
   */
  inline const Aws::String& GetSpaceArn() const { return m_spaceArn; }
  template <typename SpaceArnT = Aws::String>
  void SetSpaceArn(SpaceArnT&& value) {
    m_spaceArnHasBeenSet = true;
    m_spaceArn = std::forward<SpaceArnT>(value);
  }
  template <typename SpaceArnT = Aws::String>
  UpdateSpacePermissionsResult& WithSpaceArn(SpaceArnT&& value) {
    SetSpaceArn(std::forward<SpaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated permissions for the space.</p>
   */
  inline const Aws::Vector<ResourcePermission>& GetPermissions() const { return m_permissions; }
  template <typename PermissionsT = Aws::Vector<ResourcePermission>>
  void SetPermissions(PermissionsT&& value) {
    m_permissionsHasBeenSet = true;
    m_permissions = std::forward<PermissionsT>(value);
  }
  template <typename PermissionsT = Aws::Vector<ResourcePermission>>
  UpdateSpacePermissionsResult& WithPermissions(PermissionsT&& value) {
    SetPermissions(std::forward<PermissionsT>(value));
    return *this;
  }
  template <typename PermissionsT = ResourcePermission>
  UpdateSpacePermissionsResult& AddPermissions(PermissionsT&& value) {
    m_permissionsHasBeenSet = true;
    m_permissions.emplace_back(std::forward<PermissionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services request ID for this operation.</p>
   */
  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateSpacePermissionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_spaceId;

  Aws::String m_spaceArn;

  Aws::Vector<ResourcePermission> m_permissions;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_spaceIdHasBeenSet = false;
  bool m_spaceArnHasBeenSet = false;
  bool m_permissionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
