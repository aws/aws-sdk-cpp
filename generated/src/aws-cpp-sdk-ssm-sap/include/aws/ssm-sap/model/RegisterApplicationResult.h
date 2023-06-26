/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/Application.h>
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
  class RegisterApplicationResult
  {
  public:
    AWS_SSMSAP_API RegisterApplicationResult();
    AWS_SSMSAP_API RegisterApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API RegisterApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application registered with AWS Systems Manager for SAP.</p>
     */
    inline const Application& GetApplication() const{ return m_application; }

    /**
     * <p>The application registered with AWS Systems Manager for SAP.</p>
     */
    inline void SetApplication(const Application& value) { m_application = value; }

    /**
     * <p>The application registered with AWS Systems Manager for SAP.</p>
     */
    inline void SetApplication(Application&& value) { m_application = std::move(value); }

    /**
     * <p>The application registered with AWS Systems Manager for SAP.</p>
     */
    inline RegisterApplicationResult& WithApplication(const Application& value) { SetApplication(value); return *this;}

    /**
     * <p>The application registered with AWS Systems Manager for SAP.</p>
     */
    inline RegisterApplicationResult& WithApplication(Application&& value) { SetApplication(std::move(value)); return *this;}


    /**
     * <p>The ID of the operation.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The ID of the operation.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }

    /**
     * <p>The ID of the operation.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }

    /**
     * <p>The ID of the operation.</p>
     */
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }

    /**
     * <p>The ID of the operation.</p>
     */
    inline RegisterApplicationResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The ID of the operation.</p>
     */
    inline RegisterApplicationResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the operation.</p>
     */
    inline RegisterApplicationResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RegisterApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RegisterApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RegisterApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Application m_application;

    Aws::String m_operationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
