/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AssociationType.h>
#include <aws/qconnect/model/AssistantAssociationOutputData.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>Information about the assistant association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AssistantAssociationData">AWS
   * API Reference</a></p>
   */
  class AssistantAssociationData
  {
  public:
    AWS_QCONNECT_API AssistantAssociationData() = default;
    AWS_QCONNECT_API AssistantAssociationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AssistantAssociationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the assistant association.</p>
     */
    inline const Aws::String& GetAssistantAssociationId() const { return m_assistantAssociationId; }
    inline bool AssistantAssociationIdHasBeenSet() const { return m_assistantAssociationIdHasBeenSet; }
    template<typename AssistantAssociationIdT = Aws::String>
    void SetAssistantAssociationId(AssistantAssociationIdT&& value) { m_assistantAssociationIdHasBeenSet = true; m_assistantAssociationId = std::forward<AssistantAssociationIdT>(value); }
    template<typename AssistantAssociationIdT = Aws::String>
    AssistantAssociationData& WithAssistantAssociationId(AssistantAssociationIdT&& value) { SetAssistantAssociationId(std::forward<AssistantAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the assistant association.</p>
     */
    inline const Aws::String& GetAssistantAssociationArn() const { return m_assistantAssociationArn; }
    inline bool AssistantAssociationArnHasBeenSet() const { return m_assistantAssociationArnHasBeenSet; }
    template<typename AssistantAssociationArnT = Aws::String>
    void SetAssistantAssociationArn(AssistantAssociationArnT&& value) { m_assistantAssociationArnHasBeenSet = true; m_assistantAssociationArn = std::forward<AssistantAssociationArnT>(value); }
    template<typename AssistantAssociationArnT = Aws::String>
    AssistantAssociationData& WithAssistantAssociationArn(AssistantAssociationArnT&& value) { SetAssistantAssociationArn(std::forward<AssistantAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant.</p>
     */
    inline const Aws::String& GetAssistantId() const { return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    template<typename AssistantIdT = Aws::String>
    void SetAssistantId(AssistantIdT&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::forward<AssistantIdT>(value); }
    template<typename AssistantIdT = Aws::String>
    AssistantAssociationData& WithAssistantId(AssistantIdT&& value) { SetAssistantId(std::forward<AssistantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q in Connect assistant.</p>
     */
    inline const Aws::String& GetAssistantArn() const { return m_assistantArn; }
    inline bool AssistantArnHasBeenSet() const { return m_assistantArnHasBeenSet; }
    template<typename AssistantArnT = Aws::String>
    void SetAssistantArn(AssistantArnT&& value) { m_assistantArnHasBeenSet = true; m_assistantArn = std::forward<AssistantArnT>(value); }
    template<typename AssistantArnT = Aws::String>
    AssistantAssociationData& WithAssistantArn(AssistantArnT&& value) { SetAssistantArn(std::forward<AssistantArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of association.</p>
     */
    inline AssociationType GetAssociationType() const { return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    inline void SetAssociationType(AssociationType value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline AssistantAssociationData& WithAssociationType(AssociationType value) { SetAssociationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A union type that currently has a single argument, the knowledge base ID.</p>
     */
    inline const AssistantAssociationOutputData& GetAssociationData() const { return m_associationData; }
    inline bool AssociationDataHasBeenSet() const { return m_associationDataHasBeenSet; }
    template<typename AssociationDataT = AssistantAssociationOutputData>
    void SetAssociationData(AssociationDataT&& value) { m_associationDataHasBeenSet = true; m_associationData = std::forward<AssociationDataT>(value); }
    template<typename AssociationDataT = AssistantAssociationOutputData>
    AssistantAssociationData& WithAssociationData(AssociationDataT&& value) { SetAssociationData(std::forward<AssociationDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    AssistantAssociationData& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    AssistantAssociationData& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_assistantAssociationId;
    bool m_assistantAssociationIdHasBeenSet = false;

    Aws::String m_assistantAssociationArn;
    bool m_assistantAssociationArnHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_assistantArn;
    bool m_assistantArnHasBeenSet = false;

    AssociationType m_associationType{AssociationType::NOT_SET};
    bool m_associationTypeHasBeenSet = false;

    AssistantAssociationOutputData m_associationData;
    bool m_associationDataHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
