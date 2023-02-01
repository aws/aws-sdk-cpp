/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migration-hub-refactor-spaces/model/RouteType.h>
#include <aws/migration-hub-refactor-spaces/model/RouteState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/migration-hub-refactor-spaces/model/UriPathRouteInput.h>
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
  class CreateRouteResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateRouteResult();
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateRouteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateRouteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the application in which the route is created.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application in which the route is created.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The ID of the application in which the route is created.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The ID of the application in which the route is created.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The ID of the application in which the route is created.</p>
     */
    inline CreateRouteResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application in which the route is created.</p>
     */
    inline CreateRouteResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application in which the route is created.</p>
     */
    inline CreateRouteResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the route. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the route. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the route. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the route. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the route. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline CreateRouteResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the route. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline CreateRouteResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the route. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline CreateRouteResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the route creator.</p>
     */
    inline const Aws::String& GetCreatedByAccountId() const{ return m_createdByAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the route creator.</p>
     */
    inline void SetCreatedByAccountId(const Aws::String& value) { m_createdByAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the route creator.</p>
     */
    inline void SetCreatedByAccountId(Aws::String&& value) { m_createdByAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the route creator.</p>
     */
    inline void SetCreatedByAccountId(const char* value) { m_createdByAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the route creator.</p>
     */
    inline CreateRouteResult& WithCreatedByAccountId(const Aws::String& value) { SetCreatedByAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the route creator.</p>
     */
    inline CreateRouteResult& WithCreatedByAccountId(Aws::String&& value) { SetCreatedByAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the route creator.</p>
     */
    inline CreateRouteResult& WithCreatedByAccountId(const char* value) { SetCreatedByAccountId(value); return *this;}


    /**
     * <p>A timestamp that indicates when the route is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>A timestamp that indicates when the route is created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>A timestamp that indicates when the route is created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the route is created.</p>
     */
    inline CreateRouteResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the route is created.</p>
     */
    inline CreateRouteResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the route was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>A timestamp that indicates when the route was last updated. </p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>A timestamp that indicates when the route was last updated. </p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the route was last updated. </p>
     */
    inline CreateRouteResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the route was last updated. </p>
     */
    inline CreateRouteResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline CreateRouteResult& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline CreateRouteResult& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline CreateRouteResult& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>The unique identifier of the route.</p>
     */
    inline const Aws::String& GetRouteId() const{ return m_routeId; }

    /**
     * <p>The unique identifier of the route.</p>
     */
    inline void SetRouteId(const Aws::String& value) { m_routeId = value; }

    /**
     * <p>The unique identifier of the route.</p>
     */
    inline void SetRouteId(Aws::String&& value) { m_routeId = std::move(value); }

    /**
     * <p>The unique identifier of the route.</p>
     */
    inline void SetRouteId(const char* value) { m_routeId.assign(value); }

    /**
     * <p>The unique identifier of the route.</p>
     */
    inline CreateRouteResult& WithRouteId(const Aws::String& value) { SetRouteId(value); return *this;}

    /**
     * <p>The unique identifier of the route.</p>
     */
    inline CreateRouteResult& WithRouteId(Aws::String&& value) { SetRouteId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the route.</p>
     */
    inline CreateRouteResult& WithRouteId(const char* value) { SetRouteId(value); return *this;}


    /**
     * <p>The route type of the route.</p>
     */
    inline const RouteType& GetRouteType() const{ return m_routeType; }

    /**
     * <p>The route type of the route.</p>
     */
    inline void SetRouteType(const RouteType& value) { m_routeType = value; }

    /**
     * <p>The route type of the route.</p>
     */
    inline void SetRouteType(RouteType&& value) { m_routeType = std::move(value); }

    /**
     * <p>The route type of the route.</p>
     */
    inline CreateRouteResult& WithRouteType(const RouteType& value) { SetRouteType(value); return *this;}

    /**
     * <p>The route type of the route.</p>
     */
    inline CreateRouteResult& WithRouteType(RouteType&& value) { SetRouteType(std::move(value)); return *this;}


    /**
     * <p>The ID of service in which the route is created. Traffic that matches this
     * route is forwarded to this service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of service in which the route is created. Traffic that matches this
     * route is forwarded to this service.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceId = value; }

    /**
     * <p>The ID of service in which the route is created. Traffic that matches this
     * route is forwarded to this service.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceId = std::move(value); }

    /**
     * <p>The ID of service in which the route is created. Traffic that matches this
     * route is forwarded to this service.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceId.assign(value); }

    /**
     * <p>The ID of service in which the route is created. Traffic that matches this
     * route is forwarded to this service.</p>
     */
    inline CreateRouteResult& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of service in which the route is created. Traffic that matches this
     * route is forwarded to this service.</p>
     */
    inline CreateRouteResult& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of service in which the route is created. Traffic that matches this
     * route is forwarded to this service.</p>
     */
    inline CreateRouteResult& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The current state of the route. Activation state only allows
     * <code>ACTIVE</code> or <code>INACTIVE</code> as user inputs. <code>FAILED</code>
     * is a route state that is system generated.</p>
     */
    inline const RouteState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the route. Activation state only allows
     * <code>ACTIVE</code> or <code>INACTIVE</code> as user inputs. <code>FAILED</code>
     * is a route state that is system generated.</p>
     */
    inline void SetState(const RouteState& value) { m_state = value; }

    /**
     * <p>The current state of the route. Activation state only allows
     * <code>ACTIVE</code> or <code>INACTIVE</code> as user inputs. <code>FAILED</code>
     * is a route state that is system generated.</p>
     */
    inline void SetState(RouteState&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the route. Activation state only allows
     * <code>ACTIVE</code> or <code>INACTIVE</code> as user inputs. <code>FAILED</code>
     * is a route state that is system generated.</p>
     */
    inline CreateRouteResult& WithState(const RouteState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the route. Activation state only allows
     * <code>ACTIVE</code> or <code>INACTIVE</code> as user inputs. <code>FAILED</code>
     * is a route state that is system generated.</p>
     */
    inline CreateRouteResult& WithState(RouteState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags assigned to the created route. A tag is a label that you assign to
     * an Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the created route. A tag is a label that you assign to
     * an Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags assigned to the created route. A tag is a label that you assign to
     * an Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the created route. A tag is a label that you assign to
     * an Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateRouteResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the created route. A tag is a label that you assign to
     * an Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateRouteResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the created route. A tag is a label that you assign to
     * an Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateRouteResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the created route. A tag is a label that you assign to
     * an Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateRouteResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the created route. A tag is a label that you assign to
     * an Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateRouteResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the created route. A tag is a label that you assign to
     * an Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateRouteResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the created route. A tag is a label that you assign to
     * an Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateRouteResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the created route. A tag is a label that you assign to
     * an Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateRouteResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the created route. A tag is a label that you assign to
     * an Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateRouteResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>Configuration for the URI path route type. </p>
     */
    inline const UriPathRouteInput& GetUriPathRoute() const{ return m_uriPathRoute; }

    /**
     * <p>Configuration for the URI path route type. </p>
     */
    inline void SetUriPathRoute(const UriPathRouteInput& value) { m_uriPathRoute = value; }

    /**
     * <p>Configuration for the URI path route type. </p>
     */
    inline void SetUriPathRoute(UriPathRouteInput&& value) { m_uriPathRoute = std::move(value); }

    /**
     * <p>Configuration for the URI path route type. </p>
     */
    inline CreateRouteResult& WithUriPathRoute(const UriPathRouteInput& value) { SetUriPathRoute(value); return *this;}

    /**
     * <p>Configuration for the URI path route type. </p>
     */
    inline CreateRouteResult& WithUriPathRoute(UriPathRouteInput&& value) { SetUriPathRoute(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::String m_arn;

    Aws::String m_createdByAccountId;

    Aws::Utils::DateTime m_createdTime;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_ownerAccountId;

    Aws::String m_routeId;

    RouteType m_routeType;

    Aws::String m_serviceId;

    RouteState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;

    UriPathRouteInput m_uriPathRoute;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
