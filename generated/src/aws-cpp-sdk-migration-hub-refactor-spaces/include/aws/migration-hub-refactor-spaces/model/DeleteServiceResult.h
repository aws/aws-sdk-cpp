/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceState.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{
  class DeleteServiceResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API DeleteServiceResult();
    AWS_MIGRATIONHUBREFACTORSPACES_API DeleteServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API DeleteServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the application that the service is in.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline DeleteServiceResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline DeleteServiceResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline DeleteServiceResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DeleteServiceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeleteServiceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeleteServiceResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }
    inline DeleteServiceResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline DeleteServiceResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline DeleteServiceResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the service was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }
    inline DeleteServiceResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline DeleteServiceResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DeleteServiceResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeleteServiceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeleteServiceResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline void SetServiceId(const Aws::String& value) { m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceId.assign(value); }
    inline DeleteServiceResult& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline DeleteServiceResult& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline DeleteServiceResult& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the service. </p>
     */
    inline const ServiceState& GetState() const{ return m_state; }
    inline void SetState(const ServiceState& value) { m_state = value; }
    inline void SetState(ServiceState&& value) { m_state = std::move(value); }
    inline DeleteServiceResult& WithState(const ServiceState& value) { SetState(value); return *this;}
    inline DeleteServiceResult& WithState(ServiceState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteServiceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteServiceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteServiceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;

    Aws::String m_arn;

    Aws::String m_environmentId;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_name;

    Aws::String m_serviceId;

    ServiceState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
