/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/model/StorageMetrics.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace neptunedata {
namespace Model {

/**
 * <p>Contains dictionary storage metrics for the Neptune database, including total
 * dictionary size and entry count, and the size and count for blob (large value)
 * entries.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/DictionariesInfo">AWS
 * API Reference</a></p>
 */
class DictionariesInfo {
 public:
  AWS_NEPTUNEDATA_API DictionariesInfo() = default;
  AWS_NEPTUNEDATA_API DictionariesInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEDATA_API DictionariesInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total size and entry count across all dictionary entries.</p>
   */
  inline const StorageMetrics& GetTotal() const { return m_total; }
  inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
  template <typename TotalT = StorageMetrics>
  void SetTotal(TotalT&& value) {
    m_totalHasBeenSet = true;
    m_total = std::forward<TotalT>(value);
  }
  template <typename TotalT = StorageMetrics>
  DictionariesInfo& WithTotal(TotalT&& value) {
    SetTotal(std::forward<TotalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size and entry count for the blob (large value) dictionary entries.</p>
   */
  inline const StorageMetrics& GetBlobs() const { return m_blobs; }
  inline bool BlobsHasBeenSet() const { return m_blobsHasBeenSet; }
  template <typename BlobsT = StorageMetrics>
  void SetBlobs(BlobsT&& value) {
    m_blobsHasBeenSet = true;
    m_blobs = std::forward<BlobsT>(value);
  }
  template <typename BlobsT = StorageMetrics>
  DictionariesInfo& WithBlobs(BlobsT&& value) {
    SetBlobs(std::forward<BlobsT>(value));
    return *this;
  }
  ///@}
 private:
  StorageMetrics m_total;

  StorageMetrics m_blobs;
  bool m_totalHasBeenSet = false;
  bool m_blobsHasBeenSet = false;
};

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
