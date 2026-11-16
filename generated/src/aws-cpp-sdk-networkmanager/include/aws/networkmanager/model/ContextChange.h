/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ContextChangeType.h>
#include <aws/networkmanager/model/ContextEntry.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {

/**
 * <p>Describes a context entry that was added to or removed from a context
 * store.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ContextChange">AWS
 * API Reference</a></p>
 */
class ContextChange {
 public:
  AWS_NETWORKMANAGER_API ContextChange() = default;
  AWS_NETWORKMANAGER_API ContextChange(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API ContextChange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of change. The possible values are the following:</p> <ul> <li> <p>
   * <code>ADDED</code>: The context entry was added to the context store.</p> </li>
   * <li> <p> <code>REMOVED</code>: The context entry was removed from the context
   * store.</p> </li> </ul>
   */
  inline ContextChangeType GetChangeType() const { return m_changeType; }
  inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }
  inline void SetChangeType(ContextChangeType value) {
    m_changeTypeHasBeenSet = true;
    m_changeType = value;
  }
  inline ContextChange& WithChangeType(ContextChangeType value) {
    SetChangeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The context entry that was added or removed.</p>
   */
  inline const ContextEntry& GetContext() const { return m_context; }
  inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
  template <typename ContextT = ContextEntry>
  void SetContext(ContextT&& value) {
    m_contextHasBeenSet = true;
    m_context = std::forward<ContextT>(value);
  }
  template <typename ContextT = ContextEntry>
  ContextChange& WithContext(ContextT&& value) {
    SetContext(std::forward<ContextT>(value));
    return *this;
  }
  ///@}
 private:
  ContextChangeType m_changeType{ContextChangeType::NOT_SET};

  ContextEntry m_context;
  bool m_changeTypeHasBeenSet = false;
  bool m_contextHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
