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
    AWS_STORAGEGATEWAY_API RefreshCacheResult();
    AWS_STORAGEGATEWAY_API RefreshCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API RefreshCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }

    
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARN = value; }

    
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARN = std::move(value); }

    
    inline void SetFileShareARN(const char* value) { m_fileShareARN.assign(value); }

    
    inline RefreshCacheResult& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}

    
    inline RefreshCacheResult& WithFileShareARN(Aws::String&& value) { SetFileShareARN(std::move(value)); return *this;}

    
    inline RefreshCacheResult& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}


    
    inline const Aws::String& GetNotificationId() const{ return m_notificationId; }

    
    inline void SetNotificationId(const Aws::String& value) { m_notificationId = value; }

    
    inline void SetNotificationId(Aws::String&& value) { m_notificationId = std::move(value); }

    
    inline void SetNotificationId(const char* value) { m_notificationId.assign(value); }

    
    inline RefreshCacheResult& WithNotificationId(const Aws::String& value) { SetNotificationId(value); return *this;}

    
    inline RefreshCacheResult& WithNotificationId(Aws::String&& value) { SetNotificationId(std::move(value)); return *this;}

    
    inline RefreshCacheResult& WithNotificationId(const char* value) { SetNotificationId(value); return *this;}

  private:

    Aws::String m_fileShareARN;

    Aws::String m_notificationId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
