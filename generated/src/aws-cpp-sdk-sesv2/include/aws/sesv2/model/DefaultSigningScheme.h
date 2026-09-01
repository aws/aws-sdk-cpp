/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SESV2 {
namespace Model {

/**
 * <p>Specifies the default signing scheme, in which Amazon SES API v2 doesn't
 * apply S/MIME signing to messages sent with the configuration set.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DefaultSigningScheme">AWS
 * API Reference</a></p>
 */
class DefaultSigningScheme {
 public:
  AWS_SESV2_API DefaultSigningScheme() = default;
  AWS_SESV2_API DefaultSigningScheme(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API DefaultSigningScheme& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
