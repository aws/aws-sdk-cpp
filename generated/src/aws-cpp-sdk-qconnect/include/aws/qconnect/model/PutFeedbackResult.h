/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ContentFeedbackData.h>
#include <aws/qconnect/model/TargetType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QConnect
{
namespace Model
{
  class PutFeedbackResult
  {
  public:
    AWS_QCONNECT_API PutFeedbackResult();
    AWS_QCONNECT_API PutFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API PutFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q assistant.</p>
     */
    inline const Aws::String& GetAssistantArn() const{ return m_assistantArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q assistant.</p>
     */
    inline void SetAssistantArn(const Aws::String& value) { m_assistantArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q assistant.</p>
     */
    inline void SetAssistantArn(Aws::String&& value) { m_assistantArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q assistant.</p>
     */
    inline void SetAssistantArn(const char* value) { m_assistantArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q assistant.</p>
     */
    inline PutFeedbackResult& WithAssistantArn(const Aws::String& value) { SetAssistantArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q assistant.</p>
     */
    inline PutFeedbackResult& WithAssistantArn(Aws::String&& value) { SetAssistantArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q assistant.</p>
     */
    inline PutFeedbackResult& WithAssistantArn(const char* value) { SetAssistantArn(value); return *this;}


    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline void SetAssistantId(const Aws::String& value) { m_assistantId = value; }

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline void SetAssistantId(Aws::String&& value) { m_assistantId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline void SetAssistantId(const char* value) { m_assistantId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline PutFeedbackResult& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline PutFeedbackResult& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline PutFeedbackResult& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}


    /**
     * <p>Information about the feedback provided.</p>
     */
    inline const ContentFeedbackData& GetContentFeedback() const{ return m_contentFeedback; }

    /**
     * <p>Information about the feedback provided.</p>
     */
    inline void SetContentFeedback(const ContentFeedbackData& value) { m_contentFeedback = value; }

    /**
     * <p>Information about the feedback provided.</p>
     */
    inline void SetContentFeedback(ContentFeedbackData&& value) { m_contentFeedback = std::move(value); }

    /**
     * <p>Information about the feedback provided.</p>
     */
    inline PutFeedbackResult& WithContentFeedback(const ContentFeedbackData& value) { SetContentFeedback(value); return *this;}

    /**
     * <p>Information about the feedback provided.</p>
     */
    inline PutFeedbackResult& WithContentFeedback(ContentFeedbackData&& value) { SetContentFeedback(std::move(value)); return *this;}


    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetId = value; }

    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetId = std::move(value); }

    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline void SetTargetId(const char* value) { m_targetId.assign(value); }

    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline PutFeedbackResult& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline PutFeedbackResult& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the feedback target.</p>
     */
    inline PutFeedbackResult& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p>The type of the feedback target.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The type of the feedback target.</p>
     */
    inline void SetTargetType(const TargetType& value) { m_targetType = value; }

    /**
     * <p>The type of the feedback target.</p>
     */
    inline void SetTargetType(TargetType&& value) { m_targetType = std::move(value); }

    /**
     * <p>The type of the feedback target.</p>
     */
    inline PutFeedbackResult& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The type of the feedback target.</p>
     */
    inline PutFeedbackResult& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutFeedbackResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutFeedbackResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutFeedbackResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_assistantArn;

    Aws::String m_assistantId;

    ContentFeedbackData m_contentFeedback;

    Aws::String m_targetId;

    TargetType m_targetType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
