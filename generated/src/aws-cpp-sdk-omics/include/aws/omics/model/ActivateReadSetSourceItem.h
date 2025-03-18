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
    AWS_OMICS_API ActivateReadSetSourceItem() = default;
    AWS_OMICS_API ActivateReadSetSourceItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ActivateReadSetSourceItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source's read set ID.</p>
     */
    inline const Aws::String& GetReadSetId() const { return m_readSetId; }
    inline bool ReadSetIdHasBeenSet() const { return m_readSetIdHasBeenSet; }
    template<typename ReadSetIdT = Aws::String>
    void SetReadSetId(ReadSetIdT&& value) { m_readSetIdHasBeenSet = true; m_readSetId = std::forward<ReadSetIdT>(value); }
    template<typename ReadSetIdT = Aws::String>
    ActivateReadSetSourceItem& WithReadSetId(ReadSetIdT&& value) { SetReadSetId(std::forward<ReadSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's status.</p>
     */
    inline ReadSetActivationJobItemStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReadSetActivationJobItemStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ActivateReadSetSourceItem& WithStatus(ReadSetActivationJobItemStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ActivateReadSetSourceItem& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_readSetId;
    bool m_readSetIdHasBeenSet = false;

    ReadSetActivationJobItemStatus m_status{ReadSetActivationJobItemStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
