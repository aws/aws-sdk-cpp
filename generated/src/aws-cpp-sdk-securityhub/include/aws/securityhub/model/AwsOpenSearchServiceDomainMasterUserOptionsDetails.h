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
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainMasterUserOptionsDetails();
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainMasterUserOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainMasterUserOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the master user. </p>
     */
    inline const Aws::String& GetMasterUserArn() const{ return m_masterUserArn; }
    inline bool MasterUserArnHasBeenSet() const { return m_masterUserArnHasBeenSet; }
    inline void SetMasterUserArn(const Aws::String& value) { m_masterUserArnHasBeenSet = true; m_masterUserArn = value; }
    inline void SetMasterUserArn(Aws::String&& value) { m_masterUserArnHasBeenSet = true; m_masterUserArn = std::move(value); }
    inline void SetMasterUserArn(const char* value) { m_masterUserArnHasBeenSet = true; m_masterUserArn.assign(value); }
    inline AwsOpenSearchServiceDomainMasterUserOptionsDetails& WithMasterUserArn(const Aws::String& value) { SetMasterUserArn(value); return *this;}
    inline AwsOpenSearchServiceDomainMasterUserOptionsDetails& WithMasterUserArn(Aws::String&& value) { SetMasterUserArn(std::move(value)); return *this;}
    inline AwsOpenSearchServiceDomainMasterUserOptionsDetails& WithMasterUserArn(const char* value) { SetMasterUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username for the master user. </p>
     */
    inline const Aws::String& GetMasterUserName() const{ return m_masterUserName; }
    inline bool MasterUserNameHasBeenSet() const { return m_masterUserNameHasBeenSet; }
    inline void SetMasterUserName(const Aws::String& value) { m_masterUserNameHasBeenSet = true; m_masterUserName = value; }
    inline void SetMasterUserName(Aws::String&& value) { m_masterUserNameHasBeenSet = true; m_masterUserName = std::move(value); }
    inline void SetMasterUserName(const char* value) { m_masterUserNameHasBeenSet = true; m_masterUserName.assign(value); }
    inline AwsOpenSearchServiceDomainMasterUserOptionsDetails& WithMasterUserName(const Aws::String& value) { SetMasterUserName(value); return *this;}
    inline AwsOpenSearchServiceDomainMasterUserOptionsDetails& WithMasterUserName(Aws::String&& value) { SetMasterUserName(std::move(value)); return *this;}
    inline AwsOpenSearchServiceDomainMasterUserOptionsDetails& WithMasterUserName(const char* value) { SetMasterUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the master user. </p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }
    inline AwsOpenSearchServiceDomainMasterUserOptionsDetails& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}
    inline AwsOpenSearchServiceDomainMasterUserOptionsDetails& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}
    inline AwsOpenSearchServiceDomainMasterUserOptionsDetails& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}
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
