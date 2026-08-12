/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LimitsProfile.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class ListLimitsProfilesResult {
 public:
  AWS_QUICKSIGHT_API ListLimitsProfilesResult() = default;
  AWS_QUICKSIGHT_API ListLimitsProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API ListLimitsProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of limits profiles.</p>
   */
  inline const Aws::Vector<LimitsProfile>& GetProfiles() const { return m_profiles; }
  template <typename ProfilesT = Aws::Vector<LimitsProfile>>
  void SetProfiles(ProfilesT&& value) {
    m_profilesHasBeenSet = true;
    m_profiles = std::forward<ProfilesT>(value);
  }
  template <typename ProfilesT = Aws::Vector<LimitsProfile>>
  ListLimitsProfilesResult& WithProfiles(ProfilesT&& value) {
    SetProfiles(std::forward<ProfilesT>(value));
    return *this;
  }
  template <typename ProfilesT = LimitsProfile>
  ListLimitsProfilesResult& AddProfiles(ProfilesT&& value) {
    m_profilesHasBeenSet = true;
    m_profiles.emplace_back(std::forward<ProfilesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results, or null if there are no more
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListLimitsProfilesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListLimitsProfilesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<LimitsProfile> m_profiles;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_profilesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
