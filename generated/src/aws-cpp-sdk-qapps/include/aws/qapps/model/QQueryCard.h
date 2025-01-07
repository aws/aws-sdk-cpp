/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qapps/model/CardType.h>
#include <aws/qapps/model/CardOutputSource.h>
#include <aws/qapps/model/AttributeFilter.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>A card in a Amazon Q App that generates a response based on the Amazon Q
   * Business service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/QQueryCard">AWS
   * API Reference</a></p>
   */
  class QQueryCard
  {
  public:
    AWS_QAPPS_API QQueryCard();
    AWS_QAPPS_API QQueryCard(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API QQueryCard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the query card. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline QQueryCard& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline QQueryCard& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline QQueryCard& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title or label of the query card.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline QQueryCard& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline QQueryCard& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline QQueryCard& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any dependencies or requirements for the query card.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDependencies() const{ return m_dependencies; }
    inline bool DependenciesHasBeenSet() const { return m_dependenciesHasBeenSet; }
    inline void SetDependencies(const Aws::Vector<Aws::String>& value) { m_dependenciesHasBeenSet = true; m_dependencies = value; }
    inline void SetDependencies(Aws::Vector<Aws::String>&& value) { m_dependenciesHasBeenSet = true; m_dependencies = std::move(value); }
    inline QQueryCard& WithDependencies(const Aws::Vector<Aws::String>& value) { SetDependencies(value); return *this;}
    inline QQueryCard& WithDependencies(Aws::Vector<Aws::String>&& value) { SetDependencies(std::move(value)); return *this;}
    inline QQueryCard& AddDependencies(const Aws::String& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }
    inline QQueryCard& AddDependencies(Aws::String&& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(std::move(value)); return *this; }
    inline QQueryCard& AddDependencies(const char* value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the card.</p>
     */
    inline const CardType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CardType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CardType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline QQueryCard& WithType(const CardType& value) { SetType(value); return *this;}
    inline QQueryCard& WithType(CardType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt or instructions displayed for the query card.</p>
     */
    inline const Aws::String& GetPrompt() const{ return m_prompt; }
    inline bool PromptHasBeenSet() const { return m_promptHasBeenSet; }
    inline void SetPrompt(const Aws::String& value) { m_promptHasBeenSet = true; m_prompt = value; }
    inline void SetPrompt(Aws::String&& value) { m_promptHasBeenSet = true; m_prompt = std::move(value); }
    inline void SetPrompt(const char* value) { m_promptHasBeenSet = true; m_prompt.assign(value); }
    inline QQueryCard& WithPrompt(const Aws::String& value) { SetPrompt(value); return *this;}
    inline QQueryCard& WithPrompt(Aws::String&& value) { SetPrompt(std::move(value)); return *this;}
    inline QQueryCard& WithPrompt(const char* value) { SetPrompt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source or type of output generated by the query card.</p>
     */
    inline const CardOutputSource& GetOutputSource() const{ return m_outputSource; }
    inline bool OutputSourceHasBeenSet() const { return m_outputSourceHasBeenSet; }
    inline void SetOutputSource(const CardOutputSource& value) { m_outputSourceHasBeenSet = true; m_outputSource = value; }
    inline void SetOutputSource(CardOutputSource&& value) { m_outputSourceHasBeenSet = true; m_outputSource = std::move(value); }
    inline QQueryCard& WithOutputSource(const CardOutputSource& value) { SetOutputSource(value); return *this;}
    inline QQueryCard& WithOutputSource(CardOutputSource&& value) { SetOutputSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Q Business filters applied in this query card when resolving data
     * sources</p>
     */
    inline const AttributeFilter& GetAttributeFilter() const{ return m_attributeFilter; }
    inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }
    inline void SetAttributeFilter(const AttributeFilter& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = value; }
    inline void SetAttributeFilter(AttributeFilter&& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = std::move(value); }
    inline QQueryCard& WithAttributeFilter(const AttributeFilter& value) { SetAttributeFilter(value); return *this;}
    inline QQueryCard& WithAttributeFilter(AttributeFilter&& value) { SetAttributeFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any dependencies for the query card, where the dependencies are references to
     * the collected responses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemoryReferences() const{ return m_memoryReferences; }
    inline bool MemoryReferencesHasBeenSet() const { return m_memoryReferencesHasBeenSet; }
    inline void SetMemoryReferences(const Aws::Vector<Aws::String>& value) { m_memoryReferencesHasBeenSet = true; m_memoryReferences = value; }
    inline void SetMemoryReferences(Aws::Vector<Aws::String>&& value) { m_memoryReferencesHasBeenSet = true; m_memoryReferences = std::move(value); }
    inline QQueryCard& WithMemoryReferences(const Aws::Vector<Aws::String>& value) { SetMemoryReferences(value); return *this;}
    inline QQueryCard& WithMemoryReferences(Aws::Vector<Aws::String>&& value) { SetMemoryReferences(std::move(value)); return *this;}
    inline QQueryCard& AddMemoryReferences(const Aws::String& value) { m_memoryReferencesHasBeenSet = true; m_memoryReferences.push_back(value); return *this; }
    inline QQueryCard& AddMemoryReferences(Aws::String&& value) { m_memoryReferencesHasBeenSet = true; m_memoryReferences.push_back(std::move(value)); return *this; }
    inline QQueryCard& AddMemoryReferences(const char* value) { m_memoryReferencesHasBeenSet = true; m_memoryReferences.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Vector<Aws::String> m_dependencies;
    bool m_dependenciesHasBeenSet = false;

    CardType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_prompt;
    bool m_promptHasBeenSet = false;

    CardOutputSource m_outputSource;
    bool m_outputSourceHasBeenSet = false;

    AttributeFilter m_attributeFilter;
    bool m_attributeFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_memoryReferences;
    bool m_memoryReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
