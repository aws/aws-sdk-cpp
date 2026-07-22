/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/PCS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PCS {
namespace Model {

/**
 * <p>The source location and integrity information for a node lifecycle
 * script.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/ScriptSource">AWS
 * API Reference</a></p>
 */
class ScriptSource {
 public:
  AWS_PCS_API ScriptSource() = default;
  AWS_PCS_API ScriptSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API ScriptSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The location of the script. Specify either an Amazon S3 URI in the format
   * <code>s3://bucket-name/key</code> or an HTTPS URL.</p>
   */
  inline const Aws::String& GetScriptLocation() const { return m_scriptLocation; }
  inline bool ScriptLocationHasBeenSet() const { return m_scriptLocationHasBeenSet; }
  template <typename ScriptLocationT = Aws::String>
  void SetScriptLocation(ScriptLocationT&& value) {
    m_scriptLocationHasBeenSet = true;
    m_scriptLocation = std::forward<ScriptLocationT>(value);
  }
  template <typename ScriptLocationT = Aws::String>
  ScriptSource& WithScriptLocation(ScriptLocationT&& value) {
    SetScriptLocation(std::forward<ScriptLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 version ID of the script. Use this value to pin the script to a
   * specific version in a versioned Amazon S3 bucket. This value is only valid when
   * <code>scriptLocation</code> is an Amazon S3 URI.</p>
   */
  inline const Aws::String& GetS3VersionId() const { return m_s3VersionId; }
  inline bool S3VersionIdHasBeenSet() const { return m_s3VersionIdHasBeenSet; }
  template <typename S3VersionIdT = Aws::String>
  void SetS3VersionId(S3VersionIdT&& value) {
    m_s3VersionIdHasBeenSet = true;
    m_s3VersionId = std::forward<S3VersionIdT>(value);
  }
  template <typename S3VersionIdT = Aws::String>
  ScriptSource& WithS3VersionId(S3VersionIdT&& value) {
    SetS3VersionId(std::forward<S3VersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SHA-256 checksum of the script content, as a 64-character hexadecimal
   * string. This value is optional. When specified, PCS uses this value to verify
   * the integrity of the downloaded script.</p>
   */
  inline const Aws::String& GetChecksum() const { return m_checksum; }
  inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
  template <typename ChecksumT = Aws::String>
  void SetChecksum(ChecksumT&& value) {
    m_checksumHasBeenSet = true;
    m_checksum = std::forward<ChecksumT>(value);
  }
  template <typename ChecksumT = Aws::String>
  ScriptSource& WithChecksum(ChecksumT&& value) {
    SetChecksum(std::forward<ChecksumT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_scriptLocation;

  Aws::String m_s3VersionId;

  Aws::String m_checksum;
  bool m_scriptLocationHasBeenSet = false;
  bool m_s3VersionIdHasBeenSet = false;
  bool m_checksumHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
