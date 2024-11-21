/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/RunStatus.h>
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
namespace Omics
{
namespace Model
{
  class StartRunResult
  {
  public:
    AWS_OMICS_API StartRunResult();
    AWS_OMICS_API StartRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API StartRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Unique resource identifier for the run.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline StartRunResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline StartRunResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline StartRunResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline StartRunResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline StartRunResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline StartRunResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's status.</p>
     */
    inline const RunStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const RunStatus& value) { m_status = value; }
    inline void SetStatus(RunStatus&& value) { m_status = std::move(value); }
    inline StartRunResult& WithStatus(const RunStatus& value) { SetStatus(value); return *this;}
    inline StartRunResult& WithStatus(RunStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline StartRunResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline StartRunResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline StartRunResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline StartRunResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline StartRunResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline StartRunResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline StartRunResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline StartRunResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline StartRunResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The universally unique identifier for a run.</p>
     */
    inline const Aws::String& GetUuid() const{ return m_uuid; }
    inline void SetUuid(const Aws::String& value) { m_uuid = value; }
    inline void SetUuid(Aws::String&& value) { m_uuid = std::move(value); }
    inline void SetUuid(const char* value) { m_uuid.assign(value); }
    inline StartRunResult& WithUuid(const Aws::String& value) { SetUuid(value); return *this;}
    inline StartRunResult& WithUuid(Aws::String&& value) { SetUuid(std::move(value)); return *this;}
    inline StartRunResult& WithUuid(const char* value) { SetUuid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination for workflow outputs.</p>
     */
    inline const Aws::String& GetRunOutputUri() const{ return m_runOutputUri; }
    inline void SetRunOutputUri(const Aws::String& value) { m_runOutputUri = value; }
    inline void SetRunOutputUri(Aws::String&& value) { m_runOutputUri = std::move(value); }
    inline void SetRunOutputUri(const char* value) { m_runOutputUri.assign(value); }
    inline StartRunResult& WithRunOutputUri(const Aws::String& value) { SetRunOutputUri(value); return *this;}
    inline StartRunResult& WithRunOutputUri(Aws::String&& value) { SetRunOutputUri(std::move(value)); return *this;}
    inline StartRunResult& WithRunOutputUri(const char* value) { SetRunOutputUri(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    RunStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_uuid;

    Aws::String m_runOutputUri;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
