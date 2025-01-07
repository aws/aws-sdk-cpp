/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/ActionConfiguration.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class UpdateDataAccessorRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API UpdateDataAccessorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataAccessor"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the Q Business application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline UpdateDataAccessorRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline UpdateDataAccessorRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline UpdateDataAccessorRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the data accessor to update.</p>
     */
    inline const Aws::String& GetDataAccessorId() const{ return m_dataAccessorId; }
    inline bool DataAccessorIdHasBeenSet() const { return m_dataAccessorIdHasBeenSet; }
    inline void SetDataAccessorId(const Aws::String& value) { m_dataAccessorIdHasBeenSet = true; m_dataAccessorId = value; }
    inline void SetDataAccessorId(Aws::String&& value) { m_dataAccessorIdHasBeenSet = true; m_dataAccessorId = std::move(value); }
    inline void SetDataAccessorId(const char* value) { m_dataAccessorIdHasBeenSet = true; m_dataAccessorId.assign(value); }
    inline UpdateDataAccessorRequest& WithDataAccessorId(const Aws::String& value) { SetDataAccessorId(value); return *this;}
    inline UpdateDataAccessorRequest& WithDataAccessorId(Aws::String&& value) { SetDataAccessorId(std::move(value)); return *this;}
    inline UpdateDataAccessorRequest& WithDataAccessorId(const char* value) { SetDataAccessorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated list of action configurations specifying the allowed actions and
     * any associated filters.</p>
     */
    inline const Aws::Vector<ActionConfiguration>& GetActionConfigurations() const{ return m_actionConfigurations; }
    inline bool ActionConfigurationsHasBeenSet() const { return m_actionConfigurationsHasBeenSet; }
    inline void SetActionConfigurations(const Aws::Vector<ActionConfiguration>& value) { m_actionConfigurationsHasBeenSet = true; m_actionConfigurations = value; }
    inline void SetActionConfigurations(Aws::Vector<ActionConfiguration>&& value) { m_actionConfigurationsHasBeenSet = true; m_actionConfigurations = std::move(value); }
    inline UpdateDataAccessorRequest& WithActionConfigurations(const Aws::Vector<ActionConfiguration>& value) { SetActionConfigurations(value); return *this;}
    inline UpdateDataAccessorRequest& WithActionConfigurations(Aws::Vector<ActionConfiguration>&& value) { SetActionConfigurations(std::move(value)); return *this;}
    inline UpdateDataAccessorRequest& AddActionConfigurations(const ActionConfiguration& value) { m_actionConfigurationsHasBeenSet = true; m_actionConfigurations.push_back(value); return *this; }
    inline UpdateDataAccessorRequest& AddActionConfigurations(ActionConfiguration&& value) { m_actionConfigurationsHasBeenSet = true; m_actionConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The updated friendly name for the data accessor.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdateDataAccessorRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdateDataAccessorRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdateDataAccessorRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_dataAccessorId;
    bool m_dataAccessorIdHasBeenSet = false;

    Aws::Vector<ActionConfiguration> m_actionConfigurations;
    bool m_actionConfigurationsHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
