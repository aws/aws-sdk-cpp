/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AWSDomainInformation.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for information about an OpenSearch Service domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DomainInformationContainer">AWS
   * API Reference</a></p>
   */
  class DomainInformationContainer
  {
  public:
    AWS_OPENSEARCHSERVICE_API DomainInformationContainer();
    AWS_OPENSEARCHSERVICE_API DomainInformationContainer(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainInformationContainer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about an Amazon OpenSearch Service domain.</p>
     */
    inline const AWSDomainInformation& GetAWSDomainInformation() const{ return m_aWSDomainInformation; }

    /**
     * <p>Information about an Amazon OpenSearch Service domain.</p>
     */
    inline bool AWSDomainInformationHasBeenSet() const { return m_aWSDomainInformationHasBeenSet; }

    /**
     * <p>Information about an Amazon OpenSearch Service domain.</p>
     */
    inline void SetAWSDomainInformation(const AWSDomainInformation& value) { m_aWSDomainInformationHasBeenSet = true; m_aWSDomainInformation = value; }

    /**
     * <p>Information about an Amazon OpenSearch Service domain.</p>
     */
    inline void SetAWSDomainInformation(AWSDomainInformation&& value) { m_aWSDomainInformationHasBeenSet = true; m_aWSDomainInformation = std::move(value); }

    /**
     * <p>Information about an Amazon OpenSearch Service domain.</p>
     */
    inline DomainInformationContainer& WithAWSDomainInformation(const AWSDomainInformation& value) { SetAWSDomainInformation(value); return *this;}

    /**
     * <p>Information about an Amazon OpenSearch Service domain.</p>
     */
    inline DomainInformationContainer& WithAWSDomainInformation(AWSDomainInformation&& value) { SetAWSDomainInformation(std::move(value)); return *this;}

  private:

    AWSDomainInformation m_aWSDomainInformation;
    bool m_aWSDomainInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
