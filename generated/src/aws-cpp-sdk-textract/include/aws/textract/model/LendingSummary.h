/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/DocumentGroup.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Textract
{
namespace Model
{

  /**
   * <p>Contains information regarding DocumentGroups and
   * UndetectedDocumentTypes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/LendingSummary">AWS
   * API Reference</a></p>
   */
  class LendingSummary
  {
  public:
    AWS_TEXTRACT_API LendingSummary() = default;
    AWS_TEXTRACT_API LendingSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API LendingSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains an array of all DocumentGroup objects.</p>
     */
    inline const Aws::Vector<DocumentGroup>& GetDocumentGroups() const { return m_documentGroups; }
    inline bool DocumentGroupsHasBeenSet() const { return m_documentGroupsHasBeenSet; }
    template<typename DocumentGroupsT = Aws::Vector<DocumentGroup>>
    void SetDocumentGroups(DocumentGroupsT&& value) { m_documentGroupsHasBeenSet = true; m_documentGroups = std::forward<DocumentGroupsT>(value); }
    template<typename DocumentGroupsT = Aws::Vector<DocumentGroup>>
    LendingSummary& WithDocumentGroups(DocumentGroupsT&& value) { SetDocumentGroups(std::forward<DocumentGroupsT>(value)); return *this;}
    template<typename DocumentGroupsT = DocumentGroup>
    LendingSummary& AddDocumentGroups(DocumentGroupsT&& value) { m_documentGroupsHasBeenSet = true; m_documentGroups.emplace_back(std::forward<DocumentGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>UndetectedDocumentTypes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUndetectedDocumentTypes() const { return m_undetectedDocumentTypes; }
    inline bool UndetectedDocumentTypesHasBeenSet() const { return m_undetectedDocumentTypesHasBeenSet; }
    template<typename UndetectedDocumentTypesT = Aws::Vector<Aws::String>>
    void SetUndetectedDocumentTypes(UndetectedDocumentTypesT&& value) { m_undetectedDocumentTypesHasBeenSet = true; m_undetectedDocumentTypes = std::forward<UndetectedDocumentTypesT>(value); }
    template<typename UndetectedDocumentTypesT = Aws::Vector<Aws::String>>
    LendingSummary& WithUndetectedDocumentTypes(UndetectedDocumentTypesT&& value) { SetUndetectedDocumentTypes(std::forward<UndetectedDocumentTypesT>(value)); return *this;}
    template<typename UndetectedDocumentTypesT = Aws::String>
    LendingSummary& AddUndetectedDocumentTypes(UndetectedDocumentTypesT&& value) { m_undetectedDocumentTypesHasBeenSet = true; m_undetectedDocumentTypes.emplace_back(std::forward<UndetectedDocumentTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DocumentGroup> m_documentGroups;
    bool m_documentGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_undetectedDocumentTypes;
    bool m_undetectedDocumentTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
