/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/AppRegistryConfiguration.h>
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
  class GetConfigurationResult
  {
  public:
    AWS_APPREGISTRY_API GetConfigurationResult();
    AWS_APPREGISTRY_API GetConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API GetConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Retrieves <code>TagKey</code> configuration from an account. </p>
     */
    inline const AppRegistryConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p> Retrieves <code>TagKey</code> configuration from an account. </p>
     */
    inline void SetConfiguration(const AppRegistryConfiguration& value) { m_configuration = value; }

    /**
     * <p> Retrieves <code>TagKey</code> configuration from an account. </p>
     */
    inline void SetConfiguration(AppRegistryConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p> Retrieves <code>TagKey</code> configuration from an account. </p>
     */
    inline GetConfigurationResult& WithConfiguration(const AppRegistryConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p> Retrieves <code>TagKey</code> configuration from an account. </p>
     */
    inline GetConfigurationResult& WithConfiguration(AppRegistryConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AppRegistryConfiguration m_configuration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
