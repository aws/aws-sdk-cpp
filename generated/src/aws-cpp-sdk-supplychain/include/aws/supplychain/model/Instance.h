/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/InstanceState.h>
#include <aws/core/utils/DateTime.h>
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
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The details of the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/Instance">AWS
   * API Reference</a></p>
   */
  class Instance
  {
  public:
    AWS_SUPPLYCHAIN_API Instance();
    AWS_SUPPLYCHAIN_API Instance(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Supply Chain instance identifier.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline Instance& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline Instance& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline Instance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the instance.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline Instance& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline Instance& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline Instance& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the instance.</p>
     */
    inline const InstanceState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const InstanceState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(InstanceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Instance& WithState(const InstanceState& value) { SetState(value); return *this;}
    inline Instance& WithState(InstanceState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Supply Chain instance error message. If the instance
     * results in an unhealthy state, customers need to check the error message, delete
     * the current instance, and recreate a new one based on the mitigation from the
     * error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline Instance& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline Instance& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline Instance& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WebApp DNS domain name of the instance.</p>
     */
    inline const Aws::String& GetWebAppDnsDomain() const{ return m_webAppDnsDomain; }
    inline bool WebAppDnsDomainHasBeenSet() const { return m_webAppDnsDomainHasBeenSet; }
    inline void SetWebAppDnsDomain(const Aws::String& value) { m_webAppDnsDomainHasBeenSet = true; m_webAppDnsDomain = value; }
    inline void SetWebAppDnsDomain(Aws::String&& value) { m_webAppDnsDomainHasBeenSet = true; m_webAppDnsDomain = std::move(value); }
    inline void SetWebAppDnsDomain(const char* value) { m_webAppDnsDomainHasBeenSet = true; m_webAppDnsDomain.assign(value); }
    inline Instance& WithWebAppDnsDomain(const Aws::String& value) { SetWebAppDnsDomain(value); return *this;}
    inline Instance& WithWebAppDnsDomain(Aws::String&& value) { SetWebAppDnsDomain(std::move(value)); return *this;}
    inline Instance& WithWebAppDnsDomain(const char* value) { SetWebAppDnsDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance creation timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline Instance& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline Instance& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance last modified timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline Instance& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline Instance& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Supply Chain instance name.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }
    inline Instance& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}
    inline Instance& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}
    inline Instance& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Supply Chain instance description.</p>
     */
    inline const Aws::String& GetInstanceDescription() const{ return m_instanceDescription; }
    inline bool InstanceDescriptionHasBeenSet() const { return m_instanceDescriptionHasBeenSet; }
    inline void SetInstanceDescription(const Aws::String& value) { m_instanceDescriptionHasBeenSet = true; m_instanceDescription = value; }
    inline void SetInstanceDescription(Aws::String&& value) { m_instanceDescriptionHasBeenSet = true; m_instanceDescription = std::move(value); }
    inline void SetInstanceDescription(const char* value) { m_instanceDescriptionHasBeenSet = true; m_instanceDescription.assign(value); }
    inline Instance& WithInstanceDescription(const Aws::String& value) { SetInstanceDescription(value); return *this;}
    inline Instance& WithInstanceDescription(Aws::String&& value) { SetInstanceDescription(std::move(value)); return *this;}
    inline Instance& WithInstanceDescription(const char* value) { SetInstanceDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * optionally provided for encryption. If you did not provide anything here, AWS
     * Supply Chain uses the Amazon Web Services owned KMS key and nothing is
     * returned.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline Instance& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline Instance& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline Instance& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the instance.</p>
     */
    inline double GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(double value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline Instance& WithVersionNumber(double value) { SetVersionNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    InstanceState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_webAppDnsDomain;
    bool m_webAppDnsDomainHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::String m_instanceDescription;
    bool m_instanceDescriptionHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    double m_versionNumber;
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
