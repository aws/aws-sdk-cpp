/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{
  class GetSoftwareUpdatesResult
  {
  public:
    AWS_SNOWBALL_API GetSoftwareUpdatesResult();
    AWS_SNOWBALL_API GetSoftwareUpdatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API GetSoftwareUpdatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon S3 presigned URL for the update file associated with the specified
     * <code>JobId</code> value. The software update will be available for 2 days after
     * this request is made. To access an update after the 2 days have passed, you'll
     * have to make another call to <code>GetSoftwareUpdates</code>.</p>
     */
    inline const Aws::String& GetUpdatesURI() const{ return m_updatesURI; }

    /**
     * <p>The Amazon S3 presigned URL for the update file associated with the specified
     * <code>JobId</code> value. The software update will be available for 2 days after
     * this request is made. To access an update after the 2 days have passed, you'll
     * have to make another call to <code>GetSoftwareUpdates</code>.</p>
     */
    inline void SetUpdatesURI(const Aws::String& value) { m_updatesURI = value; }

    /**
     * <p>The Amazon S3 presigned URL for the update file associated with the specified
     * <code>JobId</code> value. The software update will be available for 2 days after
     * this request is made. To access an update after the 2 days have passed, you'll
     * have to make another call to <code>GetSoftwareUpdates</code>.</p>
     */
    inline void SetUpdatesURI(Aws::String&& value) { m_updatesURI = std::move(value); }

    /**
     * <p>The Amazon S3 presigned URL for the update file associated with the specified
     * <code>JobId</code> value. The software update will be available for 2 days after
     * this request is made. To access an update after the 2 days have passed, you'll
     * have to make another call to <code>GetSoftwareUpdates</code>.</p>
     */
    inline void SetUpdatesURI(const char* value) { m_updatesURI.assign(value); }

    /**
     * <p>The Amazon S3 presigned URL for the update file associated with the specified
     * <code>JobId</code> value. The software update will be available for 2 days after
     * this request is made. To access an update after the 2 days have passed, you'll
     * have to make another call to <code>GetSoftwareUpdates</code>.</p>
     */
    inline GetSoftwareUpdatesResult& WithUpdatesURI(const Aws::String& value) { SetUpdatesURI(value); return *this;}

    /**
     * <p>The Amazon S3 presigned URL for the update file associated with the specified
     * <code>JobId</code> value. The software update will be available for 2 days after
     * this request is made. To access an update after the 2 days have passed, you'll
     * have to make another call to <code>GetSoftwareUpdates</code>.</p>
     */
    inline GetSoftwareUpdatesResult& WithUpdatesURI(Aws::String&& value) { SetUpdatesURI(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 presigned URL for the update file associated with the specified
     * <code>JobId</code> value. The software update will be available for 2 days after
     * this request is made. To access an update after the 2 days have passed, you'll
     * have to make another call to <code>GetSoftwareUpdates</code>.</p>
     */
    inline GetSoftwareUpdatesResult& WithUpdatesURI(const char* value) { SetUpdatesURI(value); return *this;}

  private:

    Aws::String m_updatesURI;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
