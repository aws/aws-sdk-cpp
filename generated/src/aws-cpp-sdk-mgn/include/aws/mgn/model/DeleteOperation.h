/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>An operation that deletes a construct from the mapping.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteOperation">AWS
 * API Reference</a></p>
 */
class DeleteOperation {
 public:
  AWS_MGN_API DeleteOperation() = default;
  AWS_MGN_API DeleteOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API DeleteOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
