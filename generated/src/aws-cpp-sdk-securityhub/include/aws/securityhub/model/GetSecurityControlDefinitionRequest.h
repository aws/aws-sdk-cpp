/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class GetSecurityControlDefinitionRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API GetSecurityControlDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSecurityControlDefinition"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

    AWS_SECURITYHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The ID of the security control to retrieve the definition for. This field
     * doesn’t accept an Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetSecurityControlId() const{ return m_securityControlId; }

    /**
     * <p> The ID of the security control to retrieve the definition for. This field
     * doesn’t accept an Amazon Resource Name (ARN). </p>
     */
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }

    /**
     * <p> The ID of the security control to retrieve the definition for. This field
     * doesn’t accept an Amazon Resource Name (ARN). </p>
     */
    inline void SetSecurityControlId(const Aws::String& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = value; }

    /**
     * <p> The ID of the security control to retrieve the definition for. This field
     * doesn’t accept an Amazon Resource Name (ARN). </p>
     */
    inline void SetSecurityControlId(Aws::String&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::move(value); }

    /**
     * <p> The ID of the security control to retrieve the definition for. This field
     * doesn’t accept an Amazon Resource Name (ARN). </p>
     */
    inline void SetSecurityControlId(const char* value) { m_securityControlIdHasBeenSet = true; m_securityControlId.assign(value); }

    /**
     * <p> The ID of the security control to retrieve the definition for. This field
     * doesn’t accept an Amazon Resource Name (ARN). </p>
     */
    inline GetSecurityControlDefinitionRequest& WithSecurityControlId(const Aws::String& value) { SetSecurityControlId(value); return *this;}

    /**
     * <p> The ID of the security control to retrieve the definition for. This field
     * doesn’t accept an Amazon Resource Name (ARN). </p>
     */
    inline GetSecurityControlDefinitionRequest& WithSecurityControlId(Aws::String&& value) { SetSecurityControlId(std::move(value)); return *this;}

    /**
     * <p> The ID of the security control to retrieve the definition for. This field
     * doesn’t accept an Amazon Resource Name (ARN). </p>
     */
    inline GetSecurityControlDefinitionRequest& WithSecurityControlId(const char* value) { SetSecurityControlId(value); return *this;}

  private:

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
