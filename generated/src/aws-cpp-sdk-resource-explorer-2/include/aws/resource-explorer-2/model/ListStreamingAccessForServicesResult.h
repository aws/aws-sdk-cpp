/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/StreamingAccessDetails.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ResourceExplorer2 {
namespace Model {
class ListStreamingAccessForServicesResult {
 public:
  AWS_RESOURCEEXPLORER2_API ListStreamingAccessForServicesResult() = default;
  AWS_RESOURCEEXPLORER2_API ListStreamingAccessForServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESOURCEEXPLORER2_API ListStreamingAccessForServicesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of Amazon Web Services services that have streaming access to your
   * Resource Explorer data, including details about when the access was granted.</p>
   */
  inline const Aws::Vector<StreamingAccessDetails>& GetStreamingAccessForServices() const { return m_streamingAccessForServices; }
  template <typename StreamingAccessForServicesT = Aws::Vector<StreamingAccessDetails>>
  void SetStreamingAccessForServices(StreamingAccessForServicesT&& value) {
    m_streamingAccessForServicesHasBeenSet = true;
    m_streamingAccessForServices = std::forward<StreamingAccessForServicesT>(value);
  }
  template <typename StreamingAccessForServicesT = Aws::Vector<StreamingAccessDetails>>
  ListStreamingAccessForServicesResult& WithStreamingAccessForServices(StreamingAccessForServicesT&& value) {
    SetStreamingAccessForServices(std::forward<StreamingAccessForServicesT>(value));
    return *this;
  }
  template <typename StreamingAccessForServicesT = StreamingAccessDetails>
  ListStreamingAccessForServicesResult& AddStreamingAccessForServices(StreamingAccessForServicesT&& value) {
    m_streamingAccessForServicesHasBeenSet = true;
    m_streamingAccessForServices.emplace_back(std::forward<StreamingAccessForServicesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If present, indicates that more output is available than is included in the
   * current response. Use this value in the <code>NextToken</code> request parameter
   * in a subsequent call to the operation to get the next part of the output. You
   * should repeat this until the <code>NextToken</code> response element comes back
   * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListStreamingAccessForServicesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListStreamingAccessForServicesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<StreamingAccessDetails> m_streamingAccessForServices;
  bool m_streamingAccessForServicesHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
