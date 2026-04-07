/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/ImportTrigger.h>

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
 * <p>Specifies a rule that controls how data is imported from S3 into the file
 * system.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/ImportDataRule">AWS
 * API Reference</a></p>
 */
class ImportDataRule {
 public:
  AWS_S3FILES_API ImportDataRule() = default;
  AWS_S3FILES_API ImportDataRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API ImportDataRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The S3 key prefix that scopes this import rule. Only objects with keys
   * beginning with this prefix are subject to the rule.</p>
   */
  inline const Aws::String& GetPrefix() const { return m_prefix; }
  inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
  template <typename PrefixT = Aws::String>
  void SetPrefix(PrefixT&& value) {
    m_prefixHasBeenSet = true;
    m_prefix = std::forward<PrefixT>(value);
  }
  template <typename PrefixT = Aws::String>
  ImportDataRule& WithPrefix(PrefixT&& value) {
    SetPrefix(std::forward<PrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The event that triggers data import. Valid values are
   * <code>ON_DIRECTORY_FIRST_ACCESS</code> (import when a directory is first
   * accessed) and <code>ON_FILE_ACCESS</code> (import when a file is accessed).</p>
   */
  inline ImportTrigger GetTrigger() const { return m_trigger; }
  inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }
  inline void SetTrigger(ImportTrigger value) {
    m_triggerHasBeenSet = true;
    m_trigger = value;
  }
  inline ImportDataRule& WithTrigger(ImportTrigger value) {
    SetTrigger(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The upper size limit in bytes for this import rule. Only objects with a size
   * strictly less than this value will have data imported into the file system.</p>
   */
  inline long long GetSizeLessThan() const { return m_sizeLessThan; }
  inline bool SizeLessThanHasBeenSet() const { return m_sizeLessThanHasBeenSet; }
  inline void SetSizeLessThan(long long value) {
    m_sizeLessThanHasBeenSet = true;
    m_sizeLessThan = value;
  }
  inline ImportDataRule& WithSizeLessThan(long long value) {
    SetSizeLessThan(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_prefix;

  ImportTrigger m_trigger{ImportTrigger::NOT_SET};

  long long m_sizeLessThan{0};
  bool m_prefixHasBeenSet = false;
  bool m_triggerHasBeenSet = false;
  bool m_sizeLessThanHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
