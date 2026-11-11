/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/shield/Shield_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Shield {
namespace Model {

/**
 * <p>Specifies that Shield Advanced should configure its WAF rules with the WAF
 * <code>Block</code> action. </p> <p>This is only used in the context of the
 * <code>ResponseAction</code> setting. </p> <p>JSON specification: <code>"Block":
 * {}</code> </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/BlockAction">AWS
 * API Reference</a></p>
 */
class BlockAction {
 public:
  AWS_SHIELD_API BlockAction() = default;
  AWS_SHIELD_API BlockAction(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SHIELD_API BlockAction& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SHIELD_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;
};

}  // namespace Model
}  // namespace Shield
}  // namespace Aws
