/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/CredentialType.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p>The credentials of your SAP application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ApplicationCredential">AWS
   * API Reference</a></p>
   */
  class ApplicationCredential
  {
  public:
    AWS_SSMSAP_API ApplicationCredential() = default;
    AWS_SSMSAP_API ApplicationCredential(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API ApplicationCredential& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the SAP HANA database.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    ApplicationCredential& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the application credentials. </p>
     */
    inline CredentialType GetCredentialType() const { return m_credentialType; }
    inline bool CredentialTypeHasBeenSet() const { return m_credentialTypeHasBeenSet; }
    inline void SetCredentialType(CredentialType value) { m_credentialTypeHasBeenSet = true; m_credentialType = value; }
    inline ApplicationCredential& WithCredentialType(CredentialType value) { SetCredentialType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret ID created in AWS Secrets Manager to store the credentials of the
     * SAP application. </p>
     */
    inline const Aws::String& GetSecretId() const { return m_secretId; }
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
    template<typename SecretIdT = Aws::String>
    void SetSecretId(SecretIdT&& value) { m_secretIdHasBeenSet = true; m_secretId = std::forward<SecretIdT>(value); }
    template<typename SecretIdT = Aws::String>
    ApplicationCredential& WithSecretId(SecretIdT&& value) { SetSecretId(std::forward<SecretIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    CredentialType m_credentialType{CredentialType::NOT_SET};
    bool m_credentialTypeHasBeenSet = false;

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
