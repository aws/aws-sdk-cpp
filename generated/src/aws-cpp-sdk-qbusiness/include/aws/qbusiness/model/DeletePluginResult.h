/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{
  class DeletePluginResult
  {
  public:
    AWS_QBUSINESS_API DeletePluginResult();
    AWS_QBUSINESS_API DeletePluginResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API DeletePluginResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeletePluginResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeletePluginResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeletePluginResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
