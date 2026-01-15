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
 * <p>Capacity limits for a collection group. These limits define the minimum and
 * maximum OpenSearch Compute Units (OCUs) for indexing and search operations that
 * can be used by collections in the group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CollectionGroupCapacityLimits">AWS
 * API Reference</a></p>
 */
class CollectionGroupCapacityLimits {
 public:
  AWS_OPENSEARCHSERVERLESS_API CollectionGroupCapacityLimits() = default;
  AWS_OPENSEARCHSERVERLESS_API CollectionGroupCapacityLimits(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API CollectionGroupCapacityLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum indexing capacity for collections in the group.</p>
   */
  inline double GetMaxIndexingCapacityInOCU() const { return m_maxIndexingCapacityInOCU; }
  inline bool MaxIndexingCapacityInOCUHasBeenSet() const { return m_maxIndexingCapacityInOCUHasBeenSet; }
  inline void SetMaxIndexingCapacityInOCU(double value) {
    m_maxIndexingCapacityInOCUHasBeenSet = true;
    m_maxIndexingCapacityInOCU = value;
  }
  inline CollectionGroupCapacityLimits& WithMaxIndexingCapacityInOCU(double value) {
    SetMaxIndexingCapacityInOCU(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum search capacity for collections in the group.</p>
   */
  inline double GetMaxSearchCapacityInOCU() const { return m_maxSearchCapacityInOCU; }
  inline bool MaxSearchCapacityInOCUHasBeenSet() const { return m_maxSearchCapacityInOCUHasBeenSet; }
  inline void SetMaxSearchCapacityInOCU(double value) {
    m_maxSearchCapacityInOCUHasBeenSet = true;
    m_maxSearchCapacityInOCU = value;
  }
  inline CollectionGroupCapacityLimits& WithMaxSearchCapacityInOCU(double value) {
    SetMaxSearchCapacityInOCU(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum indexing capacity for collections in the group.</p>
   */
  inline double GetMinIndexingCapacityInOCU() const { return m_minIndexingCapacityInOCU; }
  inline bool MinIndexingCapacityInOCUHasBeenSet() const { return m_minIndexingCapacityInOCUHasBeenSet; }
  inline void SetMinIndexingCapacityInOCU(double value) {
    m_minIndexingCapacityInOCUHasBeenSet = true;
    m_minIndexingCapacityInOCU = value;
  }
  inline CollectionGroupCapacityLimits& WithMinIndexingCapacityInOCU(double value) {
    SetMinIndexingCapacityInOCU(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum search capacity for collections in the group.</p>
   */
  inline double GetMinSearchCapacityInOCU() const { return m_minSearchCapacityInOCU; }
  inline bool MinSearchCapacityInOCUHasBeenSet() const { return m_minSearchCapacityInOCUHasBeenSet; }
  inline void SetMinSearchCapacityInOCU(double value) {
    m_minSearchCapacityInOCUHasBeenSet = true;
    m_minSearchCapacityInOCU = value;
  }
  inline CollectionGroupCapacityLimits& WithMinSearchCapacityInOCU(double value) {
    SetMinSearchCapacityInOCU(value);
    return *this;
  }
  ///@}
 private:
  double m_maxIndexingCapacityInOCU{0.0};

  double m_maxSearchCapacityInOCU{0.0};

  double m_minIndexingCapacityInOCU{0.0};

  double m_minSearchCapacityInOCU{0.0};
  bool m_maxIndexingCapacityInOCUHasBeenSet = false;
  bool m_maxSearchCapacityInOCUHasBeenSet = false;
  bool m_minIndexingCapacityInOCUHasBeenSet = false;
  bool m_minSearchCapacityInOCUHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
