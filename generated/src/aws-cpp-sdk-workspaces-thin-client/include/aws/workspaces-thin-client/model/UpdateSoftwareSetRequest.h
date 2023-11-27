/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-thin-client/model/SoftwareSetValidationStatus.h>
#include <utility>

namespace Aws
{
namespace WorkSpacesThinClient
{
namespace Model
{

  /**
   */
  class UpdateSoftwareSetRequest : public WorkSpacesThinClientRequest
  {
  public:
    AWS_WORKSPACESTHINCLIENT_API UpdateSoftwareSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSoftwareSet"; }

    AWS_WORKSPACESTHINCLIENT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the software set to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the software set to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the software set to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the software set to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the software set to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the software set to update.</p>
     */
    inline UpdateSoftwareSetRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the software set to update.</p>
     */
    inline UpdateSoftwareSetRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the software set to update.</p>
     */
    inline UpdateSoftwareSetRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>An option to define if the software set has been validated.</p>
     */
    inline const SoftwareSetValidationStatus& GetValidationStatus() const{ return m_validationStatus; }

    /**
     * <p>An option to define if the software set has been validated.</p>
     */
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }

    /**
     * <p>An option to define if the software set has been validated.</p>
     */
    inline void SetValidationStatus(const SoftwareSetValidationStatus& value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }

    /**
     * <p>An option to define if the software set has been validated.</p>
     */
    inline void SetValidationStatus(SoftwareSetValidationStatus&& value) { m_validationStatusHasBeenSet = true; m_validationStatus = std::move(value); }

    /**
     * <p>An option to define if the software set has been validated.</p>
     */
    inline UpdateSoftwareSetRequest& WithValidationStatus(const SoftwareSetValidationStatus& value) { SetValidationStatus(value); return *this;}

    /**
     * <p>An option to define if the software set has been validated.</p>
     */
    inline UpdateSoftwareSetRequest& WithValidationStatus(SoftwareSetValidationStatus&& value) { SetValidationStatus(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    SoftwareSetValidationStatus m_validationStatus;
    bool m_validationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
