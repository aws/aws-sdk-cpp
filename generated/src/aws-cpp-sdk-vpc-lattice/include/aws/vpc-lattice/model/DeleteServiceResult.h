/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/ServiceStatus.h>
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
namespace VPCLattice
{
namespace Model
{
  class DeleteServiceResult
  {
  public:
    AWS_VPCLATTICE_API DeleteServiceResult();
    AWS_VPCLATTICE_API DeleteServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API DeleteServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline DeleteServiceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline DeleteServiceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline DeleteServiceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline DeleteServiceResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline DeleteServiceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline DeleteServiceResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline DeleteServiceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline DeleteServiceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline DeleteServiceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status. You can retry the operation if the status is
     * <code>DELETE_FAILED</code>. However, if you retry it while the status is
     * <code>DELETE_IN_PROGRESS</code>, the status doesn't change.</p>
     */
    inline const ServiceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status. You can retry the operation if the status is
     * <code>DELETE_FAILED</code>. However, if you retry it while the status is
     * <code>DELETE_IN_PROGRESS</code>, the status doesn't change.</p>
     */
    inline void SetStatus(const ServiceStatus& value) { m_status = value; }

    /**
     * <p>The status. You can retry the operation if the status is
     * <code>DELETE_FAILED</code>. However, if you retry it while the status is
     * <code>DELETE_IN_PROGRESS</code>, the status doesn't change.</p>
     */
    inline void SetStatus(ServiceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status. You can retry the operation if the status is
     * <code>DELETE_FAILED</code>. However, if you retry it while the status is
     * <code>DELETE_IN_PROGRESS</code>, the status doesn't change.</p>
     */
    inline DeleteServiceResult& WithStatus(const ServiceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status. You can retry the operation if the status is
     * <code>DELETE_FAILED</code>. However, if you retry it while the status is
     * <code>DELETE_IN_PROGRESS</code>, the status doesn't change.</p>
     */
    inline DeleteServiceResult& WithStatus(ServiceStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteServiceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteServiceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteServiceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_name;

    ServiceStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
