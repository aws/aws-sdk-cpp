/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/model/JournalKinesisStreamDescription.h>
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
  class DescribeJournalKinesisStreamResult
  {
  public:
    AWS_QLDB_API DescribeJournalKinesisStreamResult();
    AWS_QLDB_API DescribeJournalKinesisStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API DescribeJournalKinesisStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the QLDB journal stream returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline const JournalKinesisStreamDescription& GetStream() const{ return m_stream; }

    /**
     * <p>Information about the QLDB journal stream returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline void SetStream(const JournalKinesisStreamDescription& value) { m_stream = value; }

    /**
     * <p>Information about the QLDB journal stream returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline void SetStream(JournalKinesisStreamDescription&& value) { m_stream = std::move(value); }

    /**
     * <p>Information about the QLDB journal stream returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline DescribeJournalKinesisStreamResult& WithStream(const JournalKinesisStreamDescription& value) { SetStream(value); return *this;}

    /**
     * <p>Information about the QLDB journal stream returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline DescribeJournalKinesisStreamResult& WithStream(JournalKinesisStreamDescription&& value) { SetStream(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeJournalKinesisStreamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeJournalKinesisStreamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeJournalKinesisStreamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    JournalKinesisStreamDescription m_stream;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
