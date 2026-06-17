/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>A Confluence document (page) integrated as a resource.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ConfluenceDocumentResource">AWS
 * API Reference</a></p>
 */
class ConfluenceDocumentResource {
 public:
  AWS_SECURITYAGENT_API ConfluenceDocumentResource() = default;
  AWS_SECURITYAGENT_API ConfluenceDocumentResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ConfluenceDocumentResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ConfluenceDocumentResource& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Confluence space key containing the document.</p>
   */
  inline const Aws::String& GetSpaceKey() const { return m_spaceKey; }
  inline bool SpaceKeyHasBeenSet() const { return m_spaceKeyHasBeenSet; }
  template <typename SpaceKeyT = Aws::String>
  void SetSpaceKey(SpaceKeyT&& value) {
    m_spaceKeyHasBeenSet = true;
    m_spaceKey = std::forward<SpaceKeyT>(value);
  }
  template <typename SpaceKeyT = Aws::String>
  ConfluenceDocumentResource& WithSpaceKey(SpaceKeyT&& value) {
    SetSpaceKey(std::forward<SpaceKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Confluence page identifier.</p>
   */
  inline const Aws::String& GetPageId() const { return m_pageId; }
  inline bool PageIdHasBeenSet() const { return m_pageIdHasBeenSet; }
  template <typename PageIdT = Aws::String>
  void SetPageId(PageIdT&& value) {
    m_pageIdHasBeenSet = true;
    m_pageId = std::forward<PageIdT>(value);
  }
  template <typename PageIdT = Aws::String>
  ConfluenceDocumentResource& WithPageId(PageIdT&& value) {
    SetPageId(std::forward<PageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display title of the Confluence page.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  ConfluenceDocumentResource& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display title of the Confluence space.</p>
   */
  inline const Aws::String& GetSpaceTitle() const { return m_spaceTitle; }
  inline bool SpaceTitleHasBeenSet() const { return m_spaceTitleHasBeenSet; }
  template <typename SpaceTitleT = Aws::String>
  void SetSpaceTitle(SpaceTitleT&& value) {
    m_spaceTitleHasBeenSet = true;
    m_spaceTitle = std::forward<SpaceTitleT>(value);
  }
  template <typename SpaceTitleT = Aws::String>
  ConfluenceDocumentResource& WithSpaceTitle(SpaceTitleT&& value) {
    SetSpaceTitle(std::forward<SpaceTitleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_spaceKey;

  Aws::String m_pageId;

  Aws::String m_title;

  Aws::String m_spaceTitle;
  bool m_nameHasBeenSet = false;
  bool m_spaceKeyHasBeenSet = false;
  bool m_pageIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_spaceTitleHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
