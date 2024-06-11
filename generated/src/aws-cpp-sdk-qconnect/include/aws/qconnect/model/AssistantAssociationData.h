﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AssistantAssociationOutputData.h>
#include <aws/qconnect/model/AssociationType.h>
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
    AWS_QCONNECT_API AssistantAssociationData();
    AWS_QCONNECT_API AssistantAssociationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AssistantAssociationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q in Connect assistant.</p>
     */
    inline const Aws::String& GetAssistantArn() const{ return m_assistantArn; }
    inline bool AssistantArnHasBeenSet() const { return m_assistantArnHasBeenSet; }
    inline void SetAssistantArn(const Aws::String& value) { m_assistantArnHasBeenSet = true; m_assistantArn = value; }
    inline void SetAssistantArn(Aws::String&& value) { m_assistantArnHasBeenSet = true; m_assistantArn = std::move(value); }
    inline void SetAssistantArn(const char* value) { m_assistantArnHasBeenSet = true; m_assistantArn.assign(value); }
    inline AssistantAssociationData& WithAssistantArn(const Aws::String& value) { SetAssistantArn(value); return *this;}
    inline AssistantAssociationData& WithAssistantArn(Aws::String&& value) { SetAssistantArn(std::move(value)); return *this;}
    inline AssistantAssociationData& WithAssistantArn(const char* value) { SetAssistantArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the assistant association.</p>
     */
    inline const Aws::String& GetAssistantAssociationArn() const{ return m_assistantAssociationArn; }
    inline bool AssistantAssociationArnHasBeenSet() const { return m_assistantAssociationArnHasBeenSet; }
    inline void SetAssistantAssociationArn(const Aws::String& value) { m_assistantAssociationArnHasBeenSet = true; m_assistantAssociationArn = value; }
    inline void SetAssistantAssociationArn(Aws::String&& value) { m_assistantAssociationArnHasBeenSet = true; m_assistantAssociationArn = std::move(value); }
    inline void SetAssistantAssociationArn(const char* value) { m_assistantAssociationArnHasBeenSet = true; m_assistantAssociationArn.assign(value); }
    inline AssistantAssociationData& WithAssistantAssociationArn(const Aws::String& value) { SetAssistantAssociationArn(value); return *this;}
    inline AssistantAssociationData& WithAssistantAssociationArn(Aws::String&& value) { SetAssistantAssociationArn(std::move(value)); return *this;}
    inline AssistantAssociationData& WithAssistantAssociationArn(const char* value) { SetAssistantAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the assistant association.</p>
     */
    inline const Aws::String& GetAssistantAssociationId() const{ return m_assistantAssociationId; }
    inline bool AssistantAssociationIdHasBeenSet() const { return m_assistantAssociationIdHasBeenSet; }
    inline void SetAssistantAssociationId(const Aws::String& value) { m_assistantAssociationIdHasBeenSet = true; m_assistantAssociationId = value; }
    inline void SetAssistantAssociationId(Aws::String&& value) { m_assistantAssociationIdHasBeenSet = true; m_assistantAssociationId = std::move(value); }
    inline void SetAssistantAssociationId(const char* value) { m_assistantAssociationIdHasBeenSet = true; m_assistantAssociationId.assign(value); }
    inline AssistantAssociationData& WithAssistantAssociationId(const Aws::String& value) { SetAssistantAssociationId(value); return *this;}
    inline AssistantAssociationData& WithAssistantAssociationId(Aws::String&& value) { SetAssistantAssociationId(std::move(value)); return *this;}
    inline AssistantAssociationData& WithAssistantAssociationId(const char* value) { SetAssistantAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }
    inline AssistantAssociationData& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline AssistantAssociationData& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline AssistantAssociationData& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A union type that currently has a single argument, the knowledge base ID.</p>
     */
    inline const AssistantAssociationOutputData& GetAssociationData() const{ return m_associationData; }
    inline bool AssociationDataHasBeenSet() const { return m_associationDataHasBeenSet; }
    inline void SetAssociationData(const AssistantAssociationOutputData& value) { m_associationDataHasBeenSet = true; m_associationData = value; }
    inline void SetAssociationData(AssistantAssociationOutputData&& value) { m_associationDataHasBeenSet = true; m_associationData = std::move(value); }
    inline AssistantAssociationData& WithAssociationData(const AssistantAssociationOutputData& value) { SetAssociationData(value); return *this;}
    inline AssistantAssociationData& WithAssociationData(AssistantAssociationOutputData&& value) { SetAssociationData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of association.</p>
     */
    inline const AssociationType& GetAssociationType() const{ return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    inline void SetAssociationType(const AssociationType& value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline void SetAssociationType(AssociationType&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::move(value); }
    inline AssistantAssociationData& WithAssociationType(const AssociationType& value) { SetAssociationType(value); return *this;}
    inline AssistantAssociationData& WithAssociationType(AssociationType&& value) { SetAssociationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline AssistantAssociationData& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline AssistantAssociationData& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline AssistantAssociationData& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline AssistantAssociationData& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AssistantAssociationData& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AssistantAssociationData& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline AssistantAssociationData& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AssistantAssociationData& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AssistantAssociationData& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_assistantArn;
    bool m_assistantArnHasBeenSet = false;

    Aws::String m_assistantAssociationArn;
    bool m_assistantAssociationArnHasBeenSet = false;

    Aws::String m_assistantAssociationId;
    bool m_assistantAssociationIdHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    AssistantAssociationOutputData m_associationData;
    bool m_associationDataHasBeenSet = false;

    AssociationType m_associationType;
    bool m_associationTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
