/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/AppRegistryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppRegistry
{
namespace Model
{

  /**
   */
  class UpdateApplicationRequest : public AppRegistryRequest
  {
  public:
    AWS_APPREGISTRY_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_APPREGISTRY_API Aws::String SerializePayload() const override;


    /**
     * <p>The name or ID of the application that will be updated.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }

    /**
     * <p>The name or ID of the application that will be updated.</p>
     */
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }

    /**
     * <p>The name or ID of the application that will be updated.</p>
     */
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }

    /**
     * <p>The name or ID of the application that will be updated.</p>
     */
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }

    /**
     * <p>The name or ID of the application that will be updated.</p>
     */
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }

    /**
     * <p>The name or ID of the application that will be updated.</p>
     */
    inline UpdateApplicationRequest& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}

    /**
     * <p>The name or ID of the application that will be updated.</p>
     */
    inline UpdateApplicationRequest& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}

    /**
     * <p>The name or ID of the application that will be updated.</p>
     */
    inline UpdateApplicationRequest& WithApplication(const char* value) { SetApplication(value); return *this;}


    /**
     * <p>The new description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The new description of the application.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The new description of the application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The new description of the application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The new description of the application.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The new description of the application.</p>
     */
    inline UpdateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The new description of the application.</p>
     */
    inline UpdateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The new description of the application.</p>
     */
    inline UpdateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
