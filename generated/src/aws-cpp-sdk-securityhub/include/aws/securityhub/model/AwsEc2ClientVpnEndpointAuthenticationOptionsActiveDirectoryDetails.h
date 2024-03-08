/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about an Active Directory that’s used to authenticate an
   * Client VPN endpoint. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails();
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the Active Directory used for authentication. </p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p> The ID of the Active Directory used for authentication. </p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p> The ID of the Active Directory used for authentication. </p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p> The ID of the Active Directory used for authentication. </p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p> The ID of the Active Directory used for authentication. </p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p> The ID of the Active Directory used for authentication. </p>
     */
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p> The ID of the Active Directory used for authentication. </p>
     */
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Active Directory used for authentication. </p>
     */
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
