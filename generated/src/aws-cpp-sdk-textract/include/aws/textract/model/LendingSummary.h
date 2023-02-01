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
    AWS_TEXTRACT_API LendingSummary();
    AWS_TEXTRACT_API LendingSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API LendingSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains an array of all DocumentGroup objects.</p>
     */
    inline const Aws::Vector<DocumentGroup>& GetDocumentGroups() const{ return m_documentGroups; }

    /**
     * <p>Contains an array of all DocumentGroup objects.</p>
     */
    inline bool DocumentGroupsHasBeenSet() const { return m_documentGroupsHasBeenSet; }

    /**
     * <p>Contains an array of all DocumentGroup objects.</p>
     */
    inline void SetDocumentGroups(const Aws::Vector<DocumentGroup>& value) { m_documentGroupsHasBeenSet = true; m_documentGroups = value; }

    /**
     * <p>Contains an array of all DocumentGroup objects.</p>
     */
    inline void SetDocumentGroups(Aws::Vector<DocumentGroup>&& value) { m_documentGroupsHasBeenSet = true; m_documentGroups = std::move(value); }

    /**
     * <p>Contains an array of all DocumentGroup objects.</p>
     */
    inline LendingSummary& WithDocumentGroups(const Aws::Vector<DocumentGroup>& value) { SetDocumentGroups(value); return *this;}

    /**
     * <p>Contains an array of all DocumentGroup objects.</p>
     */
    inline LendingSummary& WithDocumentGroups(Aws::Vector<DocumentGroup>&& value) { SetDocumentGroups(std::move(value)); return *this;}

    /**
     * <p>Contains an array of all DocumentGroup objects.</p>
     */
    inline LendingSummary& AddDocumentGroups(const DocumentGroup& value) { m_documentGroupsHasBeenSet = true; m_documentGroups.push_back(value); return *this; }

    /**
     * <p>Contains an array of all DocumentGroup objects.</p>
     */
    inline LendingSummary& AddDocumentGroups(DocumentGroup&& value) { m_documentGroupsHasBeenSet = true; m_documentGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>UndetectedDocumentTypes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUndetectedDocumentTypes() const{ return m_undetectedDocumentTypes; }

    /**
     * <p>UndetectedDocumentTypes.</p>
     */
    inline bool UndetectedDocumentTypesHasBeenSet() const { return m_undetectedDocumentTypesHasBeenSet; }

    /**
     * <p>UndetectedDocumentTypes.</p>
     */
    inline void SetUndetectedDocumentTypes(const Aws::Vector<Aws::String>& value) { m_undetectedDocumentTypesHasBeenSet = true; m_undetectedDocumentTypes = value; }

    /**
     * <p>UndetectedDocumentTypes.</p>
     */
    inline void SetUndetectedDocumentTypes(Aws::Vector<Aws::String>&& value) { m_undetectedDocumentTypesHasBeenSet = true; m_undetectedDocumentTypes = std::move(value); }

    /**
     * <p>UndetectedDocumentTypes.</p>
     */
    inline LendingSummary& WithUndetectedDocumentTypes(const Aws::Vector<Aws::String>& value) { SetUndetectedDocumentTypes(value); return *this;}

    /**
     * <p>UndetectedDocumentTypes.</p>
     */
    inline LendingSummary& WithUndetectedDocumentTypes(Aws::Vector<Aws::String>&& value) { SetUndetectedDocumentTypes(std::move(value)); return *this;}

    /**
     * <p>UndetectedDocumentTypes.</p>
     */
    inline LendingSummary& AddUndetectedDocumentTypes(const Aws::String& value) { m_undetectedDocumentTypesHasBeenSet = true; m_undetectedDocumentTypes.push_back(value); return *this; }

    /**
     * <p>UndetectedDocumentTypes.</p>
     */
    inline LendingSummary& AddUndetectedDocumentTypes(Aws::String&& value) { m_undetectedDocumentTypesHasBeenSet = true; m_undetectedDocumentTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>UndetectedDocumentTypes.</p>
     */
    inline LendingSummary& AddUndetectedDocumentTypes(const char* value) { m_undetectedDocumentTypesHasBeenSet = true; m_undetectedDocumentTypes.push_back(value); return *this; }

  private:

    Aws::Vector<DocumentGroup> m_documentGroups;
    bool m_documentGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_undetectedDocumentTypes;
    bool m_undetectedDocumentTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
