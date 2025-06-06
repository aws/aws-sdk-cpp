﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/Application.h>
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
namespace AppRegistry
{
namespace Model
{
  class UpdateApplicationResult
  {
  public:
    AWS_APPREGISTRY_API UpdateApplicationResult() = default;
    AWS_APPREGISTRY_API UpdateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API UpdateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated information of the application.</p>
     */
    inline const Application& GetApplication() const { return m_application; }
    template<typename ApplicationT = Application>
    void SetApplication(ApplicationT&& value) { m_applicationHasBeenSet = true; m_application = std::forward<ApplicationT>(value); }
    template<typename ApplicationT = Application>
    UpdateApplicationResult& WithApplication(ApplicationT&& value) { SetApplication(std::forward<ApplicationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Application m_application;
    bool m_applicationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
