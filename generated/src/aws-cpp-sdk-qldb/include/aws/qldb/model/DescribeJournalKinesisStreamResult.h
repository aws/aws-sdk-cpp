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
    AWS_QLDB_API DescribeJournalKinesisStreamResult() = default;
    AWS_QLDB_API DescribeJournalKinesisStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API DescribeJournalKinesisStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the QLDB journal stream returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline const JournalKinesisStreamDescription& GetStream() const { return m_stream; }
    template<typename StreamT = JournalKinesisStreamDescription>
    void SetStream(StreamT&& value) { m_streamHasBeenSet = true; m_stream = std::forward<StreamT>(value); }
    template<typename StreamT = JournalKinesisStreamDescription>
    DescribeJournalKinesisStreamResult& WithStream(StreamT&& value) { SetStream(std::forward<StreamT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeJournalKinesisStreamResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JournalKinesisStreamDescription m_stream;
    bool m_streamHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
