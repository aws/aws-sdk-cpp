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
  class GetSnowballUsageResult
  {
  public:
    AWS_SNOWBALL_API GetSnowballUsageResult();
    AWS_SNOWBALL_API GetSnowballUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API GetSnowballUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The service limit for number of Snow devices this account can have at once.
     * The default service limit is 1 (one).</p>
     */
    inline int GetSnowballLimit() const{ return m_snowballLimit; }

    /**
     * <p>The service limit for number of Snow devices this account can have at once.
     * The default service limit is 1 (one).</p>
     */
    inline void SetSnowballLimit(int value) { m_snowballLimit = value; }

    /**
     * <p>The service limit for number of Snow devices this account can have at once.
     * The default service limit is 1 (one).</p>
     */
    inline GetSnowballUsageResult& WithSnowballLimit(int value) { SetSnowballLimit(value); return *this;}


    /**
     * <p>The number of Snow devices that this account is currently using.</p>
     */
    inline int GetSnowballsInUse() const{ return m_snowballsInUse; }

    /**
     * <p>The number of Snow devices that this account is currently using.</p>
     */
    inline void SetSnowballsInUse(int value) { m_snowballsInUse = value; }

    /**
     * <p>The number of Snow devices that this account is currently using.</p>
     */
    inline GetSnowballUsageResult& WithSnowballsInUse(int value) { SetSnowballsInUse(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSnowballUsageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSnowballUsageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSnowballUsageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_snowballLimit;

    int m_snowballsInUse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
