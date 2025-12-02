/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Information about the client making API requests, used for compatibility
 * checking.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/ClientInfo">AWS
 * API Reference</a></p>
 */
class ClientInfo {
 public:
  AWS_NOVAACT_API ClientInfo() = default;
  AWS_NOVAACT_API ClientInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API ClientInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The compatibility version of the client, used to ensure API
   * compatibility.</p>
   */
  inline int GetCompatibilityVersion() const { return m_compatibilityVersion; }
  inline bool CompatibilityVersionHasBeenSet() const { return m_compatibilityVersionHasBeenSet; }
  inline void SetCompatibilityVersion(int value) {
    m_compatibilityVersionHasBeenSet = true;
    m_compatibilityVersion = value;
  }
  inline ClientInfo& WithCompatibilityVersion(int value) {
    SetCompatibilityVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the SDK being used by the client.</p>
   */
  inline const Aws::String& GetSdkVersion() const { return m_sdkVersion; }
  inline bool SdkVersionHasBeenSet() const { return m_sdkVersionHasBeenSet; }
  template <typename SdkVersionT = Aws::String>
  void SetSdkVersion(SdkVersionT&& value) {
    m_sdkVersionHasBeenSet = true;
    m_sdkVersion = std::forward<SdkVersionT>(value);
  }
  template <typename SdkVersionT = Aws::String>
  ClientInfo& WithSdkVersion(SdkVersionT&& value) {
    SetSdkVersion(std::forward<SdkVersionT>(value));
    return *this;
  }
  ///@}
 private:
  int m_compatibilityVersion{0};
  bool m_compatibilityVersionHasBeenSet = false;

  Aws::String m_sdkVersion;
  bool m_sdkVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
