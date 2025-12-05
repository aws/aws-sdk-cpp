/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/BlockingResourceType.h>
#include <aws/outposts/model/DecommissionRequestStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {
class StartOutpostDecommissionResult {
 public:
  AWS_OUTPOSTS_API StartOutpostDecommissionResult() = default;
  AWS_OUTPOSTS_API StartOutpostDecommissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OUTPOSTS_API StartOutpostDecommissionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The status of the decommission request.</p>
   */
  inline DecommissionRequestStatus GetStatus() const { return m_status; }
  inline void SetStatus(DecommissionRequestStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartOutpostDecommissionResult& WithStatus(DecommissionRequestStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resources still associated with the Outpost that you are
   * decommissioning.</p>
   */
  inline const Aws::Vector<BlockingResourceType>& GetBlockingResourceTypes() const { return m_blockingResourceTypes; }
  template <typename BlockingResourceTypesT = Aws::Vector<BlockingResourceType>>
  void SetBlockingResourceTypes(BlockingResourceTypesT&& value) {
    m_blockingResourceTypesHasBeenSet = true;
    m_blockingResourceTypes = std::forward<BlockingResourceTypesT>(value);
  }
  template <typename BlockingResourceTypesT = Aws::Vector<BlockingResourceType>>
  StartOutpostDecommissionResult& WithBlockingResourceTypes(BlockingResourceTypesT&& value) {
    SetBlockingResourceTypes(std::forward<BlockingResourceTypesT>(value));
    return *this;
  }
  inline StartOutpostDecommissionResult& AddBlockingResourceTypes(BlockingResourceType value) {
    m_blockingResourceTypesHasBeenSet = true;
    m_blockingResourceTypes.push_back(value);
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
  StartOutpostDecommissionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  DecommissionRequestStatus m_status{DecommissionRequestStatus::NOT_SET};

  Aws::Vector<BlockingResourceType> m_blockingResourceTypes;

  Aws::String m_requestId;
  bool m_statusHasBeenSet = false;
  bool m_blockingResourceTypesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
