/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/ServerlessVectorAccelerationStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchServerless {
namespace Model {

/**
 * <p>Configuration options for vector search capabilities in an OpenSearch
 * Serverless collection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/VectorOptions">AWS
 * API Reference</a></p>
 */
class VectorOptions {
 public:
  AWS_OPENSEARCHSERVERLESS_API VectorOptions() = default;
  AWS_OPENSEARCHSERVERLESS_API VectorOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API VectorOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether serverless vector acceleration is enabled for the
   * collection.</p>
   */
  inline ServerlessVectorAccelerationStatus GetServerlessVectorAcceleration() const { return m_serverlessVectorAcceleration; }
  inline bool ServerlessVectorAccelerationHasBeenSet() const { return m_serverlessVectorAccelerationHasBeenSet; }
  inline void SetServerlessVectorAcceleration(ServerlessVectorAccelerationStatus value) {
    m_serverlessVectorAccelerationHasBeenSet = true;
    m_serverlessVectorAcceleration = value;
  }
  inline VectorOptions& WithServerlessVectorAcceleration(ServerlessVectorAccelerationStatus value) {
    SetServerlessVectorAcceleration(value);
    return *this;
  }
  ///@}
 private:
  ServerlessVectorAccelerationStatus m_serverlessVectorAcceleration{ServerlessVectorAccelerationStatus::NOT_SET};
  bool m_serverlessVectorAccelerationHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
