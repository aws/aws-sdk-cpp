/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ChannelSubtype.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The summary of the message template version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageTemplateVersionSummary">AWS
   * API Reference</a></p>
   */
  class MessageTemplateVersionSummary
  {
  public:
    AWS_QCONNECT_API MessageTemplateVersionSummary();
    AWS_QCONNECT_API MessageTemplateVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageTemplateVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The channel subtype this message template applies to.</p>
     */
    inline const ChannelSubtype& GetChannelSubtype() const{ return m_channelSubtype; }
    inline bool ChannelSubtypeHasBeenSet() const { return m_channelSubtypeHasBeenSet; }
    inline void SetChannelSubtype(const ChannelSubtype& value) { m_channelSubtypeHasBeenSet = true; m_channelSubtype = value; }
    inline void SetChannelSubtype(ChannelSubtype&& value) { m_channelSubtypeHasBeenSet = true; m_channelSubtype = std::move(value); }
    inline MessageTemplateVersionSummary& WithChannelSubtype(const ChannelSubtype& value) { SetChannelSubtype(value); return *this;}
    inline MessageTemplateVersionSummary& WithChannelSubtype(ChannelSubtype&& value) { SetChannelSubtype(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the version of the message template is activated.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline MessageTemplateVersionSummary& WithIsActive(bool value) { SetIsActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const{ return m_knowledgeBaseArn; }
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
    inline void SetKnowledgeBaseArn(const Aws::String& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = value; }
    inline void SetKnowledgeBaseArn(Aws::String&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::move(value); }
    inline void SetKnowledgeBaseArn(const char* value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn.assign(value); }
    inline MessageTemplateVersionSummary& WithKnowledgeBaseArn(const Aws::String& value) { SetKnowledgeBaseArn(value); return *this;}
    inline MessageTemplateVersionSummary& WithKnowledgeBaseArn(Aws::String&& value) { SetKnowledgeBaseArn(std::move(value)); return *this;}
    inline MessageTemplateVersionSummary& WithKnowledgeBaseArn(const char* value) { SetKnowledgeBaseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline MessageTemplateVersionSummary& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline MessageTemplateVersionSummary& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline MessageTemplateVersionSummary& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline const Aws::String& GetMessageTemplateArn() const{ return m_messageTemplateArn; }
    inline bool MessageTemplateArnHasBeenSet() const { return m_messageTemplateArnHasBeenSet; }
    inline void SetMessageTemplateArn(const Aws::String& value) { m_messageTemplateArnHasBeenSet = true; m_messageTemplateArn = value; }
    inline void SetMessageTemplateArn(Aws::String&& value) { m_messageTemplateArnHasBeenSet = true; m_messageTemplateArn = std::move(value); }
    inline void SetMessageTemplateArn(const char* value) { m_messageTemplateArnHasBeenSet = true; m_messageTemplateArn.assign(value); }
    inline MessageTemplateVersionSummary& WithMessageTemplateArn(const Aws::String& value) { SetMessageTemplateArn(value); return *this;}
    inline MessageTemplateVersionSummary& WithMessageTemplateArn(Aws::String&& value) { SetMessageTemplateArn(std::move(value)); return *this;}
    inline MessageTemplateVersionSummary& WithMessageTemplateArn(const char* value) { SetMessageTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the message template.</p>
     */
    inline const Aws::String& GetMessageTemplateId() const{ return m_messageTemplateId; }
    inline bool MessageTemplateIdHasBeenSet() const { return m_messageTemplateIdHasBeenSet; }
    inline void SetMessageTemplateId(const Aws::String& value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId = value; }
    inline void SetMessageTemplateId(Aws::String&& value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId = std::move(value); }
    inline void SetMessageTemplateId(const char* value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId.assign(value); }
    inline MessageTemplateVersionSummary& WithMessageTemplateId(const Aws::String& value) { SetMessageTemplateId(value); return *this;}
    inline MessageTemplateVersionSummary& WithMessageTemplateId(Aws::String&& value) { SetMessageTemplateId(std::move(value)); return *this;}
    inline MessageTemplateVersionSummary& WithMessageTemplateId(const char* value) { SetMessageTemplateId(value); return *this;}
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
    inline MessageTemplateVersionSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MessageTemplateVersionSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MessageTemplateVersionSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the message template version.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline MessageTemplateVersionSummary& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}
  private:

    ChannelSubtype m_channelSubtype;
    bool m_channelSubtypeHasBeenSet = false;

    bool m_isActive;
    bool m_isActiveHasBeenSet = false;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_messageTemplateArn;
    bool m_messageTemplateArnHasBeenSet = false;

    Aws::String m_messageTemplateId;
    bool m_messageTemplateIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
