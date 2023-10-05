/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ShareStatus.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Summary of a review template share.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/TemplateShareSummary">AWS
   * API Reference</a></p>
   */
  class TemplateShareSummary
  {
  public:
    AWS_WELLARCHITECTED_API TemplateShareSummary();
    AWS_WELLARCHITECTED_API TemplateShareSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API TemplateShareSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetShareId() const{ return m_shareId; }

    
    inline bool ShareIdHasBeenSet() const { return m_shareIdHasBeenSet; }

    
    inline void SetShareId(const Aws::String& value) { m_shareIdHasBeenSet = true; m_shareId = value; }

    
    inline void SetShareId(Aws::String&& value) { m_shareIdHasBeenSet = true; m_shareId = std::move(value); }

    
    inline void SetShareId(const char* value) { m_shareIdHasBeenSet = true; m_shareId.assign(value); }

    
    inline TemplateShareSummary& WithShareId(const Aws::String& value) { SetShareId(value); return *this;}

    
    inline TemplateShareSummary& WithShareId(Aws::String&& value) { SetShareId(std::move(value)); return *this;}

    
    inline TemplateShareSummary& WithShareId(const char* value) { SetShareId(value); return *this;}


    
    inline const Aws::String& GetSharedWith() const{ return m_sharedWith; }

    
    inline bool SharedWithHasBeenSet() const { return m_sharedWithHasBeenSet; }

    
    inline void SetSharedWith(const Aws::String& value) { m_sharedWithHasBeenSet = true; m_sharedWith = value; }

    
    inline void SetSharedWith(Aws::String&& value) { m_sharedWithHasBeenSet = true; m_sharedWith = std::move(value); }

    
    inline void SetSharedWith(const char* value) { m_sharedWithHasBeenSet = true; m_sharedWith.assign(value); }

    
    inline TemplateShareSummary& WithSharedWith(const Aws::String& value) { SetSharedWith(value); return *this;}

    
    inline TemplateShareSummary& WithSharedWith(Aws::String&& value) { SetSharedWith(std::move(value)); return *this;}

    
    inline TemplateShareSummary& WithSharedWith(const char* value) { SetSharedWith(value); return *this;}


    
    inline const ShareStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const ShareStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(ShareStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline TemplateShareSummary& WithStatus(const ShareStatus& value) { SetStatus(value); return *this;}

    
    inline TemplateShareSummary& WithStatus(ShareStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Review template share invitation status message. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Review template share invitation status message. </p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>Review template share invitation status message. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Review template share invitation status message. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Review template share invitation status message. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Review template share invitation status message. </p>
     */
    inline TemplateShareSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Review template share invitation status message. </p>
     */
    inline TemplateShareSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Review template share invitation status message. </p>
     */
    inline TemplateShareSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_shareId;
    bool m_shareIdHasBeenSet = false;

    Aws::String m_sharedWith;
    bool m_sharedWithHasBeenSet = false;

    ShareStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
