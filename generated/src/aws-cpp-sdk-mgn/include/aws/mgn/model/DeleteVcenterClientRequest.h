/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class DeleteVcenterClientRequest : public MgnRequest
  {
  public:
    AWS_MGN_API DeleteVcenterClientRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVcenterClient"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline const Aws::String& GetVcenterClientID() const{ return m_vcenterClientID; }

    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline bool VcenterClientIDHasBeenSet() const { return m_vcenterClientIDHasBeenSet; }

    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline void SetVcenterClientID(const Aws::String& value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID = value; }

    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline void SetVcenterClientID(Aws::String&& value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID = std::move(value); }

    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline void SetVcenterClientID(const char* value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID.assign(value); }

    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline DeleteVcenterClientRequest& WithVcenterClientID(const Aws::String& value) { SetVcenterClientID(value); return *this;}

    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline DeleteVcenterClientRequest& WithVcenterClientID(Aws::String&& value) { SetVcenterClientID(std::move(value)); return *this;}

    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline DeleteVcenterClientRequest& WithVcenterClientID(const char* value) { SetVcenterClientID(value); return *this;}

  private:

    Aws::String m_vcenterClientID;
    bool m_vcenterClientIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
