/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace SecurityAgent {
namespace Model {

/**
 * <p>Input for UntagResource operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UntagResourceInput">AWS
 * API Reference</a></p>
 */
class UntagResourceRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API UntagResourceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  AWS_SECURITYAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>ARN of the resource to untag</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  UntagResourceRequest& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of tag keys to remove from the resource</p>
   */
  inline const Aws::Vector<Aws::String>& GetTagKeys() const { return m_tagKeys; }
  inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }
  template <typename TagKeysT = Aws::Vector<Aws::String>>
  void SetTagKeys(TagKeysT&& value) {
    m_tagKeysHasBeenSet = true;
    m_tagKeys = std::forward<TagKeysT>(value);
  }
  template <typename TagKeysT = Aws::Vector<Aws::String>>
  UntagResourceRequest& WithTagKeys(TagKeysT&& value) {
    SetTagKeys(std::forward<TagKeysT>(value));
    return *this;
  }
  template <typename TagKeysT = Aws::String>
  UntagResourceRequest& AddTagKeys(TagKeysT&& value) {
    m_tagKeysHasBeenSet = true;
    m_tagKeys.emplace_back(std::forward<TagKeysT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::Vector<Aws::String> m_tagKeys;
  bool m_resourceArnHasBeenSet = false;
  bool m_tagKeysHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
