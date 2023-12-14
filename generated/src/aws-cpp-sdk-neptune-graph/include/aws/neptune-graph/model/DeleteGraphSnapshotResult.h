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
  class DeleteGraphSnapshotResult
  {
  public:
    AWS_NEPTUNEGRAPH_API DeleteGraphSnapshotResult();
    AWS_NEPTUNEGRAPH_API DeleteGraphSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API DeleteGraphSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the graph snapshot.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the graph snapshot.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The unique identifier of the graph snapshot.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The unique identifier of the graph snapshot.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The unique identifier of the graph snapshot.</p>
     */
    inline DeleteGraphSnapshotResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the graph snapshot.</p>
     */
    inline DeleteGraphSnapshotResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the graph snapshot.</p>
     */
    inline DeleteGraphSnapshotResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The snapshot name. For example: <code>my-snapshot-1</code>.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The snapshot name. For example: <code>my-snapshot-1</code>.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The snapshot name. For example: <code>my-snapshot-1</code>.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The snapshot name. For example: <code>my-snapshot-1</code>.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The snapshot name. For example: <code>my-snapshot-1</code>.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline DeleteGraphSnapshotResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The snapshot name. For example: <code>my-snapshot-1</code>.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline DeleteGraphSnapshotResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The snapshot name. For example: <code>my-snapshot-1</code>.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline DeleteGraphSnapshotResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the graph snapshot.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the graph snapshot.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the graph snapshot.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the graph snapshot.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the graph snapshot.</p>
     */
    inline DeleteGraphSnapshotResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the graph snapshot.</p>
     */
    inline DeleteGraphSnapshotResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the graph snapshot.</p>
     */
    inline DeleteGraphSnapshotResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The graph identifier for the graph from which the snapshot was created.</p>
     */
    inline const Aws::String& GetSourceGraphId() const{ return m_sourceGraphId; }

    /**
     * <p>The graph identifier for the graph from which the snapshot was created.</p>
     */
    inline void SetSourceGraphId(const Aws::String& value) { m_sourceGraphId = value; }

    /**
     * <p>The graph identifier for the graph from which the snapshot was created.</p>
     */
    inline void SetSourceGraphId(Aws::String&& value) { m_sourceGraphId = std::move(value); }

    /**
     * <p>The graph identifier for the graph from which the snapshot was created.</p>
     */
    inline void SetSourceGraphId(const char* value) { m_sourceGraphId.assign(value); }

    /**
     * <p>The graph identifier for the graph from which the snapshot was created.</p>
     */
    inline DeleteGraphSnapshotResult& WithSourceGraphId(const Aws::String& value) { SetSourceGraphId(value); return *this;}

    /**
     * <p>The graph identifier for the graph from which the snapshot was created.</p>
     */
    inline DeleteGraphSnapshotResult& WithSourceGraphId(Aws::String&& value) { SetSourceGraphId(std::move(value)); return *this;}

    /**
     * <p>The graph identifier for the graph from which the snapshot was created.</p>
     */
    inline DeleteGraphSnapshotResult& WithSourceGraphId(const char* value) { SetSourceGraphId(value); return *this;}


    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }

    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline void SetSnapshotCreateTime(const Aws::Utils::DateTime& value) { m_snapshotCreateTime = value; }

    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline void SetSnapshotCreateTime(Aws::Utils::DateTime&& value) { m_snapshotCreateTime = std::move(value); }

    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline DeleteGraphSnapshotResult& WithSnapshotCreateTime(const Aws::Utils::DateTime& value) { SetSnapshotCreateTime(value); return *this;}

    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline DeleteGraphSnapshotResult& WithSnapshotCreateTime(Aws::Utils::DateTime&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}


    /**
     * <p>The status of the graph snapshot.</p>
     */
    inline const SnapshotStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the graph snapshot.</p>
     */
    inline void SetStatus(const SnapshotStatus& value) { m_status = value; }

    /**
     * <p>The status of the graph snapshot.</p>
     */
    inline void SetStatus(SnapshotStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the graph snapshot.</p>
     */
    inline DeleteGraphSnapshotResult& WithStatus(const SnapshotStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the graph snapshot.</p>
     */
    inline DeleteGraphSnapshotResult& WithStatus(SnapshotStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the KMS key used to encrypt and decrypt the snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }

    /**
     * <p>The ID of the KMS key used to encrypt and decrypt the snapshot.</p>
     */
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifier = value; }

    /**
     * <p>The ID of the KMS key used to encrypt and decrypt the snapshot.</p>
     */
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifier = std::move(value); }

    /**
     * <p>The ID of the KMS key used to encrypt and decrypt the snapshot.</p>
     */
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifier.assign(value); }

    /**
     * <p>The ID of the KMS key used to encrypt and decrypt the snapshot.</p>
     */
    inline DeleteGraphSnapshotResult& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt and decrypt the snapshot.</p>
     */
    inline DeleteGraphSnapshotResult& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt and decrypt the snapshot.</p>
     */
    inline DeleteGraphSnapshotResult& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteGraphSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteGraphSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteGraphSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
