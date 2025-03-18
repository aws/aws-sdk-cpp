/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class EvictFilesFailingUploadRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API EvictFilesFailingUploadRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EvictFilesFailingUpload"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the file share for which you want to start
     * the cache clean operation.</p>
     */
    inline const Aws::String& GetFileShareARN() const { return m_fileShareARN; }
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }
    template<typename FileShareARNT = Aws::String>
    void SetFileShareARN(FileShareARNT&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::forward<FileShareARNT>(value); }
    template<typename FileShareARNT = Aws::String>
    EvictFilesFailingUploadRequest& WithFileShareARN(FileShareARNT&& value) { SetFileShareARN(std::forward<FileShareARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether cache entries with full or partial file data currently
     * stored on the gateway will be forcibly removed by the cache clean operation.</p>
     * <p>Valid arguments:</p> <ul> <li> <p> <code>False</code> - The cache clean
     * operation skips cache entries failing upload if they are associated with data
     * currently stored on the gateway. This preserves the cached data.</p> </li> <li>
     * <p> <code>True</code> - The cache clean operation removes cache entries failing
     * upload even if they are associated with data currently stored on the gateway.
     * This deletes the cached data.</p>  <p>If <code>ForceRemove</code> is
     * set to <code>True</code>, the cache clean operation will delete file data from
     * the gateway which might otherwise be recoverable.</p>  </li> </ul>
     */
    inline bool GetForceRemove() const { return m_forceRemove; }
    inline bool ForceRemoveHasBeenSet() const { return m_forceRemoveHasBeenSet; }
    inline void SetForceRemove(bool value) { m_forceRemoveHasBeenSet = true; m_forceRemove = value; }
    inline EvictFilesFailingUploadRequest& WithForceRemove(bool value) { SetForceRemove(value); return *this;}
    ///@}
  private:

    Aws::String m_fileShareARN;
    bool m_fileShareARNHasBeenSet = false;

    bool m_forceRemove{false};
    bool m_forceRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
