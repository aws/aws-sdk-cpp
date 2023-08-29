/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{

  /**
   * <p>Statistics about the execution of an export job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ExportStatistics">AWS
   * API Reference</a></p>
   */
  class ExportStatistics
  {
  public:
    AWS_SESV2_API ExportStatistics();
    AWS_SESV2_API ExportStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ExportStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of records that were processed to generate the final export
     * file.</p>
     */
    inline int GetProcessedRecordsCount() const{ return m_processedRecordsCount; }

    /**
     * <p>The number of records that were processed to generate the final export
     * file.</p>
     */
    inline bool ProcessedRecordsCountHasBeenSet() const { return m_processedRecordsCountHasBeenSet; }

    /**
     * <p>The number of records that were processed to generate the final export
     * file.</p>
     */
    inline void SetProcessedRecordsCount(int value) { m_processedRecordsCountHasBeenSet = true; m_processedRecordsCount = value; }

    /**
     * <p>The number of records that were processed to generate the final export
     * file.</p>
     */
    inline ExportStatistics& WithProcessedRecordsCount(int value) { SetProcessedRecordsCount(value); return *this;}


    /**
     * <p>The number of records that were exported to the final export file.</p>
     * <p>This value might not be available for all export source types</p>
     */
    inline int GetExportedRecordsCount() const{ return m_exportedRecordsCount; }

    /**
     * <p>The number of records that were exported to the final export file.</p>
     * <p>This value might not be available for all export source types</p>
     */
    inline bool ExportedRecordsCountHasBeenSet() const { return m_exportedRecordsCountHasBeenSet; }

    /**
     * <p>The number of records that were exported to the final export file.</p>
     * <p>This value might not be available for all export source types</p>
     */
    inline void SetExportedRecordsCount(int value) { m_exportedRecordsCountHasBeenSet = true; m_exportedRecordsCount = value; }

    /**
     * <p>The number of records that were exported to the final export file.</p>
     * <p>This value might not be available for all export source types</p>
     */
    inline ExportStatistics& WithExportedRecordsCount(int value) { SetExportedRecordsCount(value); return *this;}

  private:

    int m_processedRecordsCount;
    bool m_processedRecordsCountHasBeenSet = false;

    int m_exportedRecordsCount;
    bool m_exportedRecordsCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
