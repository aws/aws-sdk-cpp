/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migration-hub-refactor-spaces/model/RouteState.h>
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
  class UpdateRouteResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API UpdateRouteResult();
    AWS_MIGRATIONHUBREFACTORSPACES_API UpdateRouteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API UpdateRouteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ID of the application in which the route is being updated. </p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline UpdateRouteResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline UpdateRouteResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline UpdateRouteResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the route. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateRouteResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateRouteResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateRouteResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A timestamp that indicates when the route was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }
    inline UpdateRouteResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline UpdateRouteResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the route. </p>
     */
    inline const Aws::String& GetRouteId() const{ return m_routeId; }
    inline void SetRouteId(const Aws::String& value) { m_routeId = value; }
    inline void SetRouteId(Aws::String&& value) { m_routeId = std::move(value); }
    inline void SetRouteId(const char* value) { m_routeId.assign(value); }
    inline UpdateRouteResult& WithRouteId(const Aws::String& value) { SetRouteId(value); return *this;}
    inline UpdateRouteResult& WithRouteId(Aws::String&& value) { SetRouteId(std::move(value)); return *this;}
    inline UpdateRouteResult& WithRouteId(const char* value) { SetRouteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of service in which the route was created. Traffic that matches this
     * route is forwarded to this service. </p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline void SetServiceId(const Aws::String& value) { m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceId.assign(value); }
    inline UpdateRouteResult& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline UpdateRouteResult& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline UpdateRouteResult& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current state of the route. </p>
     */
    inline const RouteState& GetState() const{ return m_state; }
    inline void SetState(const RouteState& value) { m_state = value; }
    inline void SetState(RouteState&& value) { m_state = std::move(value); }
    inline UpdateRouteResult& WithState(const RouteState& value) { SetState(value); return *this;}
    inline UpdateRouteResult& WithState(RouteState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateRouteResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateRouteResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateRouteResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;

    Aws::String m_arn;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_routeId;

    Aws::String m_serviceId;

    RouteState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
