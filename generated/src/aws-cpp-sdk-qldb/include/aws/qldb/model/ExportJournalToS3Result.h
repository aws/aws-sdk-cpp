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
  class ExportJournalToS3Result
  {
  public:
    AWS_QLDB_API ExportJournalToS3Result() = default;
    AWS_QLDB_API ExportJournalToS3Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API ExportJournalToS3Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The UUID (represented in Base62-encoded text) that QLDB assigns to each
     * journal export job.</p> <p>To describe your export request and check the status
     * of the job, you can use <code>ExportId</code> to call
     * <code>DescribeJournalS3Export</code>.</p>
     */
    inline const Aws::String& GetExportId() const { return m_exportId; }
    template<typename ExportIdT = Aws::String>
    void SetExportId(ExportIdT&& value) { m_exportIdHasBeenSet = true; m_exportId = std::forward<ExportIdT>(value); }
    template<typename ExportIdT = Aws::String>
    ExportJournalToS3Result& WithExportId(ExportIdT&& value) { SetExportId(std::forward<ExportIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExportJournalToS3Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
