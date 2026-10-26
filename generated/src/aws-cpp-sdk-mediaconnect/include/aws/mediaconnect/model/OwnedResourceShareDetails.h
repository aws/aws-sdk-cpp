/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ResourceShareState.h>

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
 * <p>The cross-account sharing details for an endpoint that this account owns and
 * shares with other accounts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/OwnedResourceShareDetails">AWS
 * API Reference</a></p>
 */
class OwnedResourceShareDetails {
 public:
  AWS_MEDIACONNECT_API OwnedResourceShareDetails() = default;
  AWS_MEDIACONNECT_API OwnedResourceShareDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API OwnedResourceShareDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The sharing state of the endpoint. Valid values include the following:</p>
   * <ul> <li> <p> <code>SHARED</code> – The endpoint is shared with one or more
   * accounts.</p> </li> <li> <p> <code>UNSHARED</code> – The endpoint is not shared
   * with other accounts.</p> </li> </ul>
   */
  inline ResourceShareState GetShareState() const { return m_shareState; }
  inline bool ShareStateHasBeenSet() const { return m_shareStateHasBeenSet; }
  inline void SetShareState(ResourceShareState value) {
    m_shareStateHasBeenSet = true;
    m_shareState = value;
  }
  inline OwnedResourceShareDetails& WithShareState(ResourceShareState value) {
    SetShareState(value);
    return *this;
  }
  ///@}
 private:
  ResourceShareState m_shareState{ResourceShareState::NOT_SET};
  bool m_shareStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
