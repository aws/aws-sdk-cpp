/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Configuration options specific to Spot instances.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterSpotOptions">AWS
 * API Reference</a></p>
 */
class ClusterSpotOptions {
 public:
  AWS_SAGEMAKER_API ClusterSpotOptions() = default;
  AWS_SAGEMAKER_API ClusterSpotOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterSpotOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
