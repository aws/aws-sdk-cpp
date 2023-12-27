/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/sesv2/model/ExportDataSource.h>
#include <aws/sesv2/model/ExportDestination.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to create an export job from a data source to a data
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateExportJobRequest">AWS
   * API Reference</a></p>
   */
  class CreateExportJobRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API CreateExportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExportJob"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The data source for the export job.</p>
     */
    inline const ExportDataSource& GetExportDataSource() const{ return m_exportDataSource; }

    /**
     * <p>The data source for the export job.</p>
     */
    inline bool ExportDataSourceHasBeenSet() const { return m_exportDataSourceHasBeenSet; }

    /**
     * <p>The data source for the export job.</p>
     */
    inline void SetExportDataSource(const ExportDataSource& value) { m_exportDataSourceHasBeenSet = true; m_exportDataSource = value; }

    /**
     * <p>The data source for the export job.</p>
     */
    inline void SetExportDataSource(ExportDataSource&& value) { m_exportDataSourceHasBeenSet = true; m_exportDataSource = std::move(value); }

    /**
     * <p>The data source for the export job.</p>
     */
    inline CreateExportJobRequest& WithExportDataSource(const ExportDataSource& value) { SetExportDataSource(value); return *this;}

    /**
     * <p>The data source for the export job.</p>
     */
    inline CreateExportJobRequest& WithExportDataSource(ExportDataSource&& value) { SetExportDataSource(std::move(value)); return *this;}


    /**
     * <p>The destination for the export job.</p>
     */
    inline const ExportDestination& GetExportDestination() const{ return m_exportDestination; }

    /**
     * <p>The destination for the export job.</p>
     */
    inline bool ExportDestinationHasBeenSet() const { return m_exportDestinationHasBeenSet; }

    /**
     * <p>The destination for the export job.</p>
     */
    inline void SetExportDestination(const ExportDestination& value) { m_exportDestinationHasBeenSet = true; m_exportDestination = value; }

    /**
     * <p>The destination for the export job.</p>
     */
    inline void SetExportDestination(ExportDestination&& value) { m_exportDestinationHasBeenSet = true; m_exportDestination = std::move(value); }

    /**
     * <p>The destination for the export job.</p>
     */
    inline CreateExportJobRequest& WithExportDestination(const ExportDestination& value) { SetExportDestination(value); return *this;}

    /**
     * <p>The destination for the export job.</p>
     */
    inline CreateExportJobRequest& WithExportDestination(ExportDestination&& value) { SetExportDestination(std::move(value)); return *this;}

  private:

    ExportDataSource m_exportDataSource;
    bool m_exportDataSourceHasBeenSet = false;

    ExportDestination m_exportDestination;
    bool m_exportDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
