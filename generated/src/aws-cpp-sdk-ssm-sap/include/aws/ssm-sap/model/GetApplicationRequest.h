/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/SsmSapRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SsmSap
{
namespace Model
{

  /**
   */
  class GetApplicationRequest : public SsmSapRequest
  {
  public:
    AWS_SSMSAP_API GetApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApplication"; }

    AWS_SSMSAP_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline GetApplicationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline GetApplicationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline GetApplicationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline GetApplicationRequest& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline GetApplicationRequest& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline GetApplicationRequest& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the application registry.</p>
     */
    inline const Aws::String& GetAppRegistryArn() const{ return m_appRegistryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application registry.</p>
     */
    inline bool AppRegistryArnHasBeenSet() const { return m_appRegistryArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application registry.</p>
     */
    inline void SetAppRegistryArn(const Aws::String& value) { m_appRegistryArnHasBeenSet = true; m_appRegistryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application registry.</p>
     */
    inline void SetAppRegistryArn(Aws::String&& value) { m_appRegistryArnHasBeenSet = true; m_appRegistryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application registry.</p>
     */
    inline void SetAppRegistryArn(const char* value) { m_appRegistryArnHasBeenSet = true; m_appRegistryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application registry.</p>
     */
    inline GetApplicationRequest& WithAppRegistryArn(const Aws::String& value) { SetAppRegistryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application registry.</p>
     */
    inline GetApplicationRequest& WithAppRegistryArn(Aws::String&& value) { SetAppRegistryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application registry.</p>
     */
    inline GetApplicationRequest& WithAppRegistryArn(const char* value) { SetAppRegistryArn(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_appRegistryArn;
    bool m_appRegistryArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
