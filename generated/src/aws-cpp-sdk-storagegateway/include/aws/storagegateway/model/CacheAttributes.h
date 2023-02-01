/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>

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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>The refresh cache information for the file share or FSx file
   * systems.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CacheAttributes">AWS
   * API Reference</a></p>
   */
  class CacheAttributes
  {
  public:
    AWS_STORAGEGATEWAY_API CacheAttributes();
    AWS_STORAGEGATEWAY_API CacheAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API CacheAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Refreshes a file share's cache by using Time To Live (TTL). TTL is the length
     * of time since the last refresh after which access to the directory would cause
     * the file gateway to first refresh that directory's contents from the Amazon S3
     * bucket or Amazon FSx file system. The TTL duration is in seconds.</p> <p>Valid
     * Values:0, 300 to 2,592,000 seconds (5 minutes to 30 days)</p>
     */
    inline int GetCacheStaleTimeoutInSeconds() const{ return m_cacheStaleTimeoutInSeconds; }

    /**
     * <p>Refreshes a file share's cache by using Time To Live (TTL). TTL is the length
     * of time since the last refresh after which access to the directory would cause
     * the file gateway to first refresh that directory's contents from the Amazon S3
     * bucket or Amazon FSx file system. The TTL duration is in seconds.</p> <p>Valid
     * Values:0, 300 to 2,592,000 seconds (5 minutes to 30 days)</p>
     */
    inline bool CacheStaleTimeoutInSecondsHasBeenSet() const { return m_cacheStaleTimeoutInSecondsHasBeenSet; }

    /**
     * <p>Refreshes a file share's cache by using Time To Live (TTL). TTL is the length
     * of time since the last refresh after which access to the directory would cause
     * the file gateway to first refresh that directory's contents from the Amazon S3
     * bucket or Amazon FSx file system. The TTL duration is in seconds.</p> <p>Valid
     * Values:0, 300 to 2,592,000 seconds (5 minutes to 30 days)</p>
     */
    inline void SetCacheStaleTimeoutInSeconds(int value) { m_cacheStaleTimeoutInSecondsHasBeenSet = true; m_cacheStaleTimeoutInSeconds = value; }

    /**
     * <p>Refreshes a file share's cache by using Time To Live (TTL). TTL is the length
     * of time since the last refresh after which access to the directory would cause
     * the file gateway to first refresh that directory's contents from the Amazon S3
     * bucket or Amazon FSx file system. The TTL duration is in seconds.</p> <p>Valid
     * Values:0, 300 to 2,592,000 seconds (5 minutes to 30 days)</p>
     */
    inline CacheAttributes& WithCacheStaleTimeoutInSeconds(int value) { SetCacheStaleTimeoutInSeconds(value); return *this;}

  private:

    int m_cacheStaleTimeoutInSeconds;
    bool m_cacheStaleTimeoutInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
