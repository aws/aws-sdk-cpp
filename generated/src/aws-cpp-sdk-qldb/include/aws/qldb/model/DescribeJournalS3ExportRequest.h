/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/QLDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QLDB
{
namespace Model
{

  /**
   */
  class DescribeJournalS3ExportRequest : public QLDBRequest
  {
  public:
    AWS_QLDB_API DescribeJournalS3ExportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeJournalS3Export"; }

    AWS_QLDB_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline DescribeJournalS3ExportRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline DescribeJournalS3ExportRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline DescribeJournalS3ExportRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The UUID (represented in Base62-encoded text) of the journal export job to
     * describe.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }

    /**
     * <p>The UUID (represented in Base62-encoded text) of the journal export job to
     * describe.</p>
     */
    inline bool ExportIdHasBeenSet() const { return m_exportIdHasBeenSet; }

    /**
     * <p>The UUID (represented in Base62-encoded text) of the journal export job to
     * describe.</p>
     */
    inline void SetExportId(const Aws::String& value) { m_exportIdHasBeenSet = true; m_exportId = value; }

    /**
     * <p>The UUID (represented in Base62-encoded text) of the journal export job to
     * describe.</p>
     */
    inline void SetExportId(Aws::String&& value) { m_exportIdHasBeenSet = true; m_exportId = std::move(value); }

    /**
     * <p>The UUID (represented in Base62-encoded text) of the journal export job to
     * describe.</p>
     */
    inline void SetExportId(const char* value) { m_exportIdHasBeenSet = true; m_exportId.assign(value); }

    /**
     * <p>The UUID (represented in Base62-encoded text) of the journal export job to
     * describe.</p>
     */
    inline DescribeJournalS3ExportRequest& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}

    /**
     * <p>The UUID (represented in Base62-encoded text) of the journal export job to
     * describe.</p>
     */
    inline DescribeJournalS3ExportRequest& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}

    /**
     * <p>The UUID (represented in Base62-encoded text) of the journal export job to
     * describe.</p>
     */
    inline DescribeJournalS3ExportRequest& WithExportId(const char* value) { SetExportId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
