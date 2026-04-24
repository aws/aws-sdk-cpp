/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/EncryptionAlgorithm.h>

#include <utility>

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
 * <p>A checksum structure used to verify data integrity.</p><p><h3>See Also:</h3>
 * <a href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/Checksum">AWS API
 * Reference</a></p>
 */
class Checksum {
 public:
  AWS_MGN_API Checksum() = default;
  AWS_MGN_API Checksum(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Checksum& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The encryption algorithm used to generate the checksum.</p>
   */
  inline EncryptionAlgorithm GetEncryptionAlgorithm() const { return m_encryptionAlgorithm; }
  inline bool EncryptionAlgorithmHasBeenSet() const { return m_encryptionAlgorithmHasBeenSet; }
  inline void SetEncryptionAlgorithm(EncryptionAlgorithm value) {
    m_encryptionAlgorithmHasBeenSet = true;
    m_encryptionAlgorithm = value;
  }
  inline Checksum& WithEncryptionAlgorithm(EncryptionAlgorithm value) {
    SetEncryptionAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hash value of the checksum.</p>
   */
  inline const Aws::String& GetHash() const { return m_hash; }
  inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }
  template <typename HashT = Aws::String>
  void SetHash(HashT&& value) {
    m_hashHasBeenSet = true;
    m_hash = std::forward<HashT>(value);
  }
  template <typename HashT = Aws::String>
  Checksum& WithHash(HashT&& value) {
    SetHash(std::forward<HashT>(value));
    return *this;
  }
  ///@}
 private:
  EncryptionAlgorithm m_encryptionAlgorithm{EncryptionAlgorithm::NOT_SET};

  Aws::String m_hash;
  bool m_encryptionAlgorithmHasBeenSet = false;
  bool m_hashHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
