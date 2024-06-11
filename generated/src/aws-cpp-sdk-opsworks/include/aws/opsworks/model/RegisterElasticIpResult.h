﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>RegisterElasticIp</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterElasticIpResult">AWS
   * API Reference</a></p>
   */
  class RegisterElasticIpResult
  {
  public:
    AWS_OPSWORKS_API RegisterElasticIpResult();
    AWS_OPSWORKS_API RegisterElasticIpResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API RegisterElasticIpResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Elastic IP address.</p>
     */
    inline const Aws::String& GetElasticIp() const{ return m_elasticIp; }
    inline void SetElasticIp(const Aws::String& value) { m_elasticIp = value; }
    inline void SetElasticIp(Aws::String&& value) { m_elasticIp = std::move(value); }
    inline void SetElasticIp(const char* value) { m_elasticIp.assign(value); }
    inline RegisterElasticIpResult& WithElasticIp(const Aws::String& value) { SetElasticIp(value); return *this;}
    inline RegisterElasticIpResult& WithElasticIp(Aws::String&& value) { SetElasticIp(std::move(value)); return *this;}
    inline RegisterElasticIpResult& WithElasticIp(const char* value) { SetElasticIp(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RegisterElasticIpResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RegisterElasticIpResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RegisterElasticIpResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_elasticIp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
