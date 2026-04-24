/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/snowball/Snowball_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Snowball {
namespace Model {

/**
 * <p>The version of the requested service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ServiceVersion">AWS
 * API Reference</a></p>
 */
class ServiceVersion {
 public:
  AWS_SNOWBALL_API ServiceVersion() = default;
  AWS_SNOWBALL_API ServiceVersion(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SNOWBALL_API ServiceVersion& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SNOWBALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The version number of the requested service.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  ServiceVersion& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_version;
  bool m_versionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Snowball
}  // namespace Aws
