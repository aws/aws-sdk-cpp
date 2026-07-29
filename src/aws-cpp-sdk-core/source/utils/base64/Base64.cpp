/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/base64/Base64.h>
#include <aws/crt/Types.h>

using namespace Aws::Utils::Base64;

namespace Aws {
namespace Utils {
namespace Base64 {

namespace {
Aws::Crt::ByteCursor AsCursor(const Aws::Utils::ByteBuffer& buffer) {
  return Aws::Crt::ByteCursorFromArray(buffer.GetUnderlyingData(), buffer.GetLength());
}

Aws::Crt::ByteCursor AsCursor(const Aws::String& str) {
  return Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(str.data()), str.length());
}
}  // namespace

Base64::Base64(const char* encodingTable) { AWS_UNREFERENCED_PARAM(encodingTable); }

Aws::String Base64::Encode(const Aws::Utils::ByteBuffer& buffer) const {
  const auto encoded = Aws::Crt::Base64Encode(AsCursor(buffer));
  return {encoded.data(), encoded.size()};
}

Aws::Utils::ByteBuffer Base64::Decode(const Aws::String& str) const {
  const auto decoded = Aws::Crt::Base64Decode(AsCursor(str));
  return {decoded.data(), decoded.size()};
}

size_t Base64::CalculateBase64EncodedLength(const Aws::Utils::ByteBuffer& buffer) {
  return Aws::Crt::Base64EncodedLength(AsCursor(buffer));
}

size_t Base64::CalculateBase64DecodedLength(const Aws::String& b64input) {
  return Aws::Crt::Base64DecodedLength(AsCursor(b64input));
}

}  // namespace Base64
}  // namespace Utils
}  // namespace Aws
