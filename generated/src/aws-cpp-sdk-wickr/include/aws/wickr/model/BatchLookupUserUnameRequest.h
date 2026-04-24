/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/WickrRequest.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Wickr {
namespace Model {

/**
 */
class BatchLookupUserUnameRequest : public WickrRequest {
 public:
  AWS_WICKR_API BatchLookupUserUnameRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchLookupUserUname"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  AWS_WICKR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the Wickr network where the users will be looked up.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  BatchLookupUserUnameRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of username hashes (unames) to look up. Each uname is a unique
   * identifier for a user's username. Maximum 50 unames per batch request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetUnames() const { return m_unames; }
  inline bool UnamesHasBeenSet() const { return m_unamesHasBeenSet; }
  template <typename UnamesT = Aws::Vector<Aws::String>>
  void SetUnames(UnamesT&& value) {
    m_unamesHasBeenSet = true;
    m_unames = std::forward<UnamesT>(value);
  }
  template <typename UnamesT = Aws::Vector<Aws::String>>
  BatchLookupUserUnameRequest& WithUnames(UnamesT&& value) {
    SetUnames(std::forward<UnamesT>(value));
    return *this;
  }
  template <typename UnamesT = Aws::String>
  BatchLookupUserUnameRequest& AddUnames(UnamesT&& value) {
    m_unamesHasBeenSet = true;
    m_unames.emplace_back(std::forward<UnamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for this request to ensure idempotency.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  BatchLookupUserUnameRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  Aws::Vector<Aws::String> m_unames;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_networkIdHasBeenSet = false;
  bool m_unamesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
