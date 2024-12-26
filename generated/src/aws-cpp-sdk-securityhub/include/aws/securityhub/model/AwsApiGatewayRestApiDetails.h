/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsApiGatewayEndpointConfiguration.h>
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
   * <p>Contains information about a REST API in version 1 of Amazon API
   * Gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsApiGatewayRestApiDetails">AWS
   * API Reference</a></p>
   */
  class AwsApiGatewayRestApiDetails
  {
  public:
    AWS_SECURITYHUB_API AwsApiGatewayRestApiDetails();
    AWS_SECURITYHUB_API AwsApiGatewayRestApiDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayRestApiDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the REST API.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AwsApiGatewayRestApiDetails& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AwsApiGatewayRestApiDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AwsApiGatewayRestApiDetails& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the REST API.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsApiGatewayRestApiDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsApiGatewayRestApiDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsApiGatewayRestApiDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the REST API.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AwsApiGatewayRestApiDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AwsApiGatewayRestApiDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AwsApiGatewayRestApiDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the API was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::String& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::String&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline void SetCreatedDate(const char* value) { m_createdDateHasBeenSet = true; m_createdDate.assign(value); }
    inline AwsApiGatewayRestApiDetails& WithCreatedDate(const Aws::String& value) { SetCreatedDate(value); return *this;}
    inline AwsApiGatewayRestApiDetails& WithCreatedDate(Aws::String&& value) { SetCreatedDate(std::move(value)); return *this;}
    inline AwsApiGatewayRestApiDetails& WithCreatedDate(const char* value) { SetCreatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier for the REST API.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline AwsApiGatewayRestApiDetails& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline AwsApiGatewayRestApiDetails& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline AwsApiGatewayRestApiDetails& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of binary media types supported by the REST API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBinaryMediaTypes() const{ return m_binaryMediaTypes; }
    inline bool BinaryMediaTypesHasBeenSet() const { return m_binaryMediaTypesHasBeenSet; }
    inline void SetBinaryMediaTypes(const Aws::Vector<Aws::String>& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes = value; }
    inline void SetBinaryMediaTypes(Aws::Vector<Aws::String>&& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes = std::move(value); }
    inline AwsApiGatewayRestApiDetails& WithBinaryMediaTypes(const Aws::Vector<Aws::String>& value) { SetBinaryMediaTypes(value); return *this;}
    inline AwsApiGatewayRestApiDetails& WithBinaryMediaTypes(Aws::Vector<Aws::String>&& value) { SetBinaryMediaTypes(std::move(value)); return *this;}
    inline AwsApiGatewayRestApiDetails& AddBinaryMediaTypes(const Aws::String& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(value); return *this; }
    inline AwsApiGatewayRestApiDetails& AddBinaryMediaTypes(Aws::String&& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(std::move(value)); return *this; }
    inline AwsApiGatewayRestApiDetails& AddBinaryMediaTypes(const char* value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum size in bytes of a payload before compression is enabled.</p>
     * <p>If <code>null</code>, then compression is disabled.</p> <p>If 0, then all
     * payloads are compressed.</p>
     */
    inline int GetMinimumCompressionSize() const{ return m_minimumCompressionSize; }
    inline bool MinimumCompressionSizeHasBeenSet() const { return m_minimumCompressionSizeHasBeenSet; }
    inline void SetMinimumCompressionSize(int value) { m_minimumCompressionSizeHasBeenSet = true; m_minimumCompressionSize = value; }
    inline AwsApiGatewayRestApiDetails& WithMinimumCompressionSize(int value) { SetMinimumCompressionSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the API key for metering requests according to a usage
     * plan.</p> <p> <code>HEADER</code> indicates whether to read the API key from the
     * X-API-Key header of a request.</p> <p> <code>AUTHORIZER</code> indicates whether
     * to read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</p>
     */
    inline const Aws::String& GetApiKeySource() const{ return m_apiKeySource; }
    inline bool ApiKeySourceHasBeenSet() const { return m_apiKeySourceHasBeenSet; }
    inline void SetApiKeySource(const Aws::String& value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource = value; }
    inline void SetApiKeySource(Aws::String&& value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource = std::move(value); }
    inline void SetApiKeySource(const char* value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource.assign(value); }
    inline AwsApiGatewayRestApiDetails& WithApiKeySource(const Aws::String& value) { SetApiKeySource(value); return *this;}
    inline AwsApiGatewayRestApiDetails& WithApiKeySource(Aws::String&& value) { SetApiKeySource(std::move(value)); return *this;}
    inline AwsApiGatewayRestApiDetails& WithApiKeySource(const char* value) { SetApiKeySource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint configuration of the REST API.</p>
     */
    inline const AwsApiGatewayEndpointConfiguration& GetEndpointConfiguration() const{ return m_endpointConfiguration; }
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }
    inline void SetEndpointConfiguration(const AwsApiGatewayEndpointConfiguration& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = value; }
    inline void SetEndpointConfiguration(AwsApiGatewayEndpointConfiguration&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::move(value); }
    inline AwsApiGatewayRestApiDetails& WithEndpointConfiguration(const AwsApiGatewayEndpointConfiguration& value) { SetEndpointConfiguration(value); return *this;}
    inline AwsApiGatewayRestApiDetails& WithEndpointConfiguration(AwsApiGatewayEndpointConfiguration&& value) { SetEndpointConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<Aws::String> m_binaryMediaTypes;
    bool m_binaryMediaTypesHasBeenSet = false;

    int m_minimumCompressionSize;
    bool m_minimumCompressionSizeHasBeenSet = false;

    Aws::String m_apiKeySource;
    bool m_apiKeySourceHasBeenSet = false;

    AwsApiGatewayEndpointConfiguration m_endpointConfiguration;
    bool m_endpointConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
