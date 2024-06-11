﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/ApplicationTagStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog-appregistry/model/ResourcesListItem.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppRegistry
{
namespace Model
{

  /**
   * <p> The result of the application tag that's applied to a resource.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ApplicationTagResult">AWS
   * API Reference</a></p>
   */
  class ApplicationTagResult
  {
  public:
    AWS_APPREGISTRY_API ApplicationTagResult();
    AWS_APPREGISTRY_API ApplicationTagResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API ApplicationTagResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The application tag is in the process of being applied to a resource, was
     * successfully applied to a resource, or failed to apply to a resource. </p>
     */
    inline const ApplicationTagStatus& GetApplicationTagStatus() const{ return m_applicationTagStatus; }
    inline bool ApplicationTagStatusHasBeenSet() const { return m_applicationTagStatusHasBeenSet; }
    inline void SetApplicationTagStatus(const ApplicationTagStatus& value) { m_applicationTagStatusHasBeenSet = true; m_applicationTagStatus = value; }
    inline void SetApplicationTagStatus(ApplicationTagStatus&& value) { m_applicationTagStatusHasBeenSet = true; m_applicationTagStatus = std::move(value); }
    inline ApplicationTagResult& WithApplicationTagStatus(const ApplicationTagStatus& value) { SetApplicationTagStatus(value); return *this;}
    inline ApplicationTagResult& WithApplicationTagStatus(ApplicationTagStatus&& value) { SetApplicationTagStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The message returned if the call fails. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline ApplicationTagResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline ApplicationTagResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline ApplicationTagResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The resources associated with an application </p>
     */
    inline const Aws::Vector<ResourcesListItem>& GetResources() const{ return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    inline void SetResources(const Aws::Vector<ResourcesListItem>& value) { m_resourcesHasBeenSet = true; m_resources = value; }
    inline void SetResources(Aws::Vector<ResourcesListItem>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }
    inline ApplicationTagResult& WithResources(const Aws::Vector<ResourcesListItem>& value) { SetResources(value); return *this;}
    inline ApplicationTagResult& WithResources(Aws::Vector<ResourcesListItem>&& value) { SetResources(std::move(value)); return *this;}
    inline ApplicationTagResult& AddResources(const ResourcesListItem& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }
    inline ApplicationTagResult& AddResources(ResourcesListItem&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A unique pagination token for each page of results. Make the call again with
     * the returned token to retrieve the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ApplicationTagResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ApplicationTagResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ApplicationTagResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    ApplicationTagStatus m_applicationTagStatus;
    bool m_applicationTagStatusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Vector<ResourcesListItem> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
