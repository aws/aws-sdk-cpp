/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReadSetExportJobItemStatus.h>
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
   * <p>Details about a read set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ExportReadSetDetail">AWS
   * API Reference</a></p>
   */
  class ExportReadSetDetail
  {
  public:
    AWS_OMICS_API ExportReadSetDetail();
    AWS_OMICS_API ExportReadSetDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ExportReadSetDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The set's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The set's ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The set's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The set's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The set's ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The set's ID.</p>
     */
    inline ExportReadSetDetail& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The set's ID.</p>
     */
    inline ExportReadSetDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The set's ID.</p>
     */
    inline ExportReadSetDetail& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The set's status.</p>
     */
    inline const ReadSetExportJobItemStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The set's status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The set's status.</p>
     */
    inline void SetStatus(const ReadSetExportJobItemStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The set's status.</p>
     */
    inline void SetStatus(ReadSetExportJobItemStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The set's status.</p>
     */
    inline ExportReadSetDetail& WithStatus(const ReadSetExportJobItemStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The set's status.</p>
     */
    inline ExportReadSetDetail& WithStatus(ReadSetExportJobItemStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The set's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The set's status message.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The set's status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The set's status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The set's status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The set's status message.</p>
     */
    inline ExportReadSetDetail& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The set's status message.</p>
     */
    inline ExportReadSetDetail& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The set's status message.</p>
     */
    inline ExportReadSetDetail& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ReadSetExportJobItemStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
