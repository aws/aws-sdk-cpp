/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
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
  class DescribeJournalS3ExportResult
  {
  public:
    AWS_QLDB_API DescribeJournalS3ExportResult();
    AWS_QLDB_API DescribeJournalS3ExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API DescribeJournalS3ExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the journal export job returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline const JournalS3ExportDescription& GetExportDescription() const{ return m_exportDescription; }

    /**
     * <p>Information about the journal export job returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline void SetExportDescription(const JournalS3ExportDescription& value) { m_exportDescription = value; }

    /**
     * <p>Information about the journal export job returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline void SetExportDescription(JournalS3ExportDescription&& value) { m_exportDescription = std::move(value); }

    /**
     * <p>Information about the journal export job returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline DescribeJournalS3ExportResult& WithExportDescription(const JournalS3ExportDescription& value) { SetExportDescription(value); return *this;}

    /**
     * <p>Information about the journal export job returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline DescribeJournalS3ExportResult& WithExportDescription(JournalS3ExportDescription&& value) { SetExportDescription(std::move(value)); return *this;}

  private:

    JournalS3ExportDescription m_exportDescription;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
