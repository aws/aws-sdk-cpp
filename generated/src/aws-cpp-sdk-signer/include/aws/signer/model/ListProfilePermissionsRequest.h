/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace signer
{
namespace Model
{

  /**
   */
  class ListProfilePermissionsRequest : public SignerRequest
  {
  public:
    AWS_SIGNER_API ListProfilePermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProfilePermissions"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;

    AWS_SIGNER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Name of the signing profile containing the cross-account permissions.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>Name of the signing profile containing the cross-account permissions.</p>
     */
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }

    /**
     * <p>Name of the signing profile containing the cross-account permissions.</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }

    /**
     * <p>Name of the signing profile containing the cross-account permissions.</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }

    /**
     * <p>Name of the signing profile containing the cross-account permissions.</p>
     */
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }

    /**
     * <p>Name of the signing profile containing the cross-account permissions.</p>
     */
    inline ListProfilePermissionsRequest& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>Name of the signing profile containing the cross-account permissions.</p>
     */
    inline ListProfilePermissionsRequest& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>Name of the signing profile containing the cross-account permissions.</p>
     */
    inline ListProfilePermissionsRequest& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline ListProfilePermissionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline ListProfilePermissionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline ListProfilePermissionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
