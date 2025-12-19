/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Represents a guest user who has accessed the network from a federated Wickr
 * network.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/GuestUser">AWS API
 * Reference</a></p>
 */
class GuestUser {
 public:
  AWS_WICKR_API GuestUser() = default;
  AWS_WICKR_API GuestUser(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API GuestUser& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The billing period when this guest user accessed the network (e.g.,
   * '2024-01').</p>
   */
  inline const Aws::String& GetBillingPeriod() const { return m_billingPeriod; }
  inline bool BillingPeriodHasBeenSet() const { return m_billingPeriodHasBeenSet; }
  template <typename BillingPeriodT = Aws::String>
  void SetBillingPeriod(BillingPeriodT&& value) {
    m_billingPeriodHasBeenSet = true;
    m_billingPeriod = std::forward<BillingPeriodT>(value);
  }
  template <typename BillingPeriodT = Aws::String>
  GuestUser& WithBillingPeriod(BillingPeriodT&& value) {
    SetBillingPeriod(std::forward<BillingPeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The username of the guest user.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  GuestUser& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique username hash identifier for the guest user.</p>
   */
  inline const Aws::String& GetUsernameHash() const { return m_usernameHash; }
  inline bool UsernameHashHasBeenSet() const { return m_usernameHashHasBeenSet; }
  template <typename UsernameHashT = Aws::String>
  void SetUsernameHash(UsernameHashT&& value) {
    m_usernameHashHasBeenSet = true;
    m_usernameHash = std::forward<UsernameHashT>(value);
  }
  template <typename UsernameHashT = Aws::String>
  GuestUser& WithUsernameHash(UsernameHashT&& value) {
    SetUsernameHash(std::forward<UsernameHashT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_billingPeriod;

  Aws::String m_username;

  Aws::String m_usernameHash;
  bool m_billingPeriodHasBeenSet = false;
  bool m_usernameHasBeenSet = false;
  bool m_usernameHashHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
