/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/SetupFormat.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>A setup artifact, which is one file in the requested format.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/SetupArtifact">AWS
 * API Reference</a></p>
 */
class SetupArtifact {
 public:
  AWS_OBSERVABILITYADMIN_API SetupArtifact() = default;
  AWS_OBSERVABILITYADMIN_API SetupArtifact(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API SetupArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The suggested file name, for example <code>main.bicep</code>.</p>
   */
  inline const Aws::String& GetFileName() const { return m_fileName; }
  inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
  template <typename FileNameT = Aws::String>
  void SetFileName(FileNameT&& value) {
    m_fileNameHasBeenSet = true;
    m_fileName = std::forward<FileNameT>(value);
  }
  template <typename FileNameT = Aws::String>
  SetupArtifact& WithFileName(FileNameT&& value) {
    SetFileName(std::forward<FileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of the artifact.</p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  SetupArtifact& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the artifact.</p>
   */
  inline SetupFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(SetupFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline SetupArtifact& WithFormat(SetupFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content type of the artifact, for example <code>text/plain</code>.</p>
   */
  inline const Aws::String& GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  template <typename ContentTypeT = Aws::String>
  void SetContentType(ContentTypeT&& value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = std::forward<ContentTypeT>(value);
  }
  template <typename ContentTypeT = Aws::String>
  SetupArtifact& WithContentType(ContentTypeT&& value) {
    SetContentType(std::forward<ContentTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fileName;

  Aws::String m_content;

  SetupFormat m_format{SetupFormat::NOT_SET};

  Aws::String m_contentType;
  bool m_fileNameHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_formatHasBeenSet = false;
  bool m_contentTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
