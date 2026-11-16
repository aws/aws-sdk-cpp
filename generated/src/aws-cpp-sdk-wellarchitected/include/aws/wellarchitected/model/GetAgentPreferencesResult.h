/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/PreferenceEntry.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {
class GetAgentPreferencesResult {
 public:
  AWS_WELLARCHITECTED_API GetAgentPreferencesResult() = default;
  AWS_WELLARCHITECTED_API GetAgentPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WELLARCHITECTED_API GetAgentPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The caller's complete set of preferences.</p>
   */
  inline const Aws::Vector<PreferenceEntry>& GetPreferences() const { return m_preferences; }
  template <typename PreferencesT = Aws::Vector<PreferenceEntry>>
  void SetPreferences(PreferencesT&& value) {
    m_preferencesHasBeenSet = true;
    m_preferences = std::forward<PreferencesT>(value);
  }
  template <typename PreferencesT = Aws::Vector<PreferenceEntry>>
  GetAgentPreferencesResult& WithPreferences(PreferencesT&& value) {
    SetPreferences(std::forward<PreferencesT>(value));
    return *this;
  }
  template <typename PreferencesT = PreferenceEntry>
  GetAgentPreferencesResult& AddPreferences(PreferencesT&& value) {
    m_preferencesHasBeenSet = true;
    m_preferences.emplace_back(std::forward<PreferencesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetAgentPreferencesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PreferenceEntry> m_preferences;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_preferencesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
