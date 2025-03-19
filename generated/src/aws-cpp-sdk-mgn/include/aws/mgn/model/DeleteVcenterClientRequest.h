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
    AWS_MGN_API DeleteVcenterClientRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVcenterClient"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline const Aws::String& GetVcenterClientID() const { return m_vcenterClientID; }
    inline bool VcenterClientIDHasBeenSet() const { return m_vcenterClientIDHasBeenSet; }
    template<typename VcenterClientIDT = Aws::String>
    void SetVcenterClientID(VcenterClientIDT&& value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID = std::forward<VcenterClientIDT>(value); }
    template<typename VcenterClientIDT = Aws::String>
    DeleteVcenterClientRequest& WithVcenterClientID(VcenterClientIDT&& value) { SetVcenterClientID(std::forward<VcenterClientIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vcenterClientID;
    bool m_vcenterClientIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
