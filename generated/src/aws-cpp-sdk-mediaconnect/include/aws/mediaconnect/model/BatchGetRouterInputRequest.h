/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace MediaConnect {
namespace Model {

/**
 */
class BatchGetRouterInputRequest : public MediaConnectRequest {
 public:
  AWS_MEDIACONNECT_API BatchGetRouterInputRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetRouterInput"; }

  AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;

  AWS_MEDIACONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the router inputs you want to retrieve
   * information about.</p>
   */
  inline const Aws::Vector<Aws::String>& GetArns() const { return m_arns; }
  inline bool ArnsHasBeenSet() const { return m_arnsHasBeenSet; }
  template <typename ArnsT = Aws::Vector<Aws::String>>
  void SetArns(ArnsT&& value) {
    m_arnsHasBeenSet = true;
    m_arns = std::forward<ArnsT>(value);
  }
  template <typename ArnsT = Aws::Vector<Aws::String>>
  BatchGetRouterInputRequest& WithArns(ArnsT&& value) {
    SetArns(std::forward<ArnsT>(value));
    return *this;
  }
  template <typename ArnsT = Aws::String>
  BatchGetRouterInputRequest& AddArns(ArnsT&& value) {
    m_arnsHasBeenSet = true;
    m_arns.emplace_back(std::forward<ArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_arns;
  bool m_arnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
