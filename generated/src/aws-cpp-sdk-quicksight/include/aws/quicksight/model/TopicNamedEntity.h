/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SemanticEntityType.h>
#include <aws/quicksight/model/NamedEntityDefinition.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A structure that represents a named entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicNamedEntity">AWS
   * API Reference</a></p>
   */
  class TopicNamedEntity
  {
  public:
    AWS_QUICKSIGHT_API TopicNamedEntity() = default;
    AWS_QUICKSIGHT_API TopicNamedEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicNamedEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the named entity.</p>
     */
    inline const Aws::String& GetEntityName() const { return m_entityName; }
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }
    template<typename EntityNameT = Aws::String>
    void SetEntityName(EntityNameT&& value) { m_entityNameHasBeenSet = true; m_entityName = std::forward<EntityNameT>(value); }
    template<typename EntityNameT = Aws::String>
    TopicNamedEntity& WithEntityName(EntityNameT&& value) { SetEntityName(std::forward<EntityNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the named entity.</p>
     */
    inline const Aws::String& GetEntityDescription() const { return m_entityDescription; }
    inline bool EntityDescriptionHasBeenSet() const { return m_entityDescriptionHasBeenSet; }
    template<typename EntityDescriptionT = Aws::String>
    void SetEntityDescription(EntityDescriptionT&& value) { m_entityDescriptionHasBeenSet = true; m_entityDescription = std::forward<EntityDescriptionT>(value); }
    template<typename EntityDescriptionT = Aws::String>
    TopicNamedEntity& WithEntityDescription(EntityDescriptionT&& value) { SetEntityDescription(std::forward<EntityDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The other names or aliases for the named entity.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntitySynonyms() const { return m_entitySynonyms; }
    inline bool EntitySynonymsHasBeenSet() const { return m_entitySynonymsHasBeenSet; }
    template<typename EntitySynonymsT = Aws::Vector<Aws::String>>
    void SetEntitySynonyms(EntitySynonymsT&& value) { m_entitySynonymsHasBeenSet = true; m_entitySynonyms = std::forward<EntitySynonymsT>(value); }
    template<typename EntitySynonymsT = Aws::Vector<Aws::String>>
    TopicNamedEntity& WithEntitySynonyms(EntitySynonymsT&& value) { SetEntitySynonyms(std::forward<EntitySynonymsT>(value)); return *this;}
    template<typename EntitySynonymsT = Aws::String>
    TopicNamedEntity& AddEntitySynonyms(EntitySynonymsT&& value) { m_entitySynonymsHasBeenSet = true; m_entitySynonyms.emplace_back(std::forward<EntitySynonymsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of named entity that a topic represents.</p>
     */
    inline const SemanticEntityType& GetSemanticEntityType() const { return m_semanticEntityType; }
    inline bool SemanticEntityTypeHasBeenSet() const { return m_semanticEntityTypeHasBeenSet; }
    template<typename SemanticEntityTypeT = SemanticEntityType>
    void SetSemanticEntityType(SemanticEntityTypeT&& value) { m_semanticEntityTypeHasBeenSet = true; m_semanticEntityType = std::forward<SemanticEntityTypeT>(value); }
    template<typename SemanticEntityTypeT = SemanticEntityType>
    TopicNamedEntity& WithSemanticEntityType(SemanticEntityTypeT&& value) { SetSemanticEntityType(std::forward<SemanticEntityTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of a named entity.</p>
     */
    inline const Aws::Vector<NamedEntityDefinition>& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = Aws::Vector<NamedEntityDefinition>>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = Aws::Vector<NamedEntityDefinition>>
    TopicNamedEntity& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    template<typename DefinitionT = NamedEntityDefinition>
    TopicNamedEntity& AddDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition.emplace_back(std::forward<DefinitionT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_entityName;
    bool m_entityNameHasBeenSet = false;

    Aws::String m_entityDescription;
    bool m_entityDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_entitySynonyms;
    bool m_entitySynonymsHasBeenSet = false;

    SemanticEntityType m_semanticEntityType;
    bool m_semanticEntityTypeHasBeenSet = false;

    Aws::Vector<NamedEntityDefinition> m_definition;
    bool m_definitionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
