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
    AWS_SECURITYHUB_API AwsApiGatewayRestApiDetails() = default;
    AWS_SECURITYHUB_API AwsApiGatewayRestApiDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayRestApiDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the REST API.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AwsApiGatewayRestApiDetails& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the REST API.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsApiGatewayRestApiDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the REST API.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsApiGatewayRestApiDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the API was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::String>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::String>
    AwsApiGatewayRestApiDetails& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier for the REST API.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    AwsApiGatewayRestApiDetails& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of binary media types supported by the REST API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBinaryMediaTypes() const { return m_binaryMediaTypes; }
    inline bool BinaryMediaTypesHasBeenSet() const { return m_binaryMediaTypesHasBeenSet; }
    template<typename BinaryMediaTypesT = Aws::Vector<Aws::String>>
    void SetBinaryMediaTypes(BinaryMediaTypesT&& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes = std::forward<BinaryMediaTypesT>(value); }
    template<typename BinaryMediaTypesT = Aws::Vector<Aws::String>>
    AwsApiGatewayRestApiDetails& WithBinaryMediaTypes(BinaryMediaTypesT&& value) { SetBinaryMediaTypes(std::forward<BinaryMediaTypesT>(value)); return *this;}
    template<typename BinaryMediaTypesT = Aws::String>
    AwsApiGatewayRestApiDetails& AddBinaryMediaTypes(BinaryMediaTypesT&& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.emplace_back(std::forward<BinaryMediaTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum size in bytes of a payload before compression is enabled.</p>
     * <p>If <code>null</code>, then compression is disabled.</p> <p>If 0, then all
     * payloads are compressed.</p>
     */
    inline int GetMinimumCompressionSize() const { return m_minimumCompressionSize; }
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
    inline const Aws::String& GetApiKeySource() const { return m_apiKeySource; }
    inline bool ApiKeySourceHasBeenSet() const { return m_apiKeySourceHasBeenSet; }
    template<typename ApiKeySourceT = Aws::String>
    void SetApiKeySource(ApiKeySourceT&& value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource = std::forward<ApiKeySourceT>(value); }
    template<typename ApiKeySourceT = Aws::String>
    AwsApiGatewayRestApiDetails& WithApiKeySource(ApiKeySourceT&& value) { SetApiKeySource(std::forward<ApiKeySourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint configuration of the REST API.</p>
     */
    inline const AwsApiGatewayEndpointConfiguration& GetEndpointConfiguration() const { return m_endpointConfiguration; }
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }
    template<typename EndpointConfigurationT = AwsApiGatewayEndpointConfiguration>
    void SetEndpointConfiguration(EndpointConfigurationT&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::forward<EndpointConfigurationT>(value); }
    template<typename EndpointConfigurationT = AwsApiGatewayEndpointConfiguration>
    AwsApiGatewayRestApiDetails& WithEndpointConfiguration(EndpointConfigurationT&& value) { SetEndpointConfiguration(std::forward<EndpointConfigurationT>(value)); return *this;}
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

    int m_minimumCompressionSize{0};
    bool m_minimumCompressionSizeHasBeenSet = false;

    Aws::String m_apiKeySource;
    bool m_apiKeySourceHasBeenSet = false;

    AwsApiGatewayEndpointConfiguration m_endpointConfiguration;
    bool m_endpointConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
