/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/model/JournalS3ExportDescription.h>
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
  class DescribeJournalS3ExportResult
  {
  public:
    AWS_QLDB_API DescribeJournalS3ExportResult() = default;
    AWS_QLDB_API DescribeJournalS3ExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API DescribeJournalS3ExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the journal export job returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline const JournalS3ExportDescription& GetExportDescription() const { return m_exportDescription; }
    template<typename ExportDescriptionT = JournalS3ExportDescription>
    void SetExportDescription(ExportDescriptionT&& value) { m_exportDescriptionHasBeenSet = true; m_exportDescription = std::forward<ExportDescriptionT>(value); }
    template<typename ExportDescriptionT = JournalS3ExportDescription>
    DescribeJournalS3ExportResult& WithExportDescription(ExportDescriptionT&& value) { SetExportDescription(std::forward<ExportDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeJournalS3ExportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JournalS3ExportDescription m_exportDescription;
    bool m_exportDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
