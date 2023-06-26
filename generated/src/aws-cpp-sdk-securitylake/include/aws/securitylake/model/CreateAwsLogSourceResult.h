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
  class CreateAwsLogSourceResult
  {
  public:
    AWS_SECURITYLAKE_API CreateAwsLogSourceResult();
    AWS_SECURITYLAKE_API CreateAwsLogSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API CreateAwsLogSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists all accounts in which enabling a natively supported Amazon Web Service
     * as a Security Lake source failed. The failure occurred as these accounts are not
     * part of an organization.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailed() const{ return m_failed; }

    /**
     * <p>Lists all accounts in which enabling a natively supported Amazon Web Service
     * as a Security Lake source failed. The failure occurred as these accounts are not
     * part of an organization.</p>
     */
    inline void SetFailed(const Aws::Vector<Aws::String>& value) { m_failed = value; }

    /**
     * <p>Lists all accounts in which enabling a natively supported Amazon Web Service
     * as a Security Lake source failed. The failure occurred as these accounts are not
     * part of an organization.</p>
     */
    inline void SetFailed(Aws::Vector<Aws::String>&& value) { m_failed = std::move(value); }

    /**
     * <p>Lists all accounts in which enabling a natively supported Amazon Web Service
     * as a Security Lake source failed. The failure occurred as these accounts are not
     * part of an organization.</p>
     */
    inline CreateAwsLogSourceResult& WithFailed(const Aws::Vector<Aws::String>& value) { SetFailed(value); return *this;}

    /**
     * <p>Lists all accounts in which enabling a natively supported Amazon Web Service
     * as a Security Lake source failed. The failure occurred as these accounts are not
     * part of an organization.</p>
     */
    inline CreateAwsLogSourceResult& WithFailed(Aws::Vector<Aws::String>&& value) { SetFailed(std::move(value)); return *this;}

    /**
     * <p>Lists all accounts in which enabling a natively supported Amazon Web Service
     * as a Security Lake source failed. The failure occurred as these accounts are not
     * part of an organization.</p>
     */
    inline CreateAwsLogSourceResult& AddFailed(const Aws::String& value) { m_failed.push_back(value); return *this; }

    /**
     * <p>Lists all accounts in which enabling a natively supported Amazon Web Service
     * as a Security Lake source failed. The failure occurred as these accounts are not
     * part of an organization.</p>
     */
    inline CreateAwsLogSourceResult& AddFailed(Aws::String&& value) { m_failed.push_back(std::move(value)); return *this; }

    /**
     * <p>Lists all accounts in which enabling a natively supported Amazon Web Service
     * as a Security Lake source failed. The failure occurred as these accounts are not
     * part of an organization.</p>
     */
    inline CreateAwsLogSourceResult& AddFailed(const char* value) { m_failed.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAwsLogSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAwsLogSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAwsLogSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_failed;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
