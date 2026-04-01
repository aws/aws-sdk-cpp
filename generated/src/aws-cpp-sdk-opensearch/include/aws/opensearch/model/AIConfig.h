/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p>Configuration settings for AI-powered capabilities of an OpenSearch UI
 * application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AIConfig">AWS
 * API Reference</a></p>
 */
class AIConfig {
 public:
  AWS_OPENSEARCHSERVICE_API AIConfig() = default;
  AWS_OPENSEARCHSERVICE_API AIConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API AIConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
