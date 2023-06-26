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
    AWS_QUICKSIGHT_API TopicNamedEntity();
    AWS_QUICKSIGHT_API TopicNamedEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicNamedEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the named entity.</p>
     */
    inline const Aws::String& GetEntityName() const{ return m_entityName; }

    /**
     * <p>The name of the named entity.</p>
     */
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }

    /**
     * <p>The name of the named entity.</p>
     */
    inline void SetEntityName(const Aws::String& value) { m_entityNameHasBeenSet = true; m_entityName = value; }

    /**
     * <p>The name of the named entity.</p>
     */
    inline void SetEntityName(Aws::String&& value) { m_entityNameHasBeenSet = true; m_entityName = std::move(value); }

    /**
     * <p>The name of the named entity.</p>
     */
    inline void SetEntityName(const char* value) { m_entityNameHasBeenSet = true; m_entityName.assign(value); }

    /**
     * <p>The name of the named entity.</p>
     */
    inline TopicNamedEntity& WithEntityName(const Aws::String& value) { SetEntityName(value); return *this;}

    /**
     * <p>The name of the named entity.</p>
     */
    inline TopicNamedEntity& WithEntityName(Aws::String&& value) { SetEntityName(std::move(value)); return *this;}

    /**
     * <p>The name of the named entity.</p>
     */
    inline TopicNamedEntity& WithEntityName(const char* value) { SetEntityName(value); return *this;}


    /**
     * <p>The description of the named entity.</p>
     */
    inline const Aws::String& GetEntityDescription() const{ return m_entityDescription; }

    /**
     * <p>The description of the named entity.</p>
     */
    inline bool EntityDescriptionHasBeenSet() const { return m_entityDescriptionHasBeenSet; }

    /**
     * <p>The description of the named entity.</p>
     */
    inline void SetEntityDescription(const Aws::String& value) { m_entityDescriptionHasBeenSet = true; m_entityDescription = value; }

    /**
     * <p>The description of the named entity.</p>
     */
    inline void SetEntityDescription(Aws::String&& value) { m_entityDescriptionHasBeenSet = true; m_entityDescription = std::move(value); }

    /**
     * <p>The description of the named entity.</p>
     */
    inline void SetEntityDescription(const char* value) { m_entityDescriptionHasBeenSet = true; m_entityDescription.assign(value); }

    /**
     * <p>The description of the named entity.</p>
     */
    inline TopicNamedEntity& WithEntityDescription(const Aws::String& value) { SetEntityDescription(value); return *this;}

    /**
     * <p>The description of the named entity.</p>
     */
    inline TopicNamedEntity& WithEntityDescription(Aws::String&& value) { SetEntityDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the named entity.</p>
     */
    inline TopicNamedEntity& WithEntityDescription(const char* value) { SetEntityDescription(value); return *this;}


    /**
     * <p>The other names or aliases for the named entity.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntitySynonyms() const{ return m_entitySynonyms; }

    /**
     * <p>The other names or aliases for the named entity.</p>
     */
    inline bool EntitySynonymsHasBeenSet() const { return m_entitySynonymsHasBeenSet; }

    /**
     * <p>The other names or aliases for the named entity.</p>
     */
    inline void SetEntitySynonyms(const Aws::Vector<Aws::String>& value) { m_entitySynonymsHasBeenSet = true; m_entitySynonyms = value; }

    /**
     * <p>The other names or aliases for the named entity.</p>
     */
    inline void SetEntitySynonyms(Aws::Vector<Aws::String>&& value) { m_entitySynonymsHasBeenSet = true; m_entitySynonyms = std::move(value); }

    /**
     * <p>The other names or aliases for the named entity.</p>
     */
    inline TopicNamedEntity& WithEntitySynonyms(const Aws::Vector<Aws::String>& value) { SetEntitySynonyms(value); return *this;}

    /**
     * <p>The other names or aliases for the named entity.</p>
     */
    inline TopicNamedEntity& WithEntitySynonyms(Aws::Vector<Aws::String>&& value) { SetEntitySynonyms(std::move(value)); return *this;}

    /**
     * <p>The other names or aliases for the named entity.</p>
     */
    inline TopicNamedEntity& AddEntitySynonyms(const Aws::String& value) { m_entitySynonymsHasBeenSet = true; m_entitySynonyms.push_back(value); return *this; }

    /**
     * <p>The other names or aliases for the named entity.</p>
     */
    inline TopicNamedEntity& AddEntitySynonyms(Aws::String&& value) { m_entitySynonymsHasBeenSet = true; m_entitySynonyms.push_back(std::move(value)); return *this; }

    /**
     * <p>The other names or aliases for the named entity.</p>
     */
    inline TopicNamedEntity& AddEntitySynonyms(const char* value) { m_entitySynonymsHasBeenSet = true; m_entitySynonyms.push_back(value); return *this; }


    /**
     * <p>The type of named entity that a topic represents.</p>
     */
    inline const SemanticEntityType& GetSemanticEntityType() const{ return m_semanticEntityType; }

    /**
     * <p>The type of named entity that a topic represents.</p>
     */
    inline bool SemanticEntityTypeHasBeenSet() const { return m_semanticEntityTypeHasBeenSet; }

    /**
     * <p>The type of named entity that a topic represents.</p>
     */
    inline void SetSemanticEntityType(const SemanticEntityType& value) { m_semanticEntityTypeHasBeenSet = true; m_semanticEntityType = value; }

    /**
     * <p>The type of named entity that a topic represents.</p>
     */
    inline void SetSemanticEntityType(SemanticEntityType&& value) { m_semanticEntityTypeHasBeenSet = true; m_semanticEntityType = std::move(value); }

    /**
     * <p>The type of named entity that a topic represents.</p>
     */
    inline TopicNamedEntity& WithSemanticEntityType(const SemanticEntityType& value) { SetSemanticEntityType(value); return *this;}

    /**
     * <p>The type of named entity that a topic represents.</p>
     */
    inline TopicNamedEntity& WithSemanticEntityType(SemanticEntityType&& value) { SetSemanticEntityType(std::move(value)); return *this;}


    /**
     * <p>The definition of a named entity.</p>
     */
    inline const Aws::Vector<NamedEntityDefinition>& GetDefinition() const{ return m_definition; }

    /**
     * <p>The definition of a named entity.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The definition of a named entity.</p>
     */
    inline void SetDefinition(const Aws::Vector<NamedEntityDefinition>& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The definition of a named entity.</p>
     */
    inline void SetDefinition(Aws::Vector<NamedEntityDefinition>&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The definition of a named entity.</p>
     */
    inline TopicNamedEntity& WithDefinition(const Aws::Vector<NamedEntityDefinition>& value) { SetDefinition(value); return *this;}

    /**
     * <p>The definition of a named entity.</p>
     */
    inline TopicNamedEntity& WithDefinition(Aws::Vector<NamedEntityDefinition>&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>The definition of a named entity.</p>
     */
    inline TopicNamedEntity& AddDefinition(const NamedEntityDefinition& value) { m_definitionHasBeenSet = true; m_definition.push_back(value); return *this; }

    /**
     * <p>The definition of a named entity.</p>
     */
    inline TopicNamedEntity& AddDefinition(NamedEntityDefinition&& value) { m_definitionHasBeenSet = true; m_definition.push_back(std::move(value)); return *this; }

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
