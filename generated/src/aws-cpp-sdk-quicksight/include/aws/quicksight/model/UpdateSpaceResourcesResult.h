/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FailedSpaceResourceOperation.h>

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
class UpdateSpaceResourcesResult {
 public:
  AWS_QUICKSIGHT_API UpdateSpaceResourcesResult() = default;
  AWS_QUICKSIGHT_API UpdateSpaceResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API UpdateSpaceResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  UpdateSpaceResourcesResult& WithSpaceId(SpaceIdT&& value) {
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
  UpdateSpaceResourcesResult& WithSpaceArn(SpaceArnT&& value) {
    SetSpaceArn(std::forward<SpaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of resource operations that failed.</p>
   */
  inline const Aws::Vector<FailedSpaceResourceOperation>& GetFailedResourceOperations() const { return m_failedResourceOperations; }
  template <typename FailedResourceOperationsT = Aws::Vector<FailedSpaceResourceOperation>>
  void SetFailedResourceOperations(FailedResourceOperationsT&& value) {
    m_failedResourceOperationsHasBeenSet = true;
    m_failedResourceOperations = std::forward<FailedResourceOperationsT>(value);
  }
  template <typename FailedResourceOperationsT = Aws::Vector<FailedSpaceResourceOperation>>
  UpdateSpaceResourcesResult& WithFailedResourceOperations(FailedResourceOperationsT&& value) {
    SetFailedResourceOperations(std::forward<FailedResourceOperationsT>(value));
    return *this;
  }
  template <typename FailedResourceOperationsT = FailedSpaceResourceOperation>
  UpdateSpaceResourcesResult& AddFailedResourceOperations(FailedResourceOperationsT&& value) {
    m_failedResourceOperationsHasBeenSet = true;
    m_failedResourceOperations.emplace_back(std::forward<FailedResourceOperationsT>(value));
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
  UpdateSpaceResourcesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_spaceId;

  Aws::String m_spaceArn;

  Aws::Vector<FailedSpaceResourceOperation> m_failedResourceOperations;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_spaceIdHasBeenSet = false;
  bool m_spaceArnHasBeenSet = false;
  bool m_failedResourceOperationsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
