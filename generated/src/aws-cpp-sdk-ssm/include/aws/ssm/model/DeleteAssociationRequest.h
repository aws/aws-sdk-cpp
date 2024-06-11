/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DeleteAssociationRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DeleteAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAssociation"; }

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
    inline DeleteAssociationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeleteAssociationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeleteAssociationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed node ID.</p>  <p> <code>InstanceId</code> has been
     * deprecated. To specify a managed node ID for an association, use the
     * <code>Targets</code> parameter. Requests that include the parameter
     * <code>InstanceID</code> with Systems Manager documents (SSM documents) that use
     * schema version 2.0 or later will fail. In addition, if you use the parameter
     * <code>InstanceId</code>, you can't use the parameters
     * <code>AssociationName</code>, <code>DocumentVersion</code>,
     * <code>MaxErrors</code>, <code>MaxConcurrency</code>,
     * <code>OutputLocation</code>, or <code>ScheduleExpression</code>. To use these
     * parameters, you must use the <code>Targets</code> parameter.</p> 
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline DeleteAssociationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DeleteAssociationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DeleteAssociationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association ID that you want to delete.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline DeleteAssociationRequest& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline DeleteAssociationRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline DeleteAssociationRequest& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
