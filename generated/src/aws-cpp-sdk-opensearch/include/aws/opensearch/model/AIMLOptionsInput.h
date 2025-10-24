﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/NaturalLanguageQueryGenerationOptionsInput.h>
#include <aws/opensearch/model/S3VectorsEngine.h>

#include <utility>

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
 * <p>Container for parameters required to enable all machine learning
 * features.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AIMLOptionsInput">AWS
 * API Reference</a></p>
 */
class AIMLOptionsInput {
 public:
  AWS_OPENSEARCHSERVICE_API AIMLOptionsInput() = default;
  AWS_OPENSEARCHSERVICE_API AIMLOptionsInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API AIMLOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Container for parameters required for natural language query generation on
   * the specified domain.</p>
   */
  inline const NaturalLanguageQueryGenerationOptionsInput& GetNaturalLanguageQueryGenerationOptions() const {
    return m_naturalLanguageQueryGenerationOptions;
  }
  inline bool NaturalLanguageQueryGenerationOptionsHasBeenSet() const { return m_naturalLanguageQueryGenerationOptionsHasBeenSet; }
  template <typename NaturalLanguageQueryGenerationOptionsT = NaturalLanguageQueryGenerationOptionsInput>
  void SetNaturalLanguageQueryGenerationOptions(NaturalLanguageQueryGenerationOptionsT&& value) {
    m_naturalLanguageQueryGenerationOptionsHasBeenSet = true;
    m_naturalLanguageQueryGenerationOptions = std::forward<NaturalLanguageQueryGenerationOptionsT>(value);
  }
  template <typename NaturalLanguageQueryGenerationOptionsT = NaturalLanguageQueryGenerationOptionsInput>
  AIMLOptionsInput& WithNaturalLanguageQueryGenerationOptions(NaturalLanguageQueryGenerationOptionsT&& value) {
    SetNaturalLanguageQueryGenerationOptions(std::forward<NaturalLanguageQueryGenerationOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Container for parameters required to enable S3 vectors engine features on the
   * specified domain.</p>
   */
  inline const S3VectorsEngine& GetS3VectorsEngine() const { return m_s3VectorsEngine; }
  inline bool S3VectorsEngineHasBeenSet() const { return m_s3VectorsEngineHasBeenSet; }
  template <typename S3VectorsEngineT = S3VectorsEngine>
  void SetS3VectorsEngine(S3VectorsEngineT&& value) {
    m_s3VectorsEngineHasBeenSet = true;
    m_s3VectorsEngine = std::forward<S3VectorsEngineT>(value);
  }
  template <typename S3VectorsEngineT = S3VectorsEngine>
  AIMLOptionsInput& WithS3VectorsEngine(S3VectorsEngineT&& value) {
    SetS3VectorsEngine(std::forward<S3VectorsEngineT>(value));
    return *this;
  }
  ///@}
 private:
  NaturalLanguageQueryGenerationOptionsInput m_naturalLanguageQueryGenerationOptions;
  bool m_naturalLanguageQueryGenerationOptionsHasBeenSet = false;

  S3VectorsEngine m_s3VectorsEngine;
  bool m_s3VectorsEngineHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
