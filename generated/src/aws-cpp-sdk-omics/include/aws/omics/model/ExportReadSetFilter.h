/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/ReadSetExportJobStatus.h>
#include <utility>

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
namespace Omics
{
namespace Model
{

  /**
   * <p>An read set export job filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ExportReadSetFilter">AWS
   * API Reference</a></p>
   */
  class ExportReadSetFilter
  {
  public:
    AWS_OMICS_API ExportReadSetFilter();
    AWS_OMICS_API ExportReadSetFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ExportReadSetFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The filter's start date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>The filter's start date.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>The filter's start date.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>The filter's start date.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>The filter's start date.</p>
     */
    inline ExportReadSetFilter& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>The filter's start date.</p>
     */
    inline ExportReadSetFilter& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>The filter's end date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>The filter's end date.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>The filter's end date.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>The filter's end date.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>The filter's end date.</p>
     */
    inline ExportReadSetFilter& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>The filter's end date.</p>
     */
    inline ExportReadSetFilter& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>A status to filter on.</p>
     */
    inline const ReadSetExportJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A status to filter on.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A status to filter on.</p>
     */
    inline void SetStatus(const ReadSetExportJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A status to filter on.</p>
     */
    inline void SetStatus(ReadSetExportJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A status to filter on.</p>
     */
    inline ExportReadSetFilter& WithStatus(const ReadSetExportJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A status to filter on.</p>
     */
    inline ExportReadSetFilter& WithStatus(ReadSetExportJobStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    ReadSetExportJobStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
