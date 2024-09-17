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
  class GetDatabaseRequest : public SsmSapRequest
  {
  public:
    AWS_SSMSAP_API GetDatabaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDatabase"; }

    AWS_SSMSAP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline GetDatabaseRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetDatabaseRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetDatabaseRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the component.</p>
     */
    inline const Aws::String& GetComponentId() const{ return m_componentId; }
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }
    inline void SetComponentId(const Aws::String& value) { m_componentIdHasBeenSet = true; m_componentId = value; }
    inline void SetComponentId(Aws::String&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }
    inline void SetComponentId(const char* value) { m_componentIdHasBeenSet = true; m_componentId.assign(value); }
    inline GetDatabaseRequest& WithComponentId(const Aws::String& value) { SetComponentId(value); return *this;}
    inline GetDatabaseRequest& WithComponentId(Aws::String&& value) { SetComponentId(std::move(value)); return *this;}
    inline GetDatabaseRequest& WithComponentId(const char* value) { SetComponentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the database.</p>
     */
    inline const Aws::String& GetDatabaseId() const{ return m_databaseId; }
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }
    inline void SetDatabaseId(const Aws::String& value) { m_databaseIdHasBeenSet = true; m_databaseId = value; }
    inline void SetDatabaseId(Aws::String&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::move(value); }
    inline void SetDatabaseId(const char* value) { m_databaseIdHasBeenSet = true; m_databaseId.assign(value); }
    inline GetDatabaseRequest& WithDatabaseId(const Aws::String& value) { SetDatabaseId(value); return *this;}
    inline GetDatabaseRequest& WithDatabaseId(Aws::String&& value) { SetDatabaseId(std::move(value)); return *this;}
    inline GetDatabaseRequest& WithDatabaseId(const char* value) { SetDatabaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline const Aws::String& GetDatabaseArn() const{ return m_databaseArn; }
    inline bool DatabaseArnHasBeenSet() const { return m_databaseArnHasBeenSet; }
    inline void SetDatabaseArn(const Aws::String& value) { m_databaseArnHasBeenSet = true; m_databaseArn = value; }
    inline void SetDatabaseArn(Aws::String&& value) { m_databaseArnHasBeenSet = true; m_databaseArn = std::move(value); }
    inline void SetDatabaseArn(const char* value) { m_databaseArnHasBeenSet = true; m_databaseArn.assign(value); }
    inline GetDatabaseRequest& WithDatabaseArn(const Aws::String& value) { SetDatabaseArn(value); return *this;}
    inline GetDatabaseRequest& WithDatabaseArn(Aws::String&& value) { SetDatabaseArn(std::move(value)); return *this;}
    inline GetDatabaseRequest& WithDatabaseArn(const char* value) { SetDatabaseArn(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet = false;

    Aws::String m_databaseId;
    bool m_databaseIdHasBeenSet = false;

    Aws::String m_databaseArn;
    bool m_databaseArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
