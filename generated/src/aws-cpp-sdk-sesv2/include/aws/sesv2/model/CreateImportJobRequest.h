﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/sesv2/model/ImportDestination.h>
#include <aws/sesv2/model/ImportDataSource.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to create an import job from a data source for a data
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateImportJobRequest">AWS
   * API Reference</a></p>
   */
  class CreateImportJobRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API CreateImportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateImportJob"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The destination for the import job.</p>
     */
    inline const ImportDestination& GetImportDestination() const { return m_importDestination; }
    inline bool ImportDestinationHasBeenSet() const { return m_importDestinationHasBeenSet; }
    template<typename ImportDestinationT = ImportDestination>
    void SetImportDestination(ImportDestinationT&& value) { m_importDestinationHasBeenSet = true; m_importDestination = std::forward<ImportDestinationT>(value); }
    template<typename ImportDestinationT = ImportDestination>
    CreateImportJobRequest& WithImportDestination(ImportDestinationT&& value) { SetImportDestination(std::forward<ImportDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source for the import job.</p>
     */
    inline const ImportDataSource& GetImportDataSource() const { return m_importDataSource; }
    inline bool ImportDataSourceHasBeenSet() const { return m_importDataSourceHasBeenSet; }
    template<typename ImportDataSourceT = ImportDataSource>
    void SetImportDataSource(ImportDataSourceT&& value) { m_importDataSourceHasBeenSet = true; m_importDataSource = std::forward<ImportDataSourceT>(value); }
    template<typename ImportDataSourceT = ImportDataSource>
    CreateImportJobRequest& WithImportDataSource(ImportDataSourceT&& value) { SetImportDataSource(std::forward<ImportDataSourceT>(value)); return *this;}
    ///@}
  private:

    ImportDestination m_importDestination;
    bool m_importDestinationHasBeenSet = false;

    ImportDataSource m_importDataSource;
    bool m_importDataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
