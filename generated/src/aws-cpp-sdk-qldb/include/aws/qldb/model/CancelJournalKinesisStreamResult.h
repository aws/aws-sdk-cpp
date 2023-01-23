/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QLDB
{
namespace Model
{
  class CancelJournalKinesisStreamResult
  {
  public:
    AWS_QLDB_API CancelJournalKinesisStreamResult();
    AWS_QLDB_API CancelJournalKinesisStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API CancelJournalKinesisStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The UUID (Base62-encoded text) of the canceled QLDB journal stream.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * <p>The UUID (Base62-encoded text) of the canceled QLDB journal stream.</p>
     */
    inline void SetStreamId(const Aws::String& value) { m_streamId = value; }

    /**
     * <p>The UUID (Base62-encoded text) of the canceled QLDB journal stream.</p>
     */
    inline void SetStreamId(Aws::String&& value) { m_streamId = std::move(value); }

    /**
     * <p>The UUID (Base62-encoded text) of the canceled QLDB journal stream.</p>
     */
    inline void SetStreamId(const char* value) { m_streamId.assign(value); }

    /**
     * <p>The UUID (Base62-encoded text) of the canceled QLDB journal stream.</p>
     */
    inline CancelJournalKinesisStreamResult& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>The UUID (Base62-encoded text) of the canceled QLDB journal stream.</p>
     */
    inline CancelJournalKinesisStreamResult& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>The UUID (Base62-encoded text) of the canceled QLDB journal stream.</p>
     */
    inline CancelJournalKinesisStreamResult& WithStreamId(const char* value) { SetStreamId(value); return *this;}

  private:

    Aws::String m_streamId;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
