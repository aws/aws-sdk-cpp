/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReadSetActivationJobItemStatus.h>
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
   * <p>A source for a read set activation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ActivateReadSetSourceItem">AWS
   * API Reference</a></p>
   */
  class ActivateReadSetSourceItem
  {
  public:
    AWS_OMICS_API ActivateReadSetSourceItem();
    AWS_OMICS_API ActivateReadSetSourceItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ActivateReadSetSourceItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source's read set ID.</p>
     */
    inline const Aws::String& GetReadSetId() const{ return m_readSetId; }

    /**
     * <p>The source's read set ID.</p>
     */
    inline bool ReadSetIdHasBeenSet() const { return m_readSetIdHasBeenSet; }

    /**
     * <p>The source's read set ID.</p>
     */
    inline void SetReadSetId(const Aws::String& value) { m_readSetIdHasBeenSet = true; m_readSetId = value; }

    /**
     * <p>The source's read set ID.</p>
     */
    inline void SetReadSetId(Aws::String&& value) { m_readSetIdHasBeenSet = true; m_readSetId = std::move(value); }

    /**
     * <p>The source's read set ID.</p>
     */
    inline void SetReadSetId(const char* value) { m_readSetIdHasBeenSet = true; m_readSetId.assign(value); }

    /**
     * <p>The source's read set ID.</p>
     */
    inline ActivateReadSetSourceItem& WithReadSetId(const Aws::String& value) { SetReadSetId(value); return *this;}

    /**
     * <p>The source's read set ID.</p>
     */
    inline ActivateReadSetSourceItem& WithReadSetId(Aws::String&& value) { SetReadSetId(std::move(value)); return *this;}

    /**
     * <p>The source's read set ID.</p>
     */
    inline ActivateReadSetSourceItem& WithReadSetId(const char* value) { SetReadSetId(value); return *this;}


    /**
     * <p>The source's status.</p>
     */
    inline const ReadSetActivationJobItemStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The source's status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The source's status.</p>
     */
    inline void SetStatus(const ReadSetActivationJobItemStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The source's status.</p>
     */
    inline void SetStatus(ReadSetActivationJobItemStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The source's status.</p>
     */
    inline ActivateReadSetSourceItem& WithStatus(const ReadSetActivationJobItemStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The source's status.</p>
     */
    inline ActivateReadSetSourceItem& WithStatus(ReadSetActivationJobItemStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The source's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The source's status message.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The source's status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The source's status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The source's status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The source's status message.</p>
     */
    inline ActivateReadSetSourceItem& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The source's status message.</p>
     */
    inline ActivateReadSetSourceItem& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The source's status message.</p>
     */
    inline ActivateReadSetSourceItem& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_readSetId;
    bool m_readSetIdHasBeenSet = false;

    ReadSetActivationJobItemStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
