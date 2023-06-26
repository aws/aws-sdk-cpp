/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/Component.h>
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
  class CancelComponentDeploymentResult
  {
  public:
    AWS_PROTON_API CancelComponentDeploymentResult();
    AWS_PROTON_API CancelComponentDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API CancelComponentDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed data of the component with the deployment that is being
     * canceled.</p>
     */
    inline const Component& GetComponent() const{ return m_component; }

    /**
     * <p>The detailed data of the component with the deployment that is being
     * canceled.</p>
     */
    inline void SetComponent(const Component& value) { m_component = value; }

    /**
     * <p>The detailed data of the component with the deployment that is being
     * canceled.</p>
     */
    inline void SetComponent(Component&& value) { m_component = std::move(value); }

    /**
     * <p>The detailed data of the component with the deployment that is being
     * canceled.</p>
     */
    inline CancelComponentDeploymentResult& WithComponent(const Component& value) { SetComponent(value); return *this;}

    /**
     * <p>The detailed data of the component with the deployment that is being
     * canceled.</p>
     */
    inline CancelComponentDeploymentResult& WithComponent(Component&& value) { SetComponent(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CancelComponentDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CancelComponentDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CancelComponentDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Component m_component;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
