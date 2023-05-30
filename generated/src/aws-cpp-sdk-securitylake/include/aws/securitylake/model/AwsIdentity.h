/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>The AWS identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/AwsIdentity">AWS
   * API Reference</a></p>
   */
  class AwsIdentity
  {
  public:
    AWS_SECURITYLAKE_API AwsIdentity();
    AWS_SECURITYLAKE_API AwsIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API AwsIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The external ID used to estalish trust relationship with the AWS
     * identity.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The external ID used to estalish trust relationship with the AWS
     * identity.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The external ID used to estalish trust relationship with the AWS
     * identity.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The external ID used to estalish trust relationship with the AWS
     * identity.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The external ID used to estalish trust relationship with the AWS
     * identity.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The external ID used to estalish trust relationship with the AWS
     * identity.</p>
     */
    inline AwsIdentity& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external ID used to estalish trust relationship with the AWS
     * identity.</p>
     */
    inline AwsIdentity& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external ID used to estalish trust relationship with the AWS
     * identity.</p>
     */
    inline AwsIdentity& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The AWS identity principal.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The AWS identity principal.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The AWS identity principal.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The AWS identity principal.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The AWS identity principal.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The AWS identity principal.</p>
     */
    inline AwsIdentity& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The AWS identity principal.</p>
     */
    inline AwsIdentity& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The AWS identity principal.</p>
     */
    inline AwsIdentity& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}

  private:

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
