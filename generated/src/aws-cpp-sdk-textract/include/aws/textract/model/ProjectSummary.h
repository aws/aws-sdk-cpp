/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Textract {
namespace Model {

/**
 * <p>A summary of a project, returned in the results of
 * <code>ListProjects</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/ProjectSummary">AWS
 * API Reference</a></p>
 */
class ProjectSummary {
 public:
  AWS_TEXTRACT_API ProjectSummary() = default;
  AWS_TEXTRACT_API ProjectSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API ProjectSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the project.</p>
   */
  inline const Aws::String& GetProjectArn() const { return m_projectArn; }
  inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
  template <typename ProjectArnT = Aws::String>
  void SetProjectArn(ProjectArnT&& value) {
    m_projectArnHasBeenSet = true;
    m_projectArn = std::forward<ProjectArnT>(value);
  }
  template <typename ProjectArnT = Aws::String>
  ProjectSummary& WithProjectArn(ProjectArnT&& value) {
    SetProjectArn(std::forward<ProjectArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the project.</p>
   */
  inline const Aws::String& GetProjectName() const { return m_projectName; }
  inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
  template <typename ProjectNameT = Aws::String>
  void SetProjectName(ProjectNameT&& value) {
    m_projectNameHasBeenSet = true;
    m_projectName = std::forward<ProjectNameT>(value);
  }
  template <typename ProjectNameT = Aws::String>
  ProjectSummary& WithProjectName(ProjectNameT&& value) {
    SetProjectName(std::forward<ProjectNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the project was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  ProjectSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the project was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  ProjectSummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_projectArn;

  Aws::String m_projectName;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};
  bool m_projectArnHasBeenSet = false;
  bool m_projectNameHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
