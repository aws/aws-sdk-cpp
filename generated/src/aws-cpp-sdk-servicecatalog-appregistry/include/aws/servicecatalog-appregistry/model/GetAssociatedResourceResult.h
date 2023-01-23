/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/Resource.h>
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
namespace AppRegistry
{
namespace Model
{
  class GetAssociatedResourceResult
  {
  public:
    AWS_APPREGISTRY_API GetAssociatedResourceResult();
    AWS_APPREGISTRY_API GetAssociatedResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API GetAssociatedResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The resource associated with the application.</p>
     */
    inline const Resource& GetResource() const{ return m_resource; }

    /**
     * <p>The resource associated with the application.</p>
     */
    inline void SetResource(const Resource& value) { m_resource = value; }

    /**
     * <p>The resource associated with the application.</p>
     */
    inline void SetResource(Resource&& value) { m_resource = std::move(value); }

    /**
     * <p>The resource associated with the application.</p>
     */
    inline GetAssociatedResourceResult& WithResource(const Resource& value) { SetResource(value); return *this;}

    /**
     * <p>The resource associated with the application.</p>
     */
    inline GetAssociatedResourceResult& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}

  private:

    Resource m_resource;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
