/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Information about the Active Directory config.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ActiveDirectoryConfig">AWS
   * API Reference</a></p>
   */
  class ActiveDirectoryConfig
  {
  public:
    AWS_WORKSPACES_API ActiveDirectoryConfig();
    AWS_WORKSPACES_API ActiveDirectoryConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ActiveDirectoryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline ActiveDirectoryConfig& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline ActiveDirectoryConfig& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline ActiveDirectoryConfig& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the secret ARN on the service account.</p>
     */
    inline const Aws::String& GetServiceAccountSecretArn() const{ return m_serviceAccountSecretArn; }
    inline bool ServiceAccountSecretArnHasBeenSet() const { return m_serviceAccountSecretArnHasBeenSet; }
    inline void SetServiceAccountSecretArn(const Aws::String& value) { m_serviceAccountSecretArnHasBeenSet = true; m_serviceAccountSecretArn = value; }
    inline void SetServiceAccountSecretArn(Aws::String&& value) { m_serviceAccountSecretArnHasBeenSet = true; m_serviceAccountSecretArn = std::move(value); }
    inline void SetServiceAccountSecretArn(const char* value) { m_serviceAccountSecretArnHasBeenSet = true; m_serviceAccountSecretArn.assign(value); }
    inline ActiveDirectoryConfig& WithServiceAccountSecretArn(const Aws::String& value) { SetServiceAccountSecretArn(value); return *this;}
    inline ActiveDirectoryConfig& WithServiceAccountSecretArn(Aws::String&& value) { SetServiceAccountSecretArn(std::move(value)); return *this;}
    inline ActiveDirectoryConfig& WithServiceAccountSecretArn(const char* value) { SetServiceAccountSecretArn(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_serviceAccountSecretArn;
    bool m_serviceAccountSecretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
