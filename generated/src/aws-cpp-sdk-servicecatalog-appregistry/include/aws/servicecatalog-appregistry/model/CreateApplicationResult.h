﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/Application.h>
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
  class CreateApplicationResult
  {
  public:
    AWS_APPREGISTRY_API CreateApplicationResult();
    AWS_APPREGISTRY_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the application.</p>
     */
    inline const Application& GetApplication() const{ return m_application; }

    /**
     * <p>Information about the application.</p>
     */
    inline void SetApplication(const Application& value) { m_application = value; }

    /**
     * <p>Information about the application.</p>
     */
    inline void SetApplication(Application&& value) { m_application = std::move(value); }

    /**
     * <p>Information about the application.</p>
     */
    inline CreateApplicationResult& WithApplication(const Application& value) { SetApplication(value); return *this;}

    /**
     * <p>Information about the application.</p>
     */
    inline CreateApplicationResult& WithApplication(Application&& value) { SetApplication(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Application m_application;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
