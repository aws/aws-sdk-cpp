/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/WorldGenerationJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/WorldGenerationJobErrorCode.h>
#include <aws/robomaker/model/WorldCount.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace RoboMaker
{
namespace Model
{
  class CreateWorldGenerationJobResult
  {
  public:
    AWS_ROBOMAKER_API CreateWorldGenerationJobResult() = default;
    AWS_ROBOMAKER_API CreateWorldGenerationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API CreateWorldGenerationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the world generator job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateWorldGenerationJobResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the world generator job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world generator job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world generator job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * generator job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world generator
     * job failed. See <code>failureCode</code> for more information. </p> </dd>
     * <dt>PartialFailed</dt> <dd> <p>Some worlds did not generate.</p> </dd>
     * <dt>Canceled</dt> <dd> <p>The world generator job was cancelled.</p> </dd>
     * <dt>Canceling</dt> <dd> <p>The world generator job is being cancelled.</p> </dd>
     * </dl>
     */
    inline WorldGenerationJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(WorldGenerationJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateWorldGenerationJobResult& WithStatus(WorldGenerationJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the world generator job was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateWorldGenerationJobResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code of the world generator job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline WorldGenerationJobErrorCode GetFailureCode() const { return m_failureCode; }
    inline void SetFailureCode(WorldGenerationJobErrorCode value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline CreateWorldGenerationJobResult& WithFailureCode(WorldGenerationJobErrorCode value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateWorldGenerationJobResult& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline const Aws::String& GetTemplate() const { return m_template; }
    template<typename TemplateT = Aws::String>
    void SetTemplate(TemplateT&& value) { m_templateHasBeenSet = true; m_template = std::forward<TemplateT>(value); }
    template<typename TemplateT = Aws::String>
    CreateWorldGenerationJobResult& WithTemplate(TemplateT&& value) { SetTemplate(std::forward<TemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the world count. </p>
     */
    inline const WorldCount& GetWorldCount() const { return m_worldCount; }
    template<typename WorldCountT = WorldCount>
    void SetWorldCount(WorldCountT&& value) { m_worldCountHasBeenSet = true; m_worldCount = std::forward<WorldCountT>(value); }
    template<typename WorldCountT = WorldCount>
    CreateWorldGenerationJobResult& WithWorldCount(WorldCountT&& value) { SetWorldCount(std::forward<WorldCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateWorldGenerationJobResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateWorldGenerationJobResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetWorldTags() const { return m_worldTags; }
    template<typename WorldTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetWorldTags(WorldTagsT&& value) { m_worldTagsHasBeenSet = true; m_worldTags = std::forward<WorldTagsT>(value); }
    template<typename WorldTagsT = Aws::Map<Aws::String, Aws::String>>
    CreateWorldGenerationJobResult& WithWorldTags(WorldTagsT&& value) { SetWorldTags(std::forward<WorldTagsT>(value)); return *this;}
    template<typename WorldTagsKeyT = Aws::String, typename WorldTagsValueT = Aws::String>
    CreateWorldGenerationJobResult& AddWorldTags(WorldTagsKeyT&& key, WorldTagsValueT&& value) {
      m_worldTagsHasBeenSet = true; m_worldTags.emplace(std::forward<WorldTagsKeyT>(key), std::forward<WorldTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWorldGenerationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    WorldGenerationJobStatus m_status{WorldGenerationJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    WorldGenerationJobErrorCode m_failureCode{WorldGenerationJobErrorCode::NOT_SET};
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_template;
    bool m_templateHasBeenSet = false;

    WorldCount m_worldCount;
    bool m_worldCountHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_worldTags;
    bool m_worldTagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
