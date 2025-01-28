/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/partnercentral-selling/model/EngagementContextDetails.h>
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
namespace PartnerCentralSelling
{
namespace Model
{
  class GetEngagementResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API GetEngagementResult();
    AWS_PARTNERCENTRALSELLING_API GetEngagementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API GetEngagementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the engagement retrieved.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetEngagementResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetEngagementResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetEngagementResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of context objects associated with the engagement. Each context
     * provides additional information related to the Engagement, such as customer
     * projects or documents.</p>
     */
    inline const Aws::Vector<EngagementContextDetails>& GetContexts() const{ return m_contexts; }
    inline void SetContexts(const Aws::Vector<EngagementContextDetails>& value) { m_contexts = value; }
    inline void SetContexts(Aws::Vector<EngagementContextDetails>&& value) { m_contexts = std::move(value); }
    inline GetEngagementResult& WithContexts(const Aws::Vector<EngagementContextDetails>& value) { SetContexts(value); return *this;}
    inline GetEngagementResult& WithContexts(Aws::Vector<EngagementContextDetails>&& value) { SetContexts(std::move(value)); return *this;}
    inline GetEngagementResult& AddContexts(const EngagementContextDetails& value) { m_contexts.push_back(value); return *this; }
    inline GetEngagementResult& AddContexts(EngagementContextDetails&& value) { m_contexts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the Engagement was created, presented in ISO 8601
     * format (UTC). For example: "2023-05-01T20:37:46Z". This timestamp helps track
     * the lifecycle of the Engagement.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetEngagementResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetEngagementResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the user who originally created the engagement. This
     * field helps in tracking the origin of the engagement.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetEngagementResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetEngagementResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetEngagementResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A more detailed description of the engagement. This provides additional
     * context or information about the engagement's purpose or scope.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetEngagementResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetEngagementResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetEngagementResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique resource identifier of the engagement retrieved.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetEngagementResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetEngagementResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetEngagementResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current count of members participating in the Engagement. This
     * count includes all active members regardless of their roles or permissions
     * within the Engagement.</p>
     */
    inline int GetMemberCount() const{ return m_memberCount; }
    inline void SetMemberCount(int value) { m_memberCount = value; }
    inline GetEngagementResult& WithMemberCount(int value) { SetMemberCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the engagement. It provides a brief, descriptive name for the
     * engagement that is meaningful and easily recognizable.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline void SetTitle(const Aws::String& value) { m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_title.assign(value); }
    inline GetEngagementResult& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline GetEngagementResult& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline GetEngagementResult& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEngagementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEngagementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEngagementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Vector<EngagementContextDetails> m_contexts;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::String m_id;

    int m_memberCount;

    Aws::String m_title;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
