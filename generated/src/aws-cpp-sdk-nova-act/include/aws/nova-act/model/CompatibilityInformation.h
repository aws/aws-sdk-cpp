/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {

/**
 * <p>Information about client compatibility and supported model
 * versions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/CompatibilityInformation">AWS
 * API Reference</a></p>
 */
class CompatibilityInformation {
 public:
  AWS_NOVAACT_API CompatibilityInformation() = default;
  AWS_NOVAACT_API CompatibilityInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API CompatibilityInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The client compatibility version that was requested.</p>
   */
  inline int GetClientCompatibilityVersion() const { return m_clientCompatibilityVersion; }
  inline bool ClientCompatibilityVersionHasBeenSet() const { return m_clientCompatibilityVersionHasBeenSet; }
  inline void SetClientCompatibilityVersion(int value) {
    m_clientCompatibilityVersionHasBeenSet = true;
    m_clientCompatibilityVersion = value;
  }
  inline CompatibilityInformation& WithClientCompatibilityVersion(int value) {
    SetClientCompatibilityVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of model IDs that are supported for the client compatibility
   * version.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSupportedModelIds() const { return m_supportedModelIds; }
  inline bool SupportedModelIdsHasBeenSet() const { return m_supportedModelIdsHasBeenSet; }
  template <typename SupportedModelIdsT = Aws::Vector<Aws::String>>
  void SetSupportedModelIds(SupportedModelIdsT&& value) {
    m_supportedModelIdsHasBeenSet = true;
    m_supportedModelIds = std::forward<SupportedModelIdsT>(value);
  }
  template <typename SupportedModelIdsT = Aws::Vector<Aws::String>>
  CompatibilityInformation& WithSupportedModelIds(SupportedModelIdsT&& value) {
    SetSupportedModelIds(std::forward<SupportedModelIdsT>(value));
    return *this;
  }
  template <typename SupportedModelIdsT = Aws::String>
  CompatibilityInformation& AddSupportedModelIds(SupportedModelIdsT&& value) {
    m_supportedModelIdsHasBeenSet = true;
    m_supportedModelIds.emplace_back(std::forward<SupportedModelIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about compatibility requirements or
   * recommendations.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  CompatibilityInformation& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  int m_clientCompatibilityVersion{0};
  bool m_clientCompatibilityVersionHasBeenSet = false;

  Aws::Vector<Aws::String> m_supportedModelIds;
  bool m_supportedModelIdsHasBeenSet = false;

  Aws::String m_message;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
