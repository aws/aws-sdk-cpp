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
   * <p>Specifies information about the master user of the domain. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsOpenSearchServiceDomainMasterUserOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsOpenSearchServiceDomainMasterUserOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainMasterUserOptionsDetails() = default;
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainMasterUserOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainMasterUserOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the master user. </p>
     */
    inline const Aws::String& GetMasterUserArn() const { return m_masterUserArn; }
    inline bool MasterUserArnHasBeenSet() const { return m_masterUserArnHasBeenSet; }
    template<typename MasterUserArnT = Aws::String>
    void SetMasterUserArn(MasterUserArnT&& value) { m_masterUserArnHasBeenSet = true; m_masterUserArn = std::forward<MasterUserArnT>(value); }
    template<typename MasterUserArnT = Aws::String>
    AwsOpenSearchServiceDomainMasterUserOptionsDetails& WithMasterUserArn(MasterUserArnT&& value) { SetMasterUserArn(std::forward<MasterUserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username for the master user. </p>
     */
    inline const Aws::String& GetMasterUserName() const { return m_masterUserName; }
    inline bool MasterUserNameHasBeenSet() const { return m_masterUserNameHasBeenSet; }
    template<typename MasterUserNameT = Aws::String>
    void SetMasterUserName(MasterUserNameT&& value) { m_masterUserNameHasBeenSet = true; m_masterUserName = std::forward<MasterUserNameT>(value); }
    template<typename MasterUserNameT = Aws::String>
    AwsOpenSearchServiceDomainMasterUserOptionsDetails& WithMasterUserName(MasterUserNameT&& value) { SetMasterUserName(std::forward<MasterUserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the master user. </p>
     */
    inline const Aws::String& GetMasterUserPassword() const { return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    template<typename MasterUserPasswordT = Aws::String>
    void SetMasterUserPassword(MasterUserPasswordT&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::forward<MasterUserPasswordT>(value); }
    template<typename MasterUserPasswordT = Aws::String>
    AwsOpenSearchServiceDomainMasterUserOptionsDetails& WithMasterUserPassword(MasterUserPasswordT&& value) { SetMasterUserPassword(std::forward<MasterUserPasswordT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_masterUserArn;
    bool m_masterUserArnHasBeenSet = false;

    Aws::String m_masterUserName;
    bool m_masterUserNameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
