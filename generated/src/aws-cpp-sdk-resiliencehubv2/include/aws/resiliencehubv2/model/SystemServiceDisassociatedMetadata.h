/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Metadata for a system service disassociated event.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/SystemServiceDisassociatedMetadata">AWS
 * API Reference</a></p>
 */
class SystemServiceDisassociatedMetadata {
 public:
  AWS_RESILIENCEHUBV2_API SystemServiceDisassociatedMetadata() = default;
  AWS_RESILIENCEHUBV2_API SystemServiceDisassociatedMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API SystemServiceDisassociatedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the disassociated service.</p>
   */
  inline const Aws::String& GetServiceName() const { return m_serviceName; }
  inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
  template <typename ServiceNameT = Aws::String>
  void SetServiceName(ServiceNameT&& value) {
    m_serviceNameHasBeenSet = true;
    m_serviceName = std::forward<ServiceNameT>(value);
  }
  template <typename ServiceNameT = Aws::String>
  SystemServiceDisassociatedMetadata& WithServiceName(ServiceNameT&& value) {
    SetServiceName(std::forward<ServiceNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  SystemServiceDisassociatedMetadata& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user journeys affected by the disassociation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetUserJourneysAffected() const { return m_userJourneysAffected; }
  inline bool UserJourneysAffectedHasBeenSet() const { return m_userJourneysAffectedHasBeenSet; }
  template <typename UserJourneysAffectedT = Aws::Vector<Aws::String>>
  void SetUserJourneysAffected(UserJourneysAffectedT&& value) {
    m_userJourneysAffectedHasBeenSet = true;
    m_userJourneysAffected = std::forward<UserJourneysAffectedT>(value);
  }
  template <typename UserJourneysAffectedT = Aws::Vector<Aws::String>>
  SystemServiceDisassociatedMetadata& WithUserJourneysAffected(UserJourneysAffectedT&& value) {
    SetUserJourneysAffected(std::forward<UserJourneysAffectedT>(value));
    return *this;
  }
  template <typename UserJourneysAffectedT = Aws::String>
  SystemServiceDisassociatedMetadata& AddUserJourneysAffected(UserJourneysAffectedT&& value) {
    m_userJourneysAffectedHasBeenSet = true;
    m_userJourneysAffected.emplace_back(std::forward<UserJourneysAffectedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A comment about the disassociation.</p>
   */
  inline const Aws::String& GetComment() const { return m_comment; }
  inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
  template <typename CommentT = Aws::String>
  void SetComment(CommentT&& value) {
    m_commentHasBeenSet = true;
    m_comment = std::forward<CommentT>(value);
  }
  template <typename CommentT = Aws::String>
  SystemServiceDisassociatedMetadata& WithComment(CommentT&& value) {
    SetComment(std::forward<CommentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceName;

  Aws::String m_serviceArn;

  Aws::Vector<Aws::String> m_userJourneysAffected;

  Aws::String m_comment;
  bool m_serviceNameHasBeenSet = false;
  bool m_serviceArnHasBeenSet = false;
  bool m_userJourneysAffectedHasBeenSet = false;
  bool m_commentHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
