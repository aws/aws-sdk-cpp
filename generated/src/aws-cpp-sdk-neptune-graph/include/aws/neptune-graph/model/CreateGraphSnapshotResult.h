/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/neptune-graph/model/SnapshotStatus.h>
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
namespace NeptuneGraph
{
namespace Model
{
  class CreateGraphSnapshotResult
  {
  public:
    AWS_NEPTUNEGRAPH_API CreateGraphSnapshotResult();
    AWS_NEPTUNEGRAPH_API CreateGraphSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API CreateGraphSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the snapshot created.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the snapshot created.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the snapshot created.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the snapshot created.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the snapshot created.</p>
     */
    inline CreateGraphSnapshotResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the snapshot created.</p>
     */
    inline CreateGraphSnapshotResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot created.</p>
     */
    inline CreateGraphSnapshotResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the snapshot created.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the snapshot created.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the snapshot created.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the snapshot created.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the snapshot created.</p>
     */
    inline CreateGraphSnapshotResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the snapshot created.</p>
     */
    inline CreateGraphSnapshotResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot created.</p>
     */
    inline CreateGraphSnapshotResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the snapshot created.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the snapshot created.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the snapshot created.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the snapshot created.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the snapshot created.</p>
     */
    inline CreateGraphSnapshotResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the snapshot created.</p>
     */
    inline CreateGraphSnapshotResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the snapshot created.</p>
     */
    inline CreateGraphSnapshotResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Id of the Neptune Analytics graph from which the snapshot is created.</p>
     */
    inline const Aws::String& GetSourceGraphId() const{ return m_sourceGraphId; }

    /**
     * <p>The Id of the Neptune Analytics graph from which the snapshot is created.</p>
     */
    inline void SetSourceGraphId(const Aws::String& value) { m_sourceGraphId = value; }

    /**
     * <p>The Id of the Neptune Analytics graph from which the snapshot is created.</p>
     */
    inline void SetSourceGraphId(Aws::String&& value) { m_sourceGraphId = std::move(value); }

    /**
     * <p>The Id of the Neptune Analytics graph from which the snapshot is created.</p>
     */
    inline void SetSourceGraphId(const char* value) { m_sourceGraphId.assign(value); }

    /**
     * <p>The Id of the Neptune Analytics graph from which the snapshot is created.</p>
     */
    inline CreateGraphSnapshotResult& WithSourceGraphId(const Aws::String& value) { SetSourceGraphId(value); return *this;}

    /**
     * <p>The Id of the Neptune Analytics graph from which the snapshot is created.</p>
     */
    inline CreateGraphSnapshotResult& WithSourceGraphId(Aws::String&& value) { SetSourceGraphId(std::move(value)); return *this;}

    /**
     * <p>The Id of the Neptune Analytics graph from which the snapshot is created.</p>
     */
    inline CreateGraphSnapshotResult& WithSourceGraphId(const char* value) { SetSourceGraphId(value); return *this;}


    /**
     * <p>The snapshot creation time</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }

    /**
     * <p>The snapshot creation time</p>
     */
    inline void SetSnapshotCreateTime(const Aws::Utils::DateTime& value) { m_snapshotCreateTime = value; }

    /**
     * <p>The snapshot creation time</p>
     */
    inline void SetSnapshotCreateTime(Aws::Utils::DateTime&& value) { m_snapshotCreateTime = std::move(value); }

    /**
     * <p>The snapshot creation time</p>
     */
    inline CreateGraphSnapshotResult& WithSnapshotCreateTime(const Aws::Utils::DateTime& value) { SetSnapshotCreateTime(value); return *this;}

    /**
     * <p>The snapshot creation time</p>
     */
    inline CreateGraphSnapshotResult& WithSnapshotCreateTime(Aws::Utils::DateTime&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}


    /**
     * <p>The current state of the snapshot.</p>
     */
    inline const SnapshotStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the snapshot.</p>
     */
    inline void SetStatus(const SnapshotStatus& value) { m_status = value; }

    /**
     * <p>The current state of the snapshot.</p>
     */
    inline void SetStatus(SnapshotStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current state of the snapshot.</p>
     */
    inline CreateGraphSnapshotResult& WithStatus(const SnapshotStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the snapshot.</p>
     */
    inline CreateGraphSnapshotResult& WithStatus(SnapshotStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the KMS key used to encrypt and decrypt graph data.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }

    /**
     * <p>The ID of the KMS key used to encrypt and decrypt graph data.</p>
     */
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifier = value; }

    /**
     * <p>The ID of the KMS key used to encrypt and decrypt graph data.</p>
     */
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifier = std::move(value); }

    /**
     * <p>The ID of the KMS key used to encrypt and decrypt graph data.</p>
     */
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifier.assign(value); }

    /**
     * <p>The ID of the KMS key used to encrypt and decrypt graph data.</p>
     */
    inline CreateGraphSnapshotResult& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt and decrypt graph data.</p>
     */
    inline CreateGraphSnapshotResult& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt and decrypt graph data.</p>
     */
    inline CreateGraphSnapshotResult& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateGraphSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateGraphSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateGraphSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_arn;

    Aws::String m_sourceGraphId;

    Aws::Utils::DateTime m_snapshotCreateTime;

    SnapshotStatus m_status;

    Aws::String m_kmsKeyIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
