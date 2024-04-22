/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/route53profiles/Route53ProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Profiles
{
namespace Model
{

  /**
   */
  class GetProfileResourceAssociationRequest : public Route53ProfilesRequest
  {
  public:
    AWS_ROUTE53PROFILES_API GetProfileResourceAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProfileResourceAssociation"; }

    AWS_ROUTE53PROFILES_API Aws::String SerializePayload() const override;


    /**
     * <p> <p>The ID of the profile resource association that you want to get
     * information about.</p> </p>
     */
    inline const Aws::String& GetProfileResourceAssociationId() const{ return m_profileResourceAssociationId; }

    /**
     * <p> <p>The ID of the profile resource association that you want to get
     * information about.</p> </p>
     */
    inline bool ProfileResourceAssociationIdHasBeenSet() const { return m_profileResourceAssociationIdHasBeenSet; }

    /**
     * <p> <p>The ID of the profile resource association that you want to get
     * information about.</p> </p>
     */
    inline void SetProfileResourceAssociationId(const Aws::String& value) { m_profileResourceAssociationIdHasBeenSet = true; m_profileResourceAssociationId = value; }

    /**
     * <p> <p>The ID of the profile resource association that you want to get
     * information about.</p> </p>
     */
    inline void SetProfileResourceAssociationId(Aws::String&& value) { m_profileResourceAssociationIdHasBeenSet = true; m_profileResourceAssociationId = std::move(value); }

    /**
     * <p> <p>The ID of the profile resource association that you want to get
     * information about.</p> </p>
     */
    inline void SetProfileResourceAssociationId(const char* value) { m_profileResourceAssociationIdHasBeenSet = true; m_profileResourceAssociationId.assign(value); }

    /**
     * <p> <p>The ID of the profile resource association that you want to get
     * information about.</p> </p>
     */
    inline GetProfileResourceAssociationRequest& WithProfileResourceAssociationId(const Aws::String& value) { SetProfileResourceAssociationId(value); return *this;}

    /**
     * <p> <p>The ID of the profile resource association that you want to get
     * information about.</p> </p>
     */
    inline GetProfileResourceAssociationRequest& WithProfileResourceAssociationId(Aws::String&& value) { SetProfileResourceAssociationId(std::move(value)); return *this;}

    /**
     * <p> <p>The ID of the profile resource association that you want to get
     * information about.</p> </p>
     */
    inline GetProfileResourceAssociationRequest& WithProfileResourceAssociationId(const char* value) { SetProfileResourceAssociationId(value); return *this;}

  private:

    Aws::String m_profileResourceAssociationId;
    bool m_profileResourceAssociationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
