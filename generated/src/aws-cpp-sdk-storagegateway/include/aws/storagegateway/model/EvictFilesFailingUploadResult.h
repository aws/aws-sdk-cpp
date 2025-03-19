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
  class EvictFilesFailingUploadResult
  {
  public:
    AWS_STORAGEGATEWAY_API EvictFilesFailingUploadResult() = default;
    AWS_STORAGEGATEWAY_API EvictFilesFailingUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API EvictFilesFailingUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The randomly generated ID of the CloudWatch notification associated with the
     * cache clean operation. This ID is in UUID format.</p>
     */
    inline const Aws::String& GetNotificationId() const { return m_notificationId; }
    template<typename NotificationIdT = Aws::String>
    void SetNotificationId(NotificationIdT&& value) { m_notificationIdHasBeenSet = true; m_notificationId = std::forward<NotificationIdT>(value); }
    template<typename NotificationIdT = Aws::String>
    EvictFilesFailingUploadResult& WithNotificationId(NotificationIdT&& value) { SetNotificationId(std::forward<NotificationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    EvictFilesFailingUploadResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_notificationId;
    bool m_notificationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
