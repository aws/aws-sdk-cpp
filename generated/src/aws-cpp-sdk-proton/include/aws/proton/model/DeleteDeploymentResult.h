/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/Deployment.h>
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
  class DeleteDeploymentResult
  {
  public:
    AWS_PROTON_API DeleteDeploymentResult();
    AWS_PROTON_API DeleteDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API DeleteDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed data of the deployment being deleted.</p>
     */
    inline const Deployment& GetDeployment() const{ return m_deployment; }

    /**
     * <p>The detailed data of the deployment being deleted.</p>
     */
    inline void SetDeployment(const Deployment& value) { m_deployment = value; }

    /**
     * <p>The detailed data of the deployment being deleted.</p>
     */
    inline void SetDeployment(Deployment&& value) { m_deployment = std::move(value); }

    /**
     * <p>The detailed data of the deployment being deleted.</p>
     */
    inline DeleteDeploymentResult& WithDeployment(const Deployment& value) { SetDeployment(value); return *this;}

    /**
     * <p>The detailed data of the deployment being deleted.</p>
     */
    inline DeleteDeploymentResult& WithDeployment(Deployment&& value) { SetDeployment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Deployment m_deployment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
