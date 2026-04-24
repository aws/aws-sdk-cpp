/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/SrtCallerSourceRequest.h>
#include <aws/medialive/model/SrtListenerSettingsRequest.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * Configures the settings for SRT inputs. Provide either srtCallerSources (for
 * SRT_CALLER type) OR srtListenerSettings (for SRT_LISTENER type), not
 * both.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SrtSettingsRequest">AWS
 * API Reference</a></p>
 */
class SrtSettingsRequest {
 public:
  AWS_MEDIALIVE_API SrtSettingsRequest() = default;
  AWS_MEDIALIVE_API SrtSettingsRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API SrtSettingsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::Vector<SrtCallerSourceRequest>& GetSrtCallerSources() const { return m_srtCallerSources; }
  inline bool SrtCallerSourcesHasBeenSet() const { return m_srtCallerSourcesHasBeenSet; }
  template <typename SrtCallerSourcesT = Aws::Vector<SrtCallerSourceRequest>>
  void SetSrtCallerSources(SrtCallerSourcesT&& value) {
    m_srtCallerSourcesHasBeenSet = true;
    m_srtCallerSources = std::forward<SrtCallerSourcesT>(value);
  }
  template <typename SrtCallerSourcesT = Aws::Vector<SrtCallerSourceRequest>>
  SrtSettingsRequest& WithSrtCallerSources(SrtCallerSourcesT&& value) {
    SetSrtCallerSources(std::forward<SrtCallerSourcesT>(value));
    return *this;
  }
  template <typename SrtCallerSourcesT = SrtCallerSourceRequest>
  SrtSettingsRequest& AddSrtCallerSources(SrtCallerSourcesT&& value) {
    m_srtCallerSourcesHasBeenSet = true;
    m_srtCallerSources.emplace_back(std::forward<SrtCallerSourcesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SrtListenerSettingsRequest& GetSrtListenerSettings() const { return m_srtListenerSettings; }
  inline bool SrtListenerSettingsHasBeenSet() const { return m_srtListenerSettingsHasBeenSet; }
  template <typename SrtListenerSettingsT = SrtListenerSettingsRequest>
  void SetSrtListenerSettings(SrtListenerSettingsT&& value) {
    m_srtListenerSettingsHasBeenSet = true;
    m_srtListenerSettings = std::forward<SrtListenerSettingsT>(value);
  }
  template <typename SrtListenerSettingsT = SrtListenerSettingsRequest>
  SrtSettingsRequest& WithSrtListenerSettings(SrtListenerSettingsT&& value) {
    SetSrtListenerSettings(std::forward<SrtListenerSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SrtCallerSourceRequest> m_srtCallerSources;

  SrtListenerSettingsRequest m_srtListenerSettings;
  bool m_srtCallerSourcesHasBeenSet = false;
  bool m_srtListenerSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
