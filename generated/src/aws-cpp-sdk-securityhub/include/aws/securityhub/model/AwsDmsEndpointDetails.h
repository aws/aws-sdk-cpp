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
   * <p> Provides details about an Database Migration Service (DMS) endpoint. An
   * endpoint provides connection, data store type, and location information about
   * your data store. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDmsEndpointDetails">AWS
   * API Reference</a></p>
   */
  class AwsDmsEndpointDetails
  {
  public:
    AWS_SECURITYHUB_API AwsDmsEndpointDetails();
    AWS_SECURITYHUB_API AwsDmsEndpointDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDmsEndpointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) for the SSL certificate that encrypts
     * connections between the DMS endpoint and the replication instance. </p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p> The Amazon Resource Name (ARN) for the SSL certificate that encrypts
     * connections between the DMS endpoint and the replication instance. </p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for the SSL certificate that encrypts
     * connections between the DMS endpoint and the replication instance. </p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for the SSL certificate that encrypts
     * connections between the DMS endpoint and the replication instance. </p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the SSL certificate that encrypts
     * connections between the DMS endpoint and the replication instance. </p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the SSL certificate that encrypts
     * connections between the DMS endpoint and the replication instance. </p>
     */
    inline AwsDmsEndpointDetails& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the SSL certificate that encrypts
     * connections between the DMS endpoint and the replication instance. </p>
     */
    inline AwsDmsEndpointDetails& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the SSL certificate that encrypts
     * connections between the DMS endpoint and the replication instance. </p>
     */
    inline AwsDmsEndpointDetails& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p> The name of the endpoint database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p> The name of the endpoint database.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p> The name of the endpoint database.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p> The name of the endpoint database.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p> The name of the endpoint database.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p> The name of the endpoint database.</p>
     */
    inline AwsDmsEndpointDetails& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p> The name of the endpoint database.</p>
     */
    inline AwsDmsEndpointDetails& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p> The name of the endpoint database.</p>
     */
    inline AwsDmsEndpointDetails& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the endpoint. </p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the endpoint. </p>
     */
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the endpoint. </p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the endpoint. </p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the endpoint. </p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the endpoint. </p>
     */
    inline AwsDmsEndpointDetails& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the endpoint. </p>
     */
    inline AwsDmsEndpointDetails& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the endpoint. </p>
     */
    inline AwsDmsEndpointDetails& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    /**
     * <p> The database endpoint identifier. </p>
     */
    inline const Aws::String& GetEndpointIdentifier() const{ return m_endpointIdentifier; }

    /**
     * <p> The database endpoint identifier. </p>
     */
    inline bool EndpointIdentifierHasBeenSet() const { return m_endpointIdentifierHasBeenSet; }

    /**
     * <p> The database endpoint identifier. </p>
     */
    inline void SetEndpointIdentifier(const Aws::String& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = value; }

    /**
     * <p> The database endpoint identifier. </p>
     */
    inline void SetEndpointIdentifier(Aws::String&& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = std::move(value); }

    /**
     * <p> The database endpoint identifier. </p>
     */
    inline void SetEndpointIdentifier(const char* value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier.assign(value); }

    /**
     * <p> The database endpoint identifier. </p>
     */
    inline AwsDmsEndpointDetails& WithEndpointIdentifier(const Aws::String& value) { SetEndpointIdentifier(value); return *this;}

    /**
     * <p> The database endpoint identifier. </p>
     */
    inline AwsDmsEndpointDetails& WithEndpointIdentifier(Aws::String&& value) { SetEndpointIdentifier(std::move(value)); return *this;}

    /**
     * <p> The database endpoint identifier. </p>
     */
    inline AwsDmsEndpointDetails& WithEndpointIdentifier(const char* value) { SetEndpointIdentifier(value); return *this;}


    /**
     * <p> The type of endpoint. Valid values are source and target. </p>
     */
    inline const Aws::String& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p> The type of endpoint. Valid values are source and target. </p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p> The type of endpoint. Valid values are source and target. </p>
     */
    inline void SetEndpointType(const Aws::String& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p> The type of endpoint. Valid values are source and target. </p>
     */
    inline void SetEndpointType(Aws::String&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p> The type of endpoint. Valid values are source and target. </p>
     */
    inline void SetEndpointType(const char* value) { m_endpointTypeHasBeenSet = true; m_endpointType.assign(value); }

    /**
     * <p> The type of endpoint. Valid values are source and target. </p>
     */
    inline AwsDmsEndpointDetails& WithEndpointType(const Aws::String& value) { SetEndpointType(value); return *this;}

    /**
     * <p> The type of endpoint. Valid values are source and target. </p>
     */
    inline AwsDmsEndpointDetails& WithEndpointType(Aws::String&& value) { SetEndpointType(std::move(value)); return *this;}

    /**
     * <p> The type of endpoint. Valid values are source and target. </p>
     */
    inline AwsDmsEndpointDetails& WithEndpointType(const char* value) { SetEndpointType(value); return *this;}


    /**
     * <p> The type of engine for the endpoint, depending on the
     * <code>EndpointType</code> value. </p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p> The type of engine for the endpoint, depending on the
     * <code>EndpointType</code> value. </p>
     */
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }

    /**
     * <p> The type of engine for the endpoint, depending on the
     * <code>EndpointType</code> value. </p>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p> The type of engine for the endpoint, depending on the
     * <code>EndpointType</code> value. </p>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }

    /**
     * <p> The type of engine for the endpoint, depending on the
     * <code>EndpointType</code> value. </p>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p> The type of engine for the endpoint, depending on the
     * <code>EndpointType</code> value. </p>
     */
    inline AwsDmsEndpointDetails& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p> The type of engine for the endpoint, depending on the
     * <code>EndpointType</code> value. </p>
     */
    inline AwsDmsEndpointDetails& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}

    /**
     * <p> The type of engine for the endpoint, depending on the
     * <code>EndpointType</code> value. </p>
     */
    inline AwsDmsEndpointDetails& WithEngineName(const char* value) { SetEngineName(value); return *this;}


    /**
     * <p> A value that can be used for cross-account validation. </p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p> A value that can be used for cross-account validation. </p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p> A value that can be used for cross-account validation. </p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p> A value that can be used for cross-account validation. </p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p> A value that can be used for cross-account validation. </p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p> A value that can be used for cross-account validation. </p>
     */
    inline AwsDmsEndpointDetails& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p> A value that can be used for cross-account validation. </p>
     */
    inline AwsDmsEndpointDetails& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p> A value that can be used for cross-account validation. </p>
     */
    inline AwsDmsEndpointDetails& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p> Additional attributes associated with the connection. </p>
     */
    inline const Aws::String& GetExtraConnectionAttributes() const{ return m_extraConnectionAttributes; }

    /**
     * <p> Additional attributes associated with the connection. </p>
     */
    inline bool ExtraConnectionAttributesHasBeenSet() const { return m_extraConnectionAttributesHasBeenSet; }

    /**
     * <p> Additional attributes associated with the connection. </p>
     */
    inline void SetExtraConnectionAttributes(const Aws::String& value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes = value; }

    /**
     * <p> Additional attributes associated with the connection. </p>
     */
    inline void SetExtraConnectionAttributes(Aws::String&& value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes = std::move(value); }

    /**
     * <p> Additional attributes associated with the connection. </p>
     */
    inline void SetExtraConnectionAttributes(const char* value) { m_extraConnectionAttributesHasBeenSet = true; m_extraConnectionAttributes.assign(value); }

    /**
     * <p> Additional attributes associated with the connection. </p>
     */
    inline AwsDmsEndpointDetails& WithExtraConnectionAttributes(const Aws::String& value) { SetExtraConnectionAttributes(value); return *this;}

    /**
     * <p> Additional attributes associated with the connection. </p>
     */
    inline AwsDmsEndpointDetails& WithExtraConnectionAttributes(Aws::String&& value) { SetExtraConnectionAttributes(std::move(value)); return *this;}

    /**
     * <p> Additional attributes associated with the connection. </p>
     */
    inline AwsDmsEndpointDetails& WithExtraConnectionAttributes(const char* value) { SetExtraConnectionAttributes(value); return *this;}


    /**
     * <p> An DMS key identifier that is used to encrypt the connection parameters for
     * the endpoint. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key. KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p> An DMS key identifier that is used to encrypt the connection parameters for
     * the endpoint. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key. KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Region.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p> An DMS key identifier that is used to encrypt the connection parameters for
     * the endpoint. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key. KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p> An DMS key identifier that is used to encrypt the connection parameters for
     * the endpoint. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key. KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p> An DMS key identifier that is used to encrypt the connection parameters for
     * the endpoint. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key. KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p> An DMS key identifier that is used to encrypt the connection parameters for
     * the endpoint. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key. KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Region.</p>
     */
    inline AwsDmsEndpointDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> An DMS key identifier that is used to encrypt the connection parameters for
     * the endpoint. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key. KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Region.</p>
     */
    inline AwsDmsEndpointDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p> An DMS key identifier that is used to encrypt the connection parameters for
     * the endpoint. If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key. KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Region.</p>
     */
    inline AwsDmsEndpointDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p> The port used to access the endpoint. </p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p> The port used to access the endpoint. </p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p> The port used to access the endpoint. </p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p> The port used to access the endpoint. </p>
     */
    inline AwsDmsEndpointDetails& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p> The name of the server where the endpoint database resides.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p> The name of the server where the endpoint database resides.</p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p> The name of the server where the endpoint database resides.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p> The name of the server where the endpoint database resides.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p> The name of the server where the endpoint database resides.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p> The name of the server where the endpoint database resides.</p>
     */
    inline AwsDmsEndpointDetails& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p> The name of the server where the endpoint database resides.</p>
     */
    inline AwsDmsEndpointDetails& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p> The name of the server where the endpoint database resides.</p>
     */
    inline AwsDmsEndpointDetails& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p> The SSL mode used to connect to the endpoint. The default is none.</p>
     */
    inline const Aws::String& GetSslMode() const{ return m_sslMode; }

    /**
     * <p> The SSL mode used to connect to the endpoint. The default is none.</p>
     */
    inline bool SslModeHasBeenSet() const { return m_sslModeHasBeenSet; }

    /**
     * <p> The SSL mode used to connect to the endpoint. The default is none.</p>
     */
    inline void SetSslMode(const Aws::String& value) { m_sslModeHasBeenSet = true; m_sslMode = value; }

    /**
     * <p> The SSL mode used to connect to the endpoint. The default is none.</p>
     */
    inline void SetSslMode(Aws::String&& value) { m_sslModeHasBeenSet = true; m_sslMode = std::move(value); }

    /**
     * <p> The SSL mode used to connect to the endpoint. The default is none.</p>
     */
    inline void SetSslMode(const char* value) { m_sslModeHasBeenSet = true; m_sslMode.assign(value); }

    /**
     * <p> The SSL mode used to connect to the endpoint. The default is none.</p>
     */
    inline AwsDmsEndpointDetails& WithSslMode(const Aws::String& value) { SetSslMode(value); return *this;}

    /**
     * <p> The SSL mode used to connect to the endpoint. The default is none.</p>
     */
    inline AwsDmsEndpointDetails& WithSslMode(Aws::String&& value) { SetSslMode(std::move(value)); return *this;}

    /**
     * <p> The SSL mode used to connect to the endpoint. The default is none.</p>
     */
    inline AwsDmsEndpointDetails& WithSslMode(const char* value) { SetSslMode(value); return *this;}


    /**
     * <p> The user name to be used to log in to the endpoint database. </p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p> The user name to be used to log in to the endpoint database. </p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p> The user name to be used to log in to the endpoint database. </p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p> The user name to be used to log in to the endpoint database. </p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p> The user name to be used to log in to the endpoint database. </p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p> The user name to be used to log in to the endpoint database. </p>
     */
    inline AwsDmsEndpointDetails& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p> The user name to be used to log in to the endpoint database. </p>
     */
    inline AwsDmsEndpointDetails& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p> The user name to be used to log in to the endpoint database. </p>
     */
    inline AwsDmsEndpointDetails& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_endpointIdentifier;
    bool m_endpointIdentifierHasBeenSet = false;

    Aws::String m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_extraConnectionAttributes;
    bool m_extraConnectionAttributesHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_sslMode;
    bool m_sslModeHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
