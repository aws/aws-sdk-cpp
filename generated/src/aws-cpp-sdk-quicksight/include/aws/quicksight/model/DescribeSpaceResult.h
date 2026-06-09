/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SpaceContributor.h>
#include <aws/quicksight/model/SpaceDetails.h>

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
class DescribeSpaceResult {
 public:
  AWS_QUICKSIGHT_API DescribeSpaceResult() = default;
  AWS_QUICKSIGHT_API DescribeSpaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API DescribeSpaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the space.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  DescribeSpaceResult& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the space.</p>
   */
  inline const Aws::String& GetSpaceArn() const { return m_spaceArn; }
  template <typename SpaceArnT = Aws::String>
  void SetSpaceArn(SpaceArnT&& value) {
    m_spaceArnHasBeenSet = true;
    m_spaceArn = std::forward<SpaceArnT>(value);
  }
  template <typename SpaceArnT = Aws::String>
  DescribeSpaceResult& WithSpaceArn(SpaceArnT&& value) {
    SetSpaceArn(std::forward<SpaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the space.</p>
   */
  inline const SpaceDetails& GetSpace() const { return m_space; }
  template <typename SpaceT = SpaceDetails>
  void SetSpace(SpaceT&& value) {
    m_spaceHasBeenSet = true;
    m_space = std::forward<SpaceT>(value);
  }
  template <typename SpaceT = SpaceDetails>
  DescribeSpaceResult& WithSpace(SpaceT&& value) {
    SetSpace(std::forward<SpaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of contributors to the space.</p>
   */
  inline const Aws::Vector<SpaceContributor>& GetContributors() const { return m_contributors; }
  template <typename ContributorsT = Aws::Vector<SpaceContributor>>
  void SetContributors(ContributorsT&& value) {
    m_contributorsHasBeenSet = true;
    m_contributors = std::forward<ContributorsT>(value);
  }
  template <typename ContributorsT = Aws::Vector<SpaceContributor>>
  DescribeSpaceResult& WithContributors(ContributorsT&& value) {
    SetContributors(std::forward<ContributorsT>(value));
    return *this;
  }
  template <typename ContributorsT = SpaceContributor>
  DescribeSpaceResult& AddContributors(ContributorsT&& value) {
    m_contributorsHasBeenSet = true;
    m_contributors.emplace_back(std::forward<ContributorsT>(value));
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
  DescribeSpaceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_spaceId;

  Aws::String m_spaceArn;

  SpaceDetails m_space;

  Aws::Vector<SpaceContributor> m_contributors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_spaceIdHasBeenSet = false;
  bool m_spaceArnHasBeenSet = false;
  bool m_spaceHasBeenSet = false;
  bool m_contributorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
