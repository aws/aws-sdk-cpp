/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AssociationStatus.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class UpdateAssociationStatusRequest : public SSMRequest
  {
  public:
    AWS_SSM_API UpdateAssociationStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssociationStatus"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateAssociationStatusRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateAssociationStatusRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateAssociationStatusRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed node ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateAssociationStatusRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateAssociationStatusRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateAssociationStatusRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association status.</p>
     */
    inline const AssociationStatus& GetAssociationStatus() const{ return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    inline void SetAssociationStatus(const AssociationStatus& value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline void SetAssociationStatus(AssociationStatus&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::move(value); }
    inline UpdateAssociationStatusRequest& WithAssociationStatus(const AssociationStatus& value) { SetAssociationStatus(value); return *this;}
    inline UpdateAssociationStatusRequest& WithAssociationStatus(AssociationStatus&& value) { SetAssociationStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    AssociationStatus m_associationStatus;
    bool m_associationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
