/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/Resource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog-appregistry/model/ApplicationTagResult.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog-appregistry/model/AssociationOption.h>
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


    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline const Aws::Vector<AssociationOption>& GetOptions() const{ return m_options; }

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline void SetOptions(const Aws::Vector<AssociationOption>& value) { m_options = value; }

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline void SetOptions(Aws::Vector<AssociationOption>&& value) { m_options = std::move(value); }

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline GetAssociatedResourceResult& WithOptions(const Aws::Vector<AssociationOption>& value) { SetOptions(value); return *this;}

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline GetAssociatedResourceResult& WithOptions(Aws::Vector<AssociationOption>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline GetAssociatedResourceResult& AddOptions(const AssociationOption& value) { m_options.push_back(value); return *this; }

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline GetAssociatedResourceResult& AddOptions(AssociationOption&& value) { m_options.push_back(std::move(value)); return *this; }


    /**
     * <p> The result of the application that's tag applied to a resource. </p>
     */
    inline const ApplicationTagResult& GetApplicationTagResult() const{ return m_applicationTagResult; }

    /**
     * <p> The result of the application that's tag applied to a resource. </p>
     */
    inline void SetApplicationTagResult(const ApplicationTagResult& value) { m_applicationTagResult = value; }

    /**
     * <p> The result of the application that's tag applied to a resource. </p>
     */
    inline void SetApplicationTagResult(ApplicationTagResult&& value) { m_applicationTagResult = std::move(value); }

    /**
     * <p> The result of the application that's tag applied to a resource. </p>
     */
    inline GetAssociatedResourceResult& WithApplicationTagResult(const ApplicationTagResult& value) { SetApplicationTagResult(value); return *this;}

    /**
     * <p> The result of the application that's tag applied to a resource. </p>
     */
    inline GetAssociatedResourceResult& WithApplicationTagResult(ApplicationTagResult&& value) { SetApplicationTagResult(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAssociatedResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAssociatedResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAssociatedResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Resource m_resource;

    Aws::Vector<AssociationOption> m_options;

    ApplicationTagResult m_applicationTagResult;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
