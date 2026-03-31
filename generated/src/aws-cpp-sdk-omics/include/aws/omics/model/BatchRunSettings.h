/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/InlineSetting.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Omics {
namespace Model {

/**
 * <p>A union type representing per-run configurations for the batch. Specify
 * exactly one of the following members.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/BatchRunSettings">AWS
 * API Reference</a></p>
 */
class BatchRunSettings {
 public:
  AWS_OMICS_API BatchRunSettings() = default;
  AWS_OMICS_API BatchRunSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API BatchRunSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of per-run configurations provided inline in the request. Each entry
   * must include a unique <code>runSettingId</code>. Supports up to 100 entries. For
   * batches with more than 100 runs, use <code>s3UriSettings</code>.</p>
   */
  inline const Aws::Vector<InlineSetting>& GetInlineSettings() const { return m_inlineSettings; }
  inline bool InlineSettingsHasBeenSet() const { return m_inlineSettingsHasBeenSet; }
  template <typename InlineSettingsT = Aws::Vector<InlineSetting>>
  void SetInlineSettings(InlineSettingsT&& value) {
    m_inlineSettingsHasBeenSet = true;
    m_inlineSettings = std::forward<InlineSettingsT>(value);
  }
  template <typename InlineSettingsT = Aws::Vector<InlineSetting>>
  BatchRunSettings& WithInlineSettings(InlineSettingsT&& value) {
    SetInlineSettings(std::forward<InlineSettingsT>(value));
    return *this;
  }
  template <typename InlineSettingsT = InlineSetting>
  BatchRunSettings& AddInlineSettings(InlineSettingsT&& value) {
    m_inlineSettingsHasBeenSet = true;
    m_inlineSettings.emplace_back(std::forward<InlineSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An Amazon S3 URI pointing to a JSON file containing per-run configurations.
   * The file must be a JSON array in the same format as <code>inlineSettings</code>.
   * Supports up to 100,000 run configurations. The maximum file size is 6 GB.</p>
   * <p>The IAM service role in <code>roleArn</code> must have read access to this S3
   * object. HealthOmics validates access to the file during the synchronous API call
   * and records the file's ETag. If the file is modified after submission, the batch
   * fails.</p>
   */
  inline const Aws::String& GetS3UriSettings() const { return m_s3UriSettings; }
  inline bool S3UriSettingsHasBeenSet() const { return m_s3UriSettingsHasBeenSet; }
  template <typename S3UriSettingsT = Aws::String>
  void SetS3UriSettings(S3UriSettingsT&& value) {
    m_s3UriSettingsHasBeenSet = true;
    m_s3UriSettings = std::forward<S3UriSettingsT>(value);
  }
  template <typename S3UriSettingsT = Aws::String>
  BatchRunSettings& WithS3UriSettings(S3UriSettingsT&& value) {
    SetS3UriSettings(std::forward<S3UriSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<InlineSetting> m_inlineSettings;

  Aws::String m_s3UriSettings;
  bool m_inlineSettingsHasBeenSet = false;
  bool m_s3UriSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
