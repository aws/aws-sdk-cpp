/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityLake
{
namespace Model
{
  class DeleteAwsLogSourceResult
  {
  public:
    AWS_SECURITYLAKE_API DeleteAwsLogSourceResult();
    AWS_SECURITYLAKE_API DeleteAwsLogSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API DeleteAwsLogSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Deletion of the Amazon Web Services sources failed as the account is not a
     * part of the organization.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailed() const{ return m_failed; }

    /**
     * <p>Deletion of the Amazon Web Services sources failed as the account is not a
     * part of the organization.</p>
     */
    inline void SetFailed(const Aws::Vector<Aws::String>& value) { m_failed = value; }

    /**
     * <p>Deletion of the Amazon Web Services sources failed as the account is not a
     * part of the organization.</p>
     */
    inline void SetFailed(Aws::Vector<Aws::String>&& value) { m_failed = std::move(value); }

    /**
     * <p>Deletion of the Amazon Web Services sources failed as the account is not a
     * part of the organization.</p>
     */
    inline DeleteAwsLogSourceResult& WithFailed(const Aws::Vector<Aws::String>& value) { SetFailed(value); return *this;}

    /**
     * <p>Deletion of the Amazon Web Services sources failed as the account is not a
     * part of the organization.</p>
     */
    inline DeleteAwsLogSourceResult& WithFailed(Aws::Vector<Aws::String>&& value) { SetFailed(std::move(value)); return *this;}

    /**
     * <p>Deletion of the Amazon Web Services sources failed as the account is not a
     * part of the organization.</p>
     */
    inline DeleteAwsLogSourceResult& AddFailed(const Aws::String& value) { m_failed.push_back(value); return *this; }

    /**
     * <p>Deletion of the Amazon Web Services sources failed as the account is not a
     * part of the organization.</p>
     */
    inline DeleteAwsLogSourceResult& AddFailed(Aws::String&& value) { m_failed.push_back(std::move(value)); return *this; }

    /**
     * <p>Deletion of the Amazon Web Services sources failed as the account is not a
     * part of the organization.</p>
     */
    inline DeleteAwsLogSourceResult& AddFailed(const char* value) { m_failed.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteAwsLogSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteAwsLogSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteAwsLogSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_failed;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
