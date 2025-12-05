/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/model/RequiredTag.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ResourceGroupsTaggingAPI {
namespace Model {
class ListRequiredTagsResult {
 public:
  AWS_RESOURCEGROUPSTAGGINGAPI_API ListRequiredTagsResult() = default;
  AWS_RESOURCEGROUPSTAGGINGAPI_API ListRequiredTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESOURCEGROUPSTAGGINGAPI_API ListRequiredTagsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The required tags.</p>
   */
  inline const Aws::Vector<RequiredTag>& GetRequiredTags() const { return m_requiredTags; }
  template <typename RequiredTagsT = Aws::Vector<RequiredTag>>
  void SetRequiredTags(RequiredTagsT&& value) {
    m_requiredTagsHasBeenSet = true;
    m_requiredTags = std::forward<RequiredTagsT>(value);
  }
  template <typename RequiredTagsT = Aws::Vector<RequiredTag>>
  ListRequiredTagsResult& WithRequiredTags(RequiredTagsT&& value) {
    SetRequiredTags(std::forward<RequiredTagsT>(value));
    return *this;
  }
  template <typename RequiredTagsT = RequiredTag>
  ListRequiredTagsResult& AddRequiredTags(RequiredTagsT&& value) {
    m_requiredTagsHasBeenSet = true;
    m_requiredTags.emplace_back(std::forward<RequiredTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token for requesting another page of required tags if the
   * <code>NextToken</code> response element indicates that more required tags are
   * available. Use the value of the returned <code>NextToken</code> element in your
   * request until the token comes back as null. Pass null if this is the first
   * call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRequiredTagsResult& WithNextToken(NextTokenT&& value) {
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
  ListRequiredTagsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RequiredTag> m_requiredTags;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_requiredTagsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ResourceGroupsTaggingAPI
}  // namespace Aws
