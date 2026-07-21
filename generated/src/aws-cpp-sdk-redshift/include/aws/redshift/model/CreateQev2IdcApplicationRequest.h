/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/Tag.h>

#include <utility>

namespace Aws {
namespace Redshift {
namespace Model {

/**
 */
class CreateQev2IdcApplicationRequest : public RedshiftRequest {
 public:
  AWS_REDSHIFT_API CreateQev2IdcApplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateQev2IdcApplication"; }

  AWS_REDSHIFT_API Aws::String SerializePayload() const override;

 protected:
  AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance used to
   * create the Amazon Redshift Query Editor (QEV2) managed application.</p>
   */
  inline const Aws::String& GetIdcInstanceArn() const { return m_idcInstanceArn; }
  inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
  template <typename IdcInstanceArnT = Aws::String>
  void SetIdcInstanceArn(IdcInstanceArnT&& value) {
    m_idcInstanceArnHasBeenSet = true;
    m_idcInstanceArn = std::forward<IdcInstanceArnT>(value);
  }
  template <typename IdcInstanceArnT = Aws::String>
  CreateQev2IdcApplicationRequest& WithIdcInstanceArn(IdcInstanceArnT&& value) {
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
  CreateQev2IdcApplicationRequest& WithQev2IdcApplicationName(Qev2IdcApplicationNameT&& value) {
    SetQev2IdcApplicationName(std::forward<Qev2IdcApplicationNameT>(value));
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
  CreateQev2IdcApplicationRequest& WithIdcDisplayName(IdcDisplayNameT&& value) {
    SetIdcDisplayName(std::forward<IdcDisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of tags to associate with the application. Tags are key-value pairs
   * that you can use to organize and identify your resources.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateQev2IdcApplicationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateQev2IdcApplicationRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_idcInstanceArn;

  Aws::String m_qev2IdcApplicationName;

  Aws::String m_idcDisplayName;

  Aws::Vector<Tag> m_tags;
  bool m_idcInstanceArnHasBeenSet = false;
  bool m_qev2IdcApplicationNameHasBeenSet = false;
  bool m_idcDisplayNameHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
