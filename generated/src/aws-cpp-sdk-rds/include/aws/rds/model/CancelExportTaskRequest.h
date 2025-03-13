/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class CancelExportTaskRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CancelExportTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelExportTask"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the snapshot or cluster export task to cancel.</p>
     */
    inline const Aws::String& GetExportTaskIdentifier() const { return m_exportTaskIdentifier; }
    inline bool ExportTaskIdentifierHasBeenSet() const { return m_exportTaskIdentifierHasBeenSet; }
    template<typename ExportTaskIdentifierT = Aws::String>
    void SetExportTaskIdentifier(ExportTaskIdentifierT&& value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier = std::forward<ExportTaskIdentifierT>(value); }
    template<typename ExportTaskIdentifierT = Aws::String>
    CancelExportTaskRequest& WithExportTaskIdentifier(ExportTaskIdentifierT&& value) { SetExportTaskIdentifier(std::forward<ExportTaskIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exportTaskIdentifier;
    bool m_exportTaskIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
