/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace Redshift {
namespace Model {

/**
 * <p>Contains configuration and status information for an Amazon Redshift Query
 * Editor (QEV2) application that is registered with IAM Identity
 * Center.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/Qev2IdcApplication">AWS
 * API Reference</a></p>
 */
class Qev2IdcApplication {
 public:
  AWS_REDSHIFT_API Qev2IdcApplication() = default;
  AWS_REDSHIFT_API Qev2IdcApplication(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_REDSHIFT_API Qev2IdcApplication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the IAM Identity Center instance that the
   * Amazon Redshift Query Editor (QEV2) application integrates with.</p>
   */
  inline const Aws::String& GetIdcInstanceArn() const { return m_idcInstanceArn; }
  inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
  template <typename IdcInstanceArnT = Aws::String>
  void SetIdcInstanceArn(IdcInstanceArnT&& value) {
    m_idcInstanceArnHasBeenSet = true;
    m_idcInstanceArn = std::forward<IdcInstanceArnT>(value);
  }
  template <typename IdcInstanceArnT = Aws::String>
  Qev2IdcApplication& WithIdcInstanceArn(IdcInstanceArnT&& value) {
    SetIdcInstanceArn(std::forward<IdcInstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon Redshift Query Editor (QEV2) application in IAM
   * Identity Center.</p>
   */
  inline const Aws::String& GetQev2IdcApplicationName() const { return m_qev2IdcApplicationName; }
  inline bool Qev2IdcApplicationNameHasBeenSet() const { return m_qev2IdcApplicationNameHasBeenSet; }
  template <typename Qev2IdcApplicationNameT = Aws::String>
  void SetQev2IdcApplicationName(Qev2IdcApplicationNameT&& value) {
    m_qev2IdcApplicationNameHasBeenSet = true;
    m_qev2IdcApplicationName = std::forward<Qev2IdcApplicationNameT>(value);
  }
  template <typename Qev2IdcApplicationNameT = Aws::String>
  Qev2IdcApplication& WithQev2IdcApplicationName(Qev2IdcApplicationNameT&& value) {
    SetQev2IdcApplicationName(std::forward<Qev2IdcApplicationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the Amazon Redshift Query Editor (QEV2)
   * application that integrates with IAM Identity Center.</p>
   */
  inline const Aws::String& GetQev2IdcApplicationArn() const { return m_qev2IdcApplicationArn; }
  inline bool Qev2IdcApplicationArnHasBeenSet() const { return m_qev2IdcApplicationArnHasBeenSet; }
  template <typename Qev2IdcApplicationArnT = Aws::String>
  void SetQev2IdcApplicationArn(Qev2IdcApplicationArnT&& value) {
    m_qev2IdcApplicationArnHasBeenSet = true;
    m_qev2IdcApplicationArn = std::forward<Qev2IdcApplicationArnT>(value);
  }
  template <typename Qev2IdcApplicationArnT = Aws::String>
  Qev2IdcApplication& WithQev2IdcApplicationArn(Qev2IdcApplicationArnT&& value) {
    SetQev2IdcApplicationArn(std::forward<Qev2IdcApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the Amazon Redshift Query Editor (QEV2)
   * IAM Identity Center managed application.</p>
   */
  inline const Aws::String& GetIdcManagedApplicationArn() const { return m_idcManagedApplicationArn; }
  inline bool IdcManagedApplicationArnHasBeenSet() const { return m_idcManagedApplicationArnHasBeenSet; }
  template <typename IdcManagedApplicationArnT = Aws::String>
  void SetIdcManagedApplicationArn(IdcManagedApplicationArnT&& value) {
    m_idcManagedApplicationArnHasBeenSet = true;
    m_idcManagedApplicationArn = std::forward<IdcManagedApplicationArnT>(value);
  }
  template <typename IdcManagedApplicationArnT = Aws::String>
  Qev2IdcApplication& WithIdcManagedApplicationArn(IdcManagedApplicationArnT&& value) {
    SetIdcManagedApplicationArn(std::forward<IdcManagedApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The onboarding status for the Amazon Redshift Query Editor (QEV2) IAM
   * Identity Center application.</p>
   */
  inline const Aws::String& GetIdcOnboardStatus() const { return m_idcOnboardStatus; }
  inline bool IdcOnboardStatusHasBeenSet() const { return m_idcOnboardStatusHasBeenSet; }
  template <typename IdcOnboardStatusT = Aws::String>
  void SetIdcOnboardStatus(IdcOnboardStatusT&& value) {
    m_idcOnboardStatusHasBeenSet = true;
    m_idcOnboardStatus = std::forward<IdcOnboardStatusT>(value);
  }
  template <typename IdcOnboardStatusT = Aws::String>
  Qev2IdcApplication& WithIdcOnboardStatus(IdcOnboardStatusT&& value) {
    SetIdcOnboardStatus(std::forward<IdcOnboardStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name for the Amazon Redshift Query Editor (QEV2) IAM Identity
   * Center application. It appears in the console.</p>
   */
  inline const Aws::String& GetIdcDisplayName() const { return m_idcDisplayName; }
  inline bool IdcDisplayNameHasBeenSet() const { return m_idcDisplayNameHasBeenSet; }
  template <typename IdcDisplayNameT = Aws::String>
  void SetIdcDisplayName(IdcDisplayNameT&& value) {
    m_idcDisplayNameHasBeenSet = true;
    m_idcDisplayName = std::forward<IdcDisplayNameT>(value);
  }
  template <typename IdcDisplayNameT = Aws::String>
  Qev2IdcApplication& WithIdcDisplayName(IdcDisplayNameT&& value) {
    SetIdcDisplayName(std::forward<IdcDisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of tags associated with the application. Tags are key-value pairs that
   * you can use to organize and identify your resources.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  Qev2IdcApplication& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  Qev2IdcApplication& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_idcInstanceArn;

  Aws::String m_qev2IdcApplicationName;

  Aws::String m_qev2IdcApplicationArn;

  Aws::String m_idcManagedApplicationArn;

  Aws::String m_idcOnboardStatus;

  Aws::String m_idcDisplayName;

  Aws::Vector<Tag> m_tags;
  bool m_idcInstanceArnHasBeenSet = false;
  bool m_qev2IdcApplicationNameHasBeenSet = false;
  bool m_qev2IdcApplicationArnHasBeenSet = false;
  bool m_idcManagedApplicationArnHasBeenSet = false;
  bool m_idcOnboardStatusHasBeenSet = false;
  bool m_idcDisplayNameHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
