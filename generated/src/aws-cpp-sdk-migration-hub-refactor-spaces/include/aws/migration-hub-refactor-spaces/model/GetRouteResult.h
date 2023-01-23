/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migration-hub-refactor-spaces/model/ErrorResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/migration-hub-refactor-spaces/model/RouteType.h>
#include <aws/migration-hub-refactor-spaces/model/RouteState.h>
#include <aws/migration-hub-refactor-spaces/model/HttpMethod.h>
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
  class GetRouteResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API GetRouteResult();
    AWS_MIGRATIONHUBREFACTORSPACES_API GetRouteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API GetRouteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the application that the route belongs to. </p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application that the route belongs to. </p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The ID of the application that the route belongs to. </p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The ID of the application that the route belongs to. </p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The ID of the application that the route belongs to. </p>
     */
    inline GetRouteResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application that the route belongs to. </p>
     */
    inline GetRouteResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application that the route belongs to. </p>
     */
    inline GetRouteResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the route.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the route.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the route.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the route.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the route.</p>
     */
    inline GetRouteResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the route.</p>
     */
    inline GetRouteResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the route.</p>
     */
    inline GetRouteResult& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline GetRouteResult& WithCreatedByAccountId(const Aws::String& value) { SetCreatedByAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the route creator.</p>
     */
    inline GetRouteResult& WithCreatedByAccountId(Aws::String&& value) { SetCreatedByAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the route creator.</p>
     */
    inline GetRouteResult& WithCreatedByAccountId(const char* value) { SetCreatedByAccountId(value); return *this;}


    /**
     * <p>The timestamp of when the route is created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The timestamp of when the route is created. </p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>The timestamp of when the route is created. </p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>The timestamp of when the route is created. </p>
     */
    inline GetRouteResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The timestamp of when the route is created. </p>
     */
    inline GetRouteResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>Unique identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>Unique identifier of the environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>Unique identifier of the environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>Unique identifier of the environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>Unique identifier of the environment.</p>
     */
    inline GetRouteResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>Unique identifier of the environment.</p>
     */
    inline GetRouteResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the environment.</p>
     */
    inline GetRouteResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>Any error associated with the route resource. </p>
     */
    inline const ErrorResponse& GetError() const{ return m_error; }

    /**
     * <p>Any error associated with the route resource. </p>
     */
    inline void SetError(const ErrorResponse& value) { m_error = value; }

    /**
     * <p>Any error associated with the route resource. </p>
     */
    inline void SetError(ErrorResponse&& value) { m_error = std::move(value); }

    /**
     * <p>Any error associated with the route resource. </p>
     */
    inline GetRouteResult& WithError(const ErrorResponse& value) { SetError(value); return *this;}

    /**
     * <p>Any error associated with the route resource. </p>
     */
    inline GetRouteResult& WithError(ErrorResponse&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>Indicates whether to match all subpaths of the given source path. If this
     * value is <code>false</code>, requests must match the source path exactly before
     * they are forwarded to this route's service. </p>
     */
    inline bool GetIncludeChildPaths() const{ return m_includeChildPaths; }

    /**
     * <p>Indicates whether to match all subpaths of the given source path. If this
     * value is <code>false</code>, requests must match the source path exactly before
     * they are forwarded to this route's service. </p>
     */
    inline void SetIncludeChildPaths(bool value) { m_includeChildPaths = value; }

    /**
     * <p>Indicates whether to match all subpaths of the given source path. If this
     * value is <code>false</code>, requests must match the source path exactly before
     * they are forwarded to this route's service. </p>
     */
    inline GetRouteResult& WithIncludeChildPaths(bool value) { SetIncludeChildPaths(value); return *this;}


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
    inline GetRouteResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the route was last updated. </p>
     */
    inline GetRouteResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline const Aws::Vector<HttpMethod>& GetMethods() const{ return m_methods; }

    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline void SetMethods(const Aws::Vector<HttpMethod>& value) { m_methods = value; }

    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline void SetMethods(Aws::Vector<HttpMethod>&& value) { m_methods = std::move(value); }

    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline GetRouteResult& WithMethods(const Aws::Vector<HttpMethod>& value) { SetMethods(value); return *this;}

    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline GetRouteResult& WithMethods(Aws::Vector<HttpMethod>&& value) { SetMethods(std::move(value)); return *this;}

    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline GetRouteResult& AddMethods(const HttpMethod& value) { m_methods.push_back(value); return *this; }

    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline GetRouteResult& AddMethods(HttpMethod&& value) { m_methods.push_back(std::move(value)); return *this; }


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
    inline GetRouteResult& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline GetRouteResult& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline GetRouteResult& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPathResourceToId() const{ return m_pathResourceToId; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline void SetPathResourceToId(const Aws::Map<Aws::String, Aws::String>& value) { m_pathResourceToId = value; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline void SetPathResourceToId(Aws::Map<Aws::String, Aws::String>&& value) { m_pathResourceToId = std::move(value); }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline GetRouteResult& WithPathResourceToId(const Aws::Map<Aws::String, Aws::String>& value) { SetPathResourceToId(value); return *this;}

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline GetRouteResult& WithPathResourceToId(Aws::Map<Aws::String, Aws::String>&& value) { SetPathResourceToId(std::move(value)); return *this;}

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline GetRouteResult& AddPathResourceToId(const Aws::String& key, const Aws::String& value) { m_pathResourceToId.emplace(key, value); return *this; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline GetRouteResult& AddPathResourceToId(Aws::String&& key, const Aws::String& value) { m_pathResourceToId.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline GetRouteResult& AddPathResourceToId(const Aws::String& key, Aws::String&& value) { m_pathResourceToId.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline GetRouteResult& AddPathResourceToId(Aws::String&& key, Aws::String&& value) { m_pathResourceToId.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline GetRouteResult& AddPathResourceToId(const char* key, Aws::String&& value) { m_pathResourceToId.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline GetRouteResult& AddPathResourceToId(Aws::String&& key, const char* value) { m_pathResourceToId.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline GetRouteResult& AddPathResourceToId(const char* key, const char* value) { m_pathResourceToId.emplace(key, value); return *this; }


    /**
     * <p>The unique identifier of the route.</p> <p> <b>DEFAULT</b>: All traffic that
     * does not match another route is forwarded to the default route. Applications
     * must have a default route before any other routes can be created.</p> <p>
     * <b>URI_PATH</b>: A route that is based on a URI path.</p>
     */
    inline const Aws::String& GetRouteId() const{ return m_routeId; }

    /**
     * <p>The unique identifier of the route.</p> <p> <b>DEFAULT</b>: All traffic that
     * does not match another route is forwarded to the default route. Applications
     * must have a default route before any other routes can be created.</p> <p>
     * <b>URI_PATH</b>: A route that is based on a URI path.</p>
     */
    inline void SetRouteId(const Aws::String& value) { m_routeId = value; }

    /**
     * <p>The unique identifier of the route.</p> <p> <b>DEFAULT</b>: All traffic that
     * does not match another route is forwarded to the default route. Applications
     * must have a default route before any other routes can be created.</p> <p>
     * <b>URI_PATH</b>: A route that is based on a URI path.</p>
     */
    inline void SetRouteId(Aws::String&& value) { m_routeId = std::move(value); }

    /**
     * <p>The unique identifier of the route.</p> <p> <b>DEFAULT</b>: All traffic that
     * does not match another route is forwarded to the default route. Applications
     * must have a default route before any other routes can be created.</p> <p>
     * <b>URI_PATH</b>: A route that is based on a URI path.</p>
     */
    inline void SetRouteId(const char* value) { m_routeId.assign(value); }

    /**
     * <p>The unique identifier of the route.</p> <p> <b>DEFAULT</b>: All traffic that
     * does not match another route is forwarded to the default route. Applications
     * must have a default route before any other routes can be created.</p> <p>
     * <b>URI_PATH</b>: A route that is based on a URI path.</p>
     */
    inline GetRouteResult& WithRouteId(const Aws::String& value) { SetRouteId(value); return *this;}

    /**
     * <p>The unique identifier of the route.</p> <p> <b>DEFAULT</b>: All traffic that
     * does not match another route is forwarded to the default route. Applications
     * must have a default route before any other routes can be created.</p> <p>
     * <b>URI_PATH</b>: A route that is based on a URI path.</p>
     */
    inline GetRouteResult& WithRouteId(Aws::String&& value) { SetRouteId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the route.</p> <p> <b>DEFAULT</b>: All traffic that
     * does not match another route is forwarded to the default route. Applications
     * must have a default route before any other routes can be created.</p> <p>
     * <b>URI_PATH</b>: A route that is based on a URI path.</p>
     */
    inline GetRouteResult& WithRouteId(const char* value) { SetRouteId(value); return *this;}


    /**
     * <p>The type of route.</p>
     */
    inline const RouteType& GetRouteType() const{ return m_routeType; }

    /**
     * <p>The type of route.</p>
     */
    inline void SetRouteType(const RouteType& value) { m_routeType = value; }

    /**
     * <p>The type of route.</p>
     */
    inline void SetRouteType(RouteType&& value) { m_routeType = std::move(value); }

    /**
     * <p>The type of route.</p>
     */
    inline GetRouteResult& WithRouteType(const RouteType& value) { SetRouteType(value); return *this;}

    /**
     * <p>The type of route.</p>
     */
    inline GetRouteResult& WithRouteType(RouteType&& value) { SetRouteType(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The unique identifier of the service.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceId = value; }

    /**
     * <p>The unique identifier of the service.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceId = std::move(value); }

    /**
     * <p>The unique identifier of the service.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceId.assign(value); }

    /**
     * <p>The unique identifier of the service.</p>
     */
    inline GetRouteResult& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The unique identifier of the service.</p>
     */
    inline GetRouteResult& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the service.</p>
     */
    inline GetRouteResult& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The path to use to match traffic. Paths must start with <code>/</code> and
     * are relative to the base of the application. </p>
     */
    inline const Aws::String& GetSourcePath() const{ return m_sourcePath; }

    /**
     * <p>The path to use to match traffic. Paths must start with <code>/</code> and
     * are relative to the base of the application. </p>
     */
    inline void SetSourcePath(const Aws::String& value) { m_sourcePath = value; }

    /**
     * <p>The path to use to match traffic. Paths must start with <code>/</code> and
     * are relative to the base of the application. </p>
     */
    inline void SetSourcePath(Aws::String&& value) { m_sourcePath = std::move(value); }

    /**
     * <p>The path to use to match traffic. Paths must start with <code>/</code> and
     * are relative to the base of the application. </p>
     */
    inline void SetSourcePath(const char* value) { m_sourcePath.assign(value); }

    /**
     * <p>The path to use to match traffic. Paths must start with <code>/</code> and
     * are relative to the base of the application. </p>
     */
    inline GetRouteResult& WithSourcePath(const Aws::String& value) { SetSourcePath(value); return *this;}

    /**
     * <p>The path to use to match traffic. Paths must start with <code>/</code> and
     * are relative to the base of the application. </p>
     */
    inline GetRouteResult& WithSourcePath(Aws::String&& value) { SetSourcePath(std::move(value)); return *this;}

    /**
     * <p>The path to use to match traffic. Paths must start with <code>/</code> and
     * are relative to the base of the application. </p>
     */
    inline GetRouteResult& WithSourcePath(const char* value) { SetSourcePath(value); return *this;}


    /**
     * <p>The current state of the route. </p>
     */
    inline const RouteState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the route. </p>
     */
    inline void SetState(const RouteState& value) { m_state = value; }

    /**
     * <p>The current state of the route. </p>
     */
    inline void SetState(RouteState&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the route. </p>
     */
    inline GetRouteResult& WithState(const RouteState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the route. </p>
     */
    inline GetRouteResult& WithState(RouteState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags assigned to the route. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the route. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags assigned to the route. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the route. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetRouteResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the route. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetRouteResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the route. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetRouteResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the route. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetRouteResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the route. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetRouteResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the route. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetRouteResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the route. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetRouteResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the route. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetRouteResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the route. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetRouteResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_applicationId;

    Aws::String m_arn;

    Aws::String m_createdByAccountId;

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_environmentId;

    ErrorResponse m_error;

    bool m_includeChildPaths;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::Vector<HttpMethod> m_methods;

    Aws::String m_ownerAccountId;

    Aws::Map<Aws::String, Aws::String> m_pathResourceToId;

    Aws::String m_routeId;

    RouteType m_routeType;

    Aws::String m_serviceId;

    Aws::String m_sourcePath;

    RouteState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
