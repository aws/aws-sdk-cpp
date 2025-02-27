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
    AWS_STORAGEGATEWAY_API EvictFilesFailingUploadResult();
    AWS_STORAGEGATEWAY_API EvictFilesFailingUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API EvictFilesFailingUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The randomly generated ID of the CloudWatch notification associated with the
     * cache clean operation. This ID is in UUID format.</p>
     */
    inline const Aws::String& GetNotificationId() const{ return m_notificationId; }
    inline void SetNotificationId(const Aws::String& value) { m_notificationId = value; }
    inline void SetNotificationId(Aws::String&& value) { m_notificationId = std::move(value); }
    inline void SetNotificationId(const char* value) { m_notificationId.assign(value); }
    inline EvictFilesFailingUploadResult& WithNotificationId(const Aws::String& value) { SetNotificationId(value); return *this;}
    inline EvictFilesFailingUploadResult& WithNotificationId(Aws::String&& value) { SetNotificationId(std::move(value)); return *this;}
    inline EvictFilesFailingUploadResult& WithNotificationId(const char* value) { SetNotificationId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline EvictFilesFailingUploadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline EvictFilesFailingUploadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline EvictFilesFailingUploadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_notificationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
