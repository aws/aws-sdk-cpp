/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/AttachmentInput.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>A file input event activated by a end user request to upload files into their
   * web experience chat.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AttachmentInputEvent">AWS
   * API Reference</a></p>
   */
  class AttachmentInputEvent
  {
  public:
    AWS_QBUSINESS_API AttachmentInputEvent();
    AWS_QBUSINESS_API AttachmentInputEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AttachmentInputEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AttachmentInput& GetAttachment() const{ return m_attachment; }

    
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }

    
    inline void SetAttachment(const AttachmentInput& value) { m_attachmentHasBeenSet = true; m_attachment = value; }

    
    inline void SetAttachment(AttachmentInput&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }

    
    inline AttachmentInputEvent& WithAttachment(const AttachmentInput& value) { SetAttachment(value); return *this;}

    
    inline AttachmentInputEvent& WithAttachment(AttachmentInput&& value) { SetAttachment(std::move(value)); return *this;}

  private:

    AttachmentInput m_attachment;
    bool m_attachmentHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
