/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SocialMessaging {
namespace Model {

/**
 * <p>Contains the Meta application metadata associated with a WhatsApp
 * Flow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/MetaFlowApplicationInfo">AWS
 * API Reference</a></p>
 */
class MetaFlowApplicationInfo {
 public:
  AWS_SOCIALMESSAGING_API MetaFlowApplicationInfo() = default;
  AWS_SOCIALMESSAGING_API MetaFlowApplicationInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API MetaFlowApplicationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URL link for the Meta application.</p>
   */
  inline const Aws::String& GetLink() const { return m_link; }
  inline bool LinkHasBeenSet() const { return m_linkHasBeenSet; }
  template <typename LinkT = Aws::String>
  void SetLink(LinkT&& value) {
    m_linkHasBeenSet = true;
    m_link = std::forward<LinkT>(value);
  }
  template <typename LinkT = Aws::String>
  MetaFlowApplicationInfo& WithLink(LinkT&& value) {
    SetLink(std::forward<LinkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Meta application.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MetaFlowApplicationInfo& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Meta application.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  MetaFlowApplicationInfo& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_link;

  Aws::String m_name;

  Aws::String m_id;
  bool m_linkHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_idHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
