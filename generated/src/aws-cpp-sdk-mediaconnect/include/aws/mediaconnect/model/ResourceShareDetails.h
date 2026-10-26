/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ConsumedResourceShareDetails.h>
#include <aws/mediaconnect/model/OwnedResourceShareDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>The cross-account sharing details for an endpoint. Endpoints are shared
 * through Resource Access Manager (RAM). This is a union type, so exactly one of
 * its members is set: <code>owned</code> when this account owns the endpoint and
 * shares it with other accounts, or <code>consumed</code> when this account
 * consumes an endpoint that another account shares. To change how an endpoint is
 * shared, use RAM.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ResourceShareDetails">AWS
 * API Reference</a></p>
 */
class ResourceShareDetails {
 public:
  AWS_MEDIACONNECT_API ResourceShareDetails() = default;
  AWS_MEDIACONNECT_API ResourceShareDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API ResourceShareDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The sharing details for an endpoint that this account owns and shares with
   * other accounts through RAM.</p>
   */
  inline const OwnedResourceShareDetails& GetOwned() const { return m_owned; }
  inline bool OwnedHasBeenSet() const { return m_ownedHasBeenSet; }
  template <typename OwnedT = OwnedResourceShareDetails>
  void SetOwned(OwnedT&& value) {
    m_ownedHasBeenSet = true;
    m_owned = std::forward<OwnedT>(value);
  }
  template <typename OwnedT = OwnedResourceShareDetails>
  ResourceShareDetails& WithOwned(OwnedT&& value) {
    SetOwned(std::forward<OwnedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sharing details for an endpoint that another account shares with this
   * account through RAM.</p>
   */
  inline const ConsumedResourceShareDetails& GetConsumed() const { return m_consumed; }
  inline bool ConsumedHasBeenSet() const { return m_consumedHasBeenSet; }
  template <typename ConsumedT = ConsumedResourceShareDetails>
  void SetConsumed(ConsumedT&& value) {
    m_consumedHasBeenSet = true;
    m_consumed = std::forward<ConsumedT>(value);
  }
  template <typename ConsumedT = ConsumedResourceShareDetails>
  ResourceShareDetails& WithConsumed(ConsumedT&& value) {
    SetConsumed(std::forward<ConsumedT>(value));
    return *this;
  }
  ///@}
 private:
  OwnedResourceShareDetails m_owned;

  ConsumedResourceShareDetails m_consumed;
  bool m_ownedHasBeenSet = false;
  bool m_consumedHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
