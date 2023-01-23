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
    AWS_MEDIAPACKAGEVOD_API UpdatePackagingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePackagingGroup"; }

    AWS_MEDIAPACKAGEVOD_API Aws::String SerializePayload() const override;


    
    inline const Authorization& GetAuthorization() const{ return m_authorization; }

    
    inline bool AuthorizationHasBeenSet() const { return m_authorizationHasBeenSet; }

    
    inline void SetAuthorization(const Authorization& value) { m_authorizationHasBeenSet = true; m_authorization = value; }

    
    inline void SetAuthorization(Authorization&& value) { m_authorizationHasBeenSet = true; m_authorization = std::move(value); }

    
    inline UpdatePackagingGroupRequest& WithAuthorization(const Authorization& value) { SetAuthorization(value); return *this;}

    
    inline UpdatePackagingGroupRequest& WithAuthorization(Authorization&& value) { SetAuthorization(std::move(value)); return *this;}


    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline UpdatePackagingGroupRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline UpdatePackagingGroupRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline UpdatePackagingGroupRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Authorization m_authorization;
    bool m_authorizationHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
