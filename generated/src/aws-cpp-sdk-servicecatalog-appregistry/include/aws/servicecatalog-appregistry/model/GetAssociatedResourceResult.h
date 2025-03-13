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
    AWS_APPREGISTRY_API GetAssociatedResourceResult() = default;
    AWS_APPREGISTRY_API GetAssociatedResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API GetAssociatedResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The resource associated with the application.</p>
     */
    inline const Resource& GetResource() const { return m_resource; }
    template<typename ResourceT = Resource>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Resource>
    GetAssociatedResourceResult& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline const Aws::Vector<AssociationOption>& GetOptions() const { return m_options; }
    template<typename OptionsT = Aws::Vector<AssociationOption>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Vector<AssociationOption>>
    GetAssociatedResourceResult& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    inline GetAssociatedResourceResult& AddOptions(AssociationOption value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The result of the application that's tag applied to a resource. </p>
     */
    inline const ApplicationTagResult& GetApplicationTagResult() const { return m_applicationTagResult; }
    template<typename ApplicationTagResultT = ApplicationTagResult>
    void SetApplicationTagResult(ApplicationTagResultT&& value) { m_applicationTagResultHasBeenSet = true; m_applicationTagResult = std::forward<ApplicationTagResultT>(value); }
    template<typename ApplicationTagResultT = ApplicationTagResult>
    GetAssociatedResourceResult& WithApplicationTagResult(ApplicationTagResultT&& value) { SetApplicationTagResult(std::forward<ApplicationTagResultT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAssociatedResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::Vector<AssociationOption> m_options;
    bool m_optionsHasBeenSet = false;

    ApplicationTagResult m_applicationTagResult;
    bool m_applicationTagResultHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
