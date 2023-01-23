/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Attachment.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NetworkManager
{
namespace Model
{
  class DeleteAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API DeleteAttachmentResult();
    AWS_NETWORKMANAGER_API DeleteAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API DeleteAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the deleted attachment.</p>
     */
    inline const Attachment& GetAttachment() const{ return m_attachment; }

    /**
     * <p>Information about the deleted attachment.</p>
     */
    inline void SetAttachment(const Attachment& value) { m_attachment = value; }

    /**
     * <p>Information about the deleted attachment.</p>
     */
    inline void SetAttachment(Attachment&& value) { m_attachment = std::move(value); }

    /**
     * <p>Information about the deleted attachment.</p>
     */
    inline DeleteAttachmentResult& WithAttachment(const Attachment& value) { SetAttachment(value); return *this;}

    /**
     * <p>Information about the deleted attachment.</p>
     */
    inline DeleteAttachmentResult& WithAttachment(Attachment&& value) { SetAttachment(std::move(value)); return *this;}

  private:

    Attachment m_attachment;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
