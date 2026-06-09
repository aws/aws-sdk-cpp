/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2Request.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/DependencyCriticality.h>

#include <utility>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

/**
 */
class UpdateDependencyRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API UpdateDependencyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateDependency"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  UpdateDependencyRequest& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the dependency to update.</p>
   */
  inline const Aws::String& GetDependencyId() const { return m_dependencyId; }
  inline bool DependencyIdHasBeenSet() const { return m_dependencyIdHasBeenSet; }
  template <typename DependencyIdT = Aws::String>
  void SetDependencyId(DependencyIdT&& value) {
    m_dependencyIdHasBeenSet = true;
    m_dependencyId = std::forward<DependencyIdT>(value);
  }
  template <typename DependencyIdT = Aws::String>
  UpdateDependencyRequest& WithDependencyId(DependencyIdT&& value) {
    SetDependencyId(std::forward<DependencyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated criticality level of the dependency.</p>
   */
  inline DependencyCriticality GetCriticality() const { return m_criticality; }
  inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }
  inline void SetCriticality(DependencyCriticality value) {
    m_criticalityHasBeenSet = true;
    m_criticality = value;
  }
  inline UpdateDependencyRequest& WithCriticality(DependencyCriticality value) {
    SetCriticality(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A comment about the dependency.</p>
   */
  inline const Aws::String& GetComment() const { return m_comment; }
  inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
  template <typename CommentT = Aws::String>
  void SetComment(CommentT&& value) {
    m_commentHasBeenSet = true;
    m_comment = std::forward<CommentT>(value);
  }
  template <typename CommentT = Aws::String>
  UpdateDependencyRequest& WithComment(CommentT&& value) {
    SetComment(std::forward<CommentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceArn;

  Aws::String m_dependencyId;

  DependencyCriticality m_criticality{DependencyCriticality::NOT_SET};

  Aws::String m_comment;
  bool m_serviceArnHasBeenSet = false;
  bool m_dependencyIdHasBeenSet = false;
  bool m_criticalityHasBeenSet = false;
  bool m_commentHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
