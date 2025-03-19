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
    AWS_WORKSPACES_API ActiveDirectoryConfig() = default;
    AWS_WORKSPACES_API ActiveDirectoryConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ActiveDirectoryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    ActiveDirectoryConfig& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the secret ARN on the service account.</p>
     */
    inline const Aws::String& GetServiceAccountSecretArn() const { return m_serviceAccountSecretArn; }
    inline bool ServiceAccountSecretArnHasBeenSet() const { return m_serviceAccountSecretArnHasBeenSet; }
    template<typename ServiceAccountSecretArnT = Aws::String>
    void SetServiceAccountSecretArn(ServiceAccountSecretArnT&& value) { m_serviceAccountSecretArnHasBeenSet = true; m_serviceAccountSecretArn = std::forward<ServiceAccountSecretArnT>(value); }
    template<typename ServiceAccountSecretArnT = Aws::String>
    ActiveDirectoryConfig& WithServiceAccountSecretArn(ServiceAccountSecretArnT&& value) { SetServiceAccountSecretArn(std::forward<ServiceAccountSecretArnT>(value)); return *this;}
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
