/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/Snapshot.h>
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
namespace MemoryDB
{
namespace Model
{
  class CreateSnapshotResult
  {
  public:
    AWS_MEMORYDB_API CreateSnapshotResult();
    AWS_MEMORYDB_API CreateSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API CreateSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The newly-created snapshot.</p>
     */
    inline const Snapshot& GetSnapshot() const{ return m_snapshot; }

    /**
     * <p>The newly-created snapshot.</p>
     */
    inline void SetSnapshot(const Snapshot& value) { m_snapshot = value; }

    /**
     * <p>The newly-created snapshot.</p>
     */
    inline void SetSnapshot(Snapshot&& value) { m_snapshot = std::move(value); }

    /**
     * <p>The newly-created snapshot.</p>
     */
    inline CreateSnapshotResult& WithSnapshot(const Snapshot& value) { SetSnapshot(value); return *this;}

    /**
     * <p>The newly-created snapshot.</p>
     */
    inline CreateSnapshotResult& WithSnapshot(Snapshot&& value) { SetSnapshot(std::move(value)); return *this;}

  private:

    Snapshot m_snapshot;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
