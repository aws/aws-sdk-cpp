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
  class GetComponentRequest : public SsmSapRequest
  {
  public:
    AWS_SSMSAP_API GetComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComponent"; }

    AWS_SSMSAP_API Aws::String SerializePayload() const override;


    /**
     * <p/>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p/>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p/>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p/>
     */
    inline GetComponentRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p/>
     */
    inline GetComponentRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline GetComponentRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetComponentId() const{ return m_componentId; }

    /**
     * <p/>
     */
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetComponentId(const Aws::String& value) { m_componentIdHasBeenSet = true; m_componentId = value; }

    /**
     * <p/>
     */
    inline void SetComponentId(Aws::String&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetComponentId(const char* value) { m_componentIdHasBeenSet = true; m_componentId.assign(value); }

    /**
     * <p/>
     */
    inline GetComponentRequest& WithComponentId(const Aws::String& value) { SetComponentId(value); return *this;}

    /**
     * <p/>
     */
    inline GetComponentRequest& WithComponentId(Aws::String&& value) { SetComponentId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline GetComponentRequest& WithComponentId(const char* value) { SetComponentId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
