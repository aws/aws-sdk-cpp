/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/FindingCategory.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace S3Tables {
namespace Model {

/**
 * <p>A report of a migration: the prefix it is written under and, once it is
 * written, its key, its checksum and, for the compatibility reports, the number of
 * blocking findings in each category.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/ReportOverview">AWS
 * API Reference</a></p>
 */
class ReportOverview {
 public:
  AWS_S3TABLES_API ReportOverview() = default;
  AWS_S3TABLES_API ReportOverview(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API ReportOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key prefix that the report is written under.</p>
   */
  inline const Aws::String& GetPrefix() const { return m_prefix; }
  inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
  template <typename PrefixT = Aws::String>
  void SetPrefix(PrefixT&& value) {
    m_prefixHasBeenSet = true;
    m_prefix = std::forward<PrefixT>(value);
  }
  template <typename PrefixT = Aws::String>
  ReportOverview& WithPrefix(PrefixT&& value) {
    SetPrefix(std::forward<PrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key of the report object in the bucket. For the object compatibility and
   * object migration reports, this is the report's manifest; for the table
   * compatibility report, it is the report itself. This value is returned after the
   * migration writes the report. A migration doesn't always write every report. For
   * example, a migration that fails during planning doesn't write the object
   * migration report.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  ReportOverview& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Base64-encoded CRC64NVME checksum of the object that <code>key</code>
   * names. For a report that has a manifest, the manifest lists the checksum of each
   * report file. This value is returned after the migration writes the report.</p>
   */
  inline const Aws::String& GetChecksumCRC64NVME() const { return m_checksumCRC64NVME; }
  inline bool ChecksumCRC64NVMEHasBeenSet() const { return m_checksumCRC64NVMEHasBeenSet; }
  template <typename ChecksumCRC64NVMET = Aws::String>
  void SetChecksumCRC64NVME(ChecksumCRC64NVMET&& value) {
    m_checksumCRC64NVMEHasBeenSet = true;
    m_checksumCRC64NVME = std::forward<ChecksumCRC64NVMET>(value);
  }
  template <typename ChecksumCRC64NVMET = Aws::String>
  ReportOverview& WithChecksumCRC64NVME(ChecksumCRC64NVMET&& value) {
    SetChecksumCRC64NVME(std::forward<ChecksumCRC64NVMET>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For the compatibility reports, the number of blocking findings in each
   * category. The object compatibility report counts each blocked object once, under
   * its most severe finding. Categories with no blocking findings are left out.</p>
   */
  inline const Aws::Map<FindingCategory, long long>& GetInvalidFindings() const { return m_invalidFindings; }
  inline bool InvalidFindingsHasBeenSet() const { return m_invalidFindingsHasBeenSet; }
  template <typename InvalidFindingsT = Aws::Map<FindingCategory, long long>>
  void SetInvalidFindings(InvalidFindingsT&& value) {
    m_invalidFindingsHasBeenSet = true;
    m_invalidFindings = std::forward<InvalidFindingsT>(value);
  }
  template <typename InvalidFindingsT = Aws::Map<FindingCategory, long long>>
  ReportOverview& WithInvalidFindings(InvalidFindingsT&& value) {
    SetInvalidFindings(std::forward<InvalidFindingsT>(value));
    return *this;
  }
  inline ReportOverview& AddInvalidFindings(FindingCategory key, long long value) {
    m_invalidFindingsHasBeenSet = true;
    m_invalidFindings.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_prefix;

  Aws::String m_key;

  Aws::String m_checksumCRC64NVME;

  Aws::Map<FindingCategory, long long> m_invalidFindings;
  bool m_prefixHasBeenSet = false;
  bool m_keyHasBeenSet = false;
  bool m_checksumCRC64NVMEHasBeenSet = false;
  bool m_invalidFindingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
