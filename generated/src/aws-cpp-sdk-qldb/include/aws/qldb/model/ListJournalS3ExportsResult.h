/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/model/JournalS3ExportDescription.h>
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
  class ListJournalS3ExportsResult
  {
  public:
    AWS_QLDB_API ListJournalS3ExportsResult() = default;
    AWS_QLDB_API ListJournalS3ExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API ListJournalS3ExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The journal export jobs for all ledgers that are associated with the current
     * Amazon Web Services account and Region.</p>
     */
    inline const Aws::Vector<JournalS3ExportDescription>& GetJournalS3Exports() const { return m_journalS3Exports; }
    template<typename JournalS3ExportsT = Aws::Vector<JournalS3ExportDescription>>
    void SetJournalS3Exports(JournalS3ExportsT&& value) { m_journalS3ExportsHasBeenSet = true; m_journalS3Exports = std::forward<JournalS3ExportsT>(value); }
    template<typename JournalS3ExportsT = Aws::Vector<JournalS3ExportDescription>>
    ListJournalS3ExportsResult& WithJournalS3Exports(JournalS3ExportsT&& value) { SetJournalS3Exports(std::forward<JournalS3ExportsT>(value)); return *this;}
    template<typename JournalS3ExportsT = JournalS3ExportDescription>
    ListJournalS3ExportsResult& AddJournalS3Exports(JournalS3ExportsT&& value) { m_journalS3ExportsHasBeenSet = true; m_journalS3Exports.emplace_back(std::forward<JournalS3ExportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent <code>ListJournalS3Exports</code>
     * call.</p> </li> </ul>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListJournalS3ExportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListJournalS3ExportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JournalS3ExportDescription> m_journalS3Exports;
    bool m_journalS3ExportsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
