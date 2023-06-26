/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/Component.h>
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
namespace SsmSap
{
namespace Model
{
  class GetComponentResult
  {
  public:
    AWS_SSMSAP_API GetComponentResult();
    AWS_SSMSAP_API GetComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API GetComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The component of an application registered with AWS Systems Manager for
     * SAP.</p>
     */
    inline const Component& GetComponent() const{ return m_component; }

    /**
     * <p>The component of an application registered with AWS Systems Manager for
     * SAP.</p>
     */
    inline void SetComponent(const Component& value) { m_component = value; }

    /**
     * <p>The component of an application registered with AWS Systems Manager for
     * SAP.</p>
     */
    inline void SetComponent(Component&& value) { m_component = std::move(value); }

    /**
     * <p>The component of an application registered with AWS Systems Manager for
     * SAP.</p>
     */
    inline GetComponentResult& WithComponent(const Component& value) { SetComponent(value); return *this;}

    /**
     * <p>The component of an application registered with AWS Systems Manager for
     * SAP.</p>
     */
    inline GetComponentResult& WithComponent(Component&& value) { SetComponent(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetComponentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetComponentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetComponentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Component m_component;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
