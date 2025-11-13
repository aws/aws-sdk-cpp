/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Contains information about an available upgrade for a SageMaker Partner AI
 * App, including the version number and release notes.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AvailableUpgrade">AWS
 * API Reference</a></p>
 */
class AvailableUpgrade {
 public:
  AWS_SAGEMAKER_API AvailableUpgrade() = default;
  AWS_SAGEMAKER_API AvailableUpgrade(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AvailableUpgrade& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The semantic version number of the available upgrade for the SageMaker
   * Partner AI App.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  AvailableUpgrade& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of release notes describing the changes and improvements included in
   * the available upgrade version.</p>
   */
  inline const Aws::Vector<Aws::String>& GetReleaseNotes() const { return m_releaseNotes; }
  inline bool ReleaseNotesHasBeenSet() const { return m_releaseNotesHasBeenSet; }
  template <typename ReleaseNotesT = Aws::Vector<Aws::String>>
  void SetReleaseNotes(ReleaseNotesT&& value) {
    m_releaseNotesHasBeenSet = true;
    m_releaseNotes = std::forward<ReleaseNotesT>(value);
  }
  template <typename ReleaseNotesT = Aws::Vector<Aws::String>>
  AvailableUpgrade& WithReleaseNotes(ReleaseNotesT&& value) {
    SetReleaseNotes(std::forward<ReleaseNotesT>(value));
    return *this;
  }
  template <typename ReleaseNotesT = Aws::String>
  AvailableUpgrade& AddReleaseNotes(ReleaseNotesT&& value) {
    m_releaseNotesHasBeenSet = true;
    m_releaseNotes.emplace_back(std::forward<ReleaseNotesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_version;
  bool m_versionHasBeenSet = false;

  Aws::Vector<Aws::String> m_releaseNotes;
  bool m_releaseNotesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
