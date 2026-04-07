/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3files/S3Files_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace S3Files {
namespace Model {

/**
 * <p>Specifies the POSIX identity with uid, gid, and secondary group IDs for user
 * enforcement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/PosixUser">AWS
 * API Reference</a></p>
 */
class PosixUser {
 public:
  AWS_S3FILES_API PosixUser() = default;
  AWS_S3FILES_API PosixUser(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API PosixUser& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The POSIX user ID.</p>
   */
  inline long long GetUid() const { return m_uid; }
  inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
  inline void SetUid(long long value) {
    m_uidHasBeenSet = true;
    m_uid = value;
  }
  inline PosixUser& WithUid(long long value) {
    SetUid(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The POSIX group ID.</p>
   */
  inline long long GetGid() const { return m_gid; }
  inline bool GidHasBeenSet() const { return m_gidHasBeenSet; }
  inline void SetGid(long long value) {
    m_gidHasBeenSet = true;
    m_gid = value;
  }
  inline PosixUser& WithGid(long long value) {
    SetGid(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of secondary POSIX group IDs.</p>
   */
  inline const Aws::Vector<long long>& GetSecondaryGids() const { return m_secondaryGids; }
  inline bool SecondaryGidsHasBeenSet() const { return m_secondaryGidsHasBeenSet; }
  template <typename SecondaryGidsT = Aws::Vector<long long>>
  void SetSecondaryGids(SecondaryGidsT&& value) {
    m_secondaryGidsHasBeenSet = true;
    m_secondaryGids = std::forward<SecondaryGidsT>(value);
  }
  template <typename SecondaryGidsT = Aws::Vector<long long>>
  PosixUser& WithSecondaryGids(SecondaryGidsT&& value) {
    SetSecondaryGids(std::forward<SecondaryGidsT>(value));
    return *this;
  }
  inline PosixUser& AddSecondaryGids(long long value) {
    m_secondaryGidsHasBeenSet = true;
    m_secondaryGids.push_back(value);
    return *this;
  }
  ///@}
 private:
  long long m_uid{0};

  long long m_gid{0};

  Aws::Vector<long long> m_secondaryGids;
  bool m_uidHasBeenSet = false;
  bool m_gidHasBeenSet = false;
  bool m_secondaryGidsHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
