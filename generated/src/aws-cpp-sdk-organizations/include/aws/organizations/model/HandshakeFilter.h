/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/ActionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Organizations {
namespace Model {

/**
 * <p>Contains the filter used to select the handshakes for an
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/HandshakeFilter">AWS
 * API Reference</a></p>
 */
class HandshakeFilter {
 public:
  AWS_ORGANIZATIONS_API HandshakeFilter() = default;
  AWS_ORGANIZATIONS_API HandshakeFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_ORGANIZATIONS_API HandshakeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of handshake.</p> <p>If you specify <code>ActionType</code>, you
   * cannot also specify <code>ParentHandshakeId</code>.</p>
   */
  inline ActionType GetActionType() const { return m_actionType; }
  inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
  inline void SetActionType(ActionType value) {
    m_actionTypeHasBeenSet = true;
    m_actionType = value;
  }
  inline HandshakeFilter& WithActionType(ActionType value) {
    SetActionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parent handshake. Only used for handshake types that are a child of
   * another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you cannot
   * also specify <code>ActionType</code>.</p> <p>The <a
   * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
   * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
   */
  inline const Aws::String& GetParentHandshakeId() const { return m_parentHandshakeId; }
  inline bool ParentHandshakeIdHasBeenSet() const { return m_parentHandshakeIdHasBeenSet; }
  template <typename ParentHandshakeIdT = Aws::String>
  void SetParentHandshakeId(ParentHandshakeIdT&& value) {
    m_parentHandshakeIdHasBeenSet = true;
    m_parentHandshakeId = std::forward<ParentHandshakeIdT>(value);
  }
  template <typename ParentHandshakeIdT = Aws::String>
  HandshakeFilter& WithParentHandshakeId(ParentHandshakeIdT&& value) {
    SetParentHandshakeId(std::forward<ParentHandshakeIdT>(value));
    return *this;
  }
  ///@}
 private:
  ActionType m_actionType{ActionType::NOT_SET};

  Aws::String m_parentHandshakeId;
  bool m_actionTypeHasBeenSet = false;
  bool m_parentHandshakeIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
