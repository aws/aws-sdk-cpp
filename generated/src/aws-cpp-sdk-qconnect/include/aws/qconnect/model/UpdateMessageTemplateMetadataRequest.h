/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/GroupingConfiguration.h>
#include <utility>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class UpdateMessageTemplateMetadataRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API UpdateMessageTemplateMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMessageTemplateMetadata"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The description of the message template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateMessageTemplateMetadataRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateMessageTemplateMetadataRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateMessageTemplateMetadataRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const GroupingConfiguration& GetGroupingConfiguration() const{ return m_groupingConfiguration; }
    inline bool GroupingConfigurationHasBeenSet() const { return m_groupingConfigurationHasBeenSet; }
    inline void SetGroupingConfiguration(const GroupingConfiguration& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = value; }
    inline void SetGroupingConfiguration(GroupingConfiguration&& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = std::move(value); }
    inline UpdateMessageTemplateMetadataRequest& WithGroupingConfiguration(const GroupingConfiguration& value) { SetGroupingConfiguration(value); return *this;}
    inline UpdateMessageTemplateMetadataRequest& WithGroupingConfiguration(GroupingConfiguration&& value) { SetGroupingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline UpdateMessageTemplateMetadataRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline UpdateMessageTemplateMetadataRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline UpdateMessageTemplateMetadataRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the message template. Can be either the ID or the ARN. It
     * cannot contain any qualifier.</p>
     */
    inline const Aws::String& GetMessageTemplateId() const{ return m_messageTemplateId; }
    inline bool MessageTemplateIdHasBeenSet() const { return m_messageTemplateIdHasBeenSet; }
    inline void SetMessageTemplateId(const Aws::String& value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId = value; }
    inline void SetMessageTemplateId(Aws::String&& value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId = std::move(value); }
    inline void SetMessageTemplateId(const char* value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId.assign(value); }
    inline UpdateMessageTemplateMetadataRequest& WithMessageTemplateId(const Aws::String& value) { SetMessageTemplateId(value); return *this;}
    inline UpdateMessageTemplateMetadataRequest& WithMessageTemplateId(Aws::String&& value) { SetMessageTemplateId(std::move(value)); return *this;}
    inline UpdateMessageTemplateMetadataRequest& WithMessageTemplateId(const char* value) { SetMessageTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the message template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateMessageTemplateMetadataRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateMessageTemplateMetadataRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateMessageTemplateMetadataRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    GroupingConfiguration m_groupingConfiguration;
    bool m_groupingConfigurationHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_messageTemplateId;
    bool m_messageTemplateIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
