/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/Environment.h>
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
  class CancelEnvironmentDeploymentResult
  {
  public:
    AWS_PROTON_API CancelEnvironmentDeploymentResult();
    AWS_PROTON_API CancelEnvironmentDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API CancelEnvironmentDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The environment summary data that's returned by Proton.</p>
     */
    inline const Environment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment summary data that's returned by Proton.</p>
     */
    inline void SetEnvironment(const Environment& value) { m_environment = value; }

    /**
     * <p>The environment summary data that's returned by Proton.</p>
     */
    inline void SetEnvironment(Environment&& value) { m_environment = std::move(value); }

    /**
     * <p>The environment summary data that's returned by Proton.</p>
     */
    inline CancelEnvironmentDeploymentResult& WithEnvironment(const Environment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment summary data that's returned by Proton.</p>
     */
    inline CancelEnvironmentDeploymentResult& WithEnvironment(Environment&& value) { SetEnvironment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CancelEnvironmentDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CancelEnvironmentDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CancelEnvironmentDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Environment m_environment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
