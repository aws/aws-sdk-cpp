﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
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
namespace AppRegistry
{
namespace Model
{
  class DisassociateResourceResult
  {
  public:
    AWS_APPREGISTRY_API DisassociateResourceResult();
    AWS_APPREGISTRY_API DisassociateResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API DisassociateResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon resource name (ARN) that specifies the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }
    inline DisassociateResourceResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline DisassociateResourceResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline DisassociateResourceResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) that specifies the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline DisassociateResourceResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline DisassociateResourceResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline DisassociateResourceResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DisassociateResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DisassociateResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DisassociateResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;

    Aws::String m_resourceArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
