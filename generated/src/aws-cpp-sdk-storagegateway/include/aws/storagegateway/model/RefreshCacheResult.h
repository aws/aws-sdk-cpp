/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>RefreshCacheOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/RefreshCacheOutput">AWS
   * API Reference</a></p>
   */
  class RefreshCacheResult
  {
  public:
    AWS_STORAGEGATEWAY_API RefreshCacheResult() = default;
    AWS_STORAGEGATEWAY_API RefreshCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API RefreshCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetFileShareARN() const { return m_fileShareARN; }
    template<typename FileShareARNT = Aws::String>
    void SetFileShareARN(FileShareARNT&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::forward<FileShareARNT>(value); }
    template<typename FileShareARNT = Aws::String>
    RefreshCacheResult& WithFileShareARN(FileShareARNT&& value) { SetFileShareARN(std::forward<FileShareARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNotificationId() const { return m_notificationId; }
    template<typename NotificationIdT = Aws::String>
    void SetNotificationId(NotificationIdT&& value) { m_notificationIdHasBeenSet = true; m_notificationId = std::forward<NotificationIdT>(value); }
    template<typename NotificationIdT = Aws::String>
    RefreshCacheResult& WithNotificationId(NotificationIdT&& value) { SetNotificationId(std::forward<NotificationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RefreshCacheResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileShareARN;
    bool m_fileShareARNHasBeenSet = false;

    Aws::String m_notificationId;
    bool m_notificationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
