/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace NetworkManager {
namespace Model {

/**
 */
class GetContextVersionRequest : public NetworkManagerRequest {
 public:
  AWS_NETWORKMANAGER_API GetContextVersionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetContextVersion"; }

  AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the context store.</p>
   */
  inline const Aws::String& GetContextStoreId() const { return m_contextStoreId; }
  inline bool ContextStoreIdHasBeenSet() const { return m_contextStoreIdHasBeenSet; }
  template <typename ContextStoreIdT = Aws::String>
  void SetContextStoreId(ContextStoreIdT&& value) {
    m_contextStoreIdHasBeenSet = true;
    m_contextStoreId = std::forward<ContextStoreIdT>(value);
  }
  template <typename ContextStoreIdT = Aws::String>
  GetContextVersionRequest& WithContextStoreId(ContextStoreIdT&& value) {
    SetContextStoreId(std::forward<ContextStoreIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contextStoreId;
  bool m_contextStoreIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
