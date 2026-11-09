/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>

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
 * <p>Processing statistics for the Amazon S3 objects in an ingestion
 * source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/S3Statistics">AWS
 * API Reference</a></p>
 */
class S3Statistics {
 public:
  AWS_OPENSEARCHSERVERLESS_API S3Statistics() = default;
  AWS_OPENSEARCHSERVERLESS_API S3Statistics(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API S3Statistics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of Amazon S3 objects discovered for ingestion.</p>
   */
  inline long long GetObjectsDiscovered() const { return m_objectsDiscovered; }
  inline bool ObjectsDiscoveredHasBeenSet() const { return m_objectsDiscoveredHasBeenSet; }
  inline void SetObjectsDiscovered(long long value) {
    m_objectsDiscoveredHasBeenSet = true;
    m_objectsDiscovered = value;
  }
  inline S3Statistics& WithObjectsDiscovered(long long value) {
    SetObjectsDiscovered(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of Amazon S3 objects successfully ingested.</p>
   */
  inline long long GetObjectsIngested() const { return m_objectsIngested; }
  inline bool ObjectsIngestedHasBeenSet() const { return m_objectsIngestedHasBeenSet; }
  inline void SetObjectsIngested(long long value) {
    m_objectsIngestedHasBeenSet = true;
    m_objectsIngested = value;
  }
  inline S3Statistics& WithObjectsIngested(long long value) {
    SetObjectsIngested(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of Amazon S3 objects that failed to be ingested.</p>
   */
  inline long long GetObjectsFailed() const { return m_objectsFailed; }
  inline bool ObjectsFailedHasBeenSet() const { return m_objectsFailedHasBeenSet; }
  inline void SetObjectsFailed(long long value) {
    m_objectsFailedHasBeenSet = true;
    m_objectsFailed = value;
  }
  inline S3Statistics& WithObjectsFailed(long long value) {
    SetObjectsFailed(value);
    return *this;
  }
  ///@}
 private:
  long long m_objectsDiscovered{0};

  long long m_objectsIngested{0};

  long long m_objectsFailed{0};
  bool m_objectsDiscoveredHasBeenSet = false;
  bool m_objectsIngestedHasBeenSet = false;
  bool m_objectsFailedHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
