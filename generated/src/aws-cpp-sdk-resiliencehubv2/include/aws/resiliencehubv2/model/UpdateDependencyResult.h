/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/DependencyCriticality.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {
class UpdateDependencyResult {
 public:
  AWS_RESILIENCEHUBV2_API UpdateDependencyResult() = default;
  AWS_RESILIENCEHUBV2_API UpdateDependencyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API UpdateDependencyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the updated dependency.</p>
   */
  inline const Aws::String& GetDependencyId() const { return m_dependencyId; }
  template <typename DependencyIdT = Aws::String>
  void SetDependencyId(DependencyIdT&& value) {
    m_dependencyIdHasBeenSet = true;
    m_dependencyId = std::forward<DependencyIdT>(value);
  }
  template <typename DependencyIdT = Aws::String>
  UpdateDependencyResult& WithDependencyId(DependencyIdT&& value) {
    SetDependencyId(std::forward<DependencyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the updated dependency.</p>
   */
  inline const Aws::String& GetDependencyName() const { return m_dependencyName; }
  template <typename DependencyNameT = Aws::String>
  void SetDependencyName(DependencyNameT&& value) {
    m_dependencyNameHasBeenSet = true;
    m_dependencyName = std::forward<DependencyNameT>(value);
  }
  template <typename DependencyNameT = Aws::String>
  UpdateDependencyResult& WithDependencyName(DependencyNameT&& value) {
    SetDependencyName(std::forward<DependencyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location of the dependency.</p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  UpdateDependencyResult& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The criticality level of the dependency.</p>
   */
  inline DependencyCriticality GetCriticality() const { return m_criticality; }
  inline void SetCriticality(DependencyCriticality value) {
    m_criticalityHasBeenSet = true;
    m_criticality = value;
  }
  inline UpdateDependencyResult& WithCriticality(DependencyCriticality value) {
    SetCriticality(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comment about the dependency.</p>
   */
  inline const Aws::String& GetComment() const { return m_comment; }
  template <typename CommentT = Aws::String>
  void SetComment(CommentT&& value) {
    m_commentHasBeenSet = true;
    m_comment = std::forward<CommentT>(value);
  }
  template <typename CommentT = Aws::String>
  UpdateDependencyResult& WithComment(CommentT&& value) {
    SetComment(std::forward<CommentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider of the dependency.</p>
   */
  inline const Aws::String& GetProvider() const { return m_provider; }
  template <typename ProviderT = Aws::String>
  void SetProvider(ProviderT&& value) {
    m_providerHasBeenSet = true;
    m_provider = std::forward<ProviderT>(value);
  }
  template <typename ProviderT = Aws::String>
  UpdateDependencyResult& WithProvider(ProviderT&& value) {
    SetProvider(std::forward<ProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the dependency was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateDependencyResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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
  UpdateDependencyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_dependencyId;

  Aws::String m_dependencyName;

  Aws::String m_location;

  DependencyCriticality m_criticality{DependencyCriticality::NOT_SET};

  Aws::String m_comment;

  Aws::String m_provider;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_dependencyIdHasBeenSet = false;
  bool m_dependencyNameHasBeenSet = false;
  bool m_locationHasBeenSet = false;
  bool m_criticalityHasBeenSet = false;
  bool m_commentHasBeenSet = false;
  bool m_providerHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
