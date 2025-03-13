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
    AWS_SESV2_API CreateExportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExportJob"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The data source for the export job.</p>
     */
    inline const ExportDataSource& GetExportDataSource() const { return m_exportDataSource; }
    inline bool ExportDataSourceHasBeenSet() const { return m_exportDataSourceHasBeenSet; }
    template<typename ExportDataSourceT = ExportDataSource>
    void SetExportDataSource(ExportDataSourceT&& value) { m_exportDataSourceHasBeenSet = true; m_exportDataSource = std::forward<ExportDataSourceT>(value); }
    template<typename ExportDataSourceT = ExportDataSource>
    CreateExportJobRequest& WithExportDataSource(ExportDataSourceT&& value) { SetExportDataSource(std::forward<ExportDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination for the export job.</p>
     */
    inline const ExportDestination& GetExportDestination() const { return m_exportDestination; }
    inline bool ExportDestinationHasBeenSet() const { return m_exportDestinationHasBeenSet; }
    template<typename ExportDestinationT = ExportDestination>
    void SetExportDestination(ExportDestinationT&& value) { m_exportDestinationHasBeenSet = true; m_exportDestination = std::forward<ExportDestinationT>(value); }
    template<typename ExportDestinationT = ExportDestination>
    CreateExportJobRequest& WithExportDestination(ExportDestinationT&& value) { SetExportDestination(std::forward<ExportDestinationT>(value)); return *this;}
    ///@}
  private:

    ExportDataSource m_exportDataSource;
    bool m_exportDataSourceHasBeenSet = false;

    ExportDestination m_exportDestination;
    bool m_exportDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
