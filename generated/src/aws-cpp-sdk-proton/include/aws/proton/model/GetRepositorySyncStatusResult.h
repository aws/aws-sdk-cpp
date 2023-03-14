/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/RepositorySyncAttempt.h>
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
namespace Proton
{
namespace Model
{
  class GetRepositorySyncStatusResult
  {
  public:
    AWS_PROTON_API GetRepositorySyncStatusResult();
    AWS_PROTON_API GetRepositorySyncStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API GetRepositorySyncStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The repository sync status detail data that's returned by Proton.</p>
     */
    inline const RepositorySyncAttempt& GetLatestSync() const{ return m_latestSync; }

    /**
     * <p>The repository sync status detail data that's returned by Proton.</p>
     */
    inline void SetLatestSync(const RepositorySyncAttempt& value) { m_latestSync = value; }

    /**
     * <p>The repository sync status detail data that's returned by Proton.</p>
     */
    inline void SetLatestSync(RepositorySyncAttempt&& value) { m_latestSync = std::move(value); }

    /**
     * <p>The repository sync status detail data that's returned by Proton.</p>
     */
    inline GetRepositorySyncStatusResult& WithLatestSync(const RepositorySyncAttempt& value) { SetLatestSync(value); return *this;}

    /**
     * <p>The repository sync status detail data that's returned by Proton.</p>
     */
    inline GetRepositorySyncStatusResult& WithLatestSync(RepositorySyncAttempt&& value) { SetLatestSync(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRepositorySyncStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRepositorySyncStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRepositorySyncStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RepositorySyncAttempt m_latestSync;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
