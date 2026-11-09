/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

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
 * <p>The cross-account sharing details for an endpoint that another account shares
 * with this account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ConsumedResourceShareDetails">AWS
 * API Reference</a></p>
 */
class ConsumedResourceShareDetails {
 public:
  AWS_MEDIACONNECT_API ConsumedResourceShareDetails() = default;
  AWS_MEDIACONNECT_API ConsumedResourceShareDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API ConsumedResourceShareDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the shared endpoint.</p>
   */
  inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
  inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
  template <typename OwnerAccountIdT = Aws::String>
  void SetOwnerAccountId(OwnerAccountIdT&& value) {
    m_ownerAccountIdHasBeenSet = true;
    m_ownerAccountId = std::forward<OwnerAccountIdT>(value);
  }
  template <typename OwnerAccountIdT = Aws::String>
  ConsumedResourceShareDetails& WithOwnerAccountId(OwnerAccountIdT&& value) {
    SetOwnerAccountId(std::forward<OwnerAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ownerAccountId;
  bool m_ownerAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
