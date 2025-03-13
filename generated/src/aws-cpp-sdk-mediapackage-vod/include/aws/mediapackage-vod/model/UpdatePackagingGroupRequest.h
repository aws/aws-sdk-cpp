/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/MediaPackageVodRequest.h>
#include <aws/mediapackage-vod/model/Authorization.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

  /**
   * A MediaPackage VOD PackagingGroup resource configuration.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/UpdatePackagingGroupRequest">AWS
   * API Reference</a></p>
   */
  class UpdatePackagingGroupRequest : public MediaPackageVodRequest
  {
  public:
    AWS_MEDIAPACKAGEVOD_API UpdatePackagingGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePackagingGroup"; }

    AWS_MEDIAPACKAGEVOD_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Authorization& GetAuthorization() const { return m_authorization; }
    inline bool AuthorizationHasBeenSet() const { return m_authorizationHasBeenSet; }
    template<typename AuthorizationT = Authorization>
    void SetAuthorization(AuthorizationT&& value) { m_authorizationHasBeenSet = true; m_authorization = std::forward<AuthorizationT>(value); }
    template<typename AuthorizationT = Authorization>
    UpdatePackagingGroupRequest& WithAuthorization(AuthorizationT&& value) { SetAuthorization(std::forward<AuthorizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdatePackagingGroupRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Authorization m_authorization;
    bool m_authorizationHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
