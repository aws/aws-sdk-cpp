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
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class GetConfigurationPolicyRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API GetConfigurationPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConfigurationPolicy"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline GetConfigurationPolicyRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline GetConfigurationPolicyRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline GetConfigurationPolicyRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
